/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:54:00 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 02:23:08 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Form *Intern::makeForm(const std::string &form_name,
                       const std::string &target) {
  const char *form_keys[kNumberOfFormKind] = {
      "robotomy request", "presidential pardon", "shrubbery creation"};
  Form *(Intern::*forms[kNumberOfFormKind])(const std::string &target) = {
      &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm,
      &Intern::makeShrubberyCreationForm};
  for (int i = 0; i < kNumberOfFormKind; ++i) {
    if (form_keys[i] == form_name) {
      std::cout << "Intern creates " << form_name << std::endl;
      return (this->*forms[i])(target);
    }
  }
  std::cout << "Intern cannot found form template for <" << form_name << ">"
            << std::endl;
  return NULL;
}

Form *Intern::makeRobotomyRequestForm(const std::string &target) {
  return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string &target) {
  return new PresidentialPardonForm(target);
}

Form *Intern::makeShrubberyCreationForm(const std::string &target) {
  return new ShrubberyCreationForm(target);
}
