/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 03:43:07 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 20:35:27 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  Intern someRandomIntern;
  Form *form;

  form = someRandomIntern.makeForm("some random", "someone");
  delete form;

  form = someRandomIntern.makeForm("presidential pardon", "someone");
  delete form;

  form = someRandomIntern.makeForm("robotomy request", "someone");
  delete form;

  form = someRandomIntern.makeForm("shrubbery creation", "someone");
  delete form;

  return 0;
}
