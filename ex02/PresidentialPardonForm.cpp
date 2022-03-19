/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:11:58 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:32:34 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <iostream>

#include "Bureaucrat.hpp"
#include "FormNotSignedException.hpp"
#include "GradeException.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("PresidentialPardonForm", kRequiredSignGrade, kRequiredExecGrade),
      target_(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
  if (!is_signed()) {
    throw FormNotSignedException();
  } else if (required_execute_grade() < executor.getGrade()) {
    throw GradeTooLowException(executor.getGrade());
  }
  std::cout << target_ << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
