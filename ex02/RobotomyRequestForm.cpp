/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:59:40 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:45:39 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <iostream>

#include "Bureaucrat.hpp"
#include "FormNotSignedException.hpp"
#include "GradeException.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", kRequiredSignGrade, kRequiredExecGrade),
      target_(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
  if (!is_signed()) {
    throw FormNotSignedException();
  } else if (required_execute_grade() < executor.getGrade()) {
    throw GradeTooLowException(executor.getGrade());
  }
  std::cout << "drrrr... drrr.... (some drilling sound)" << std::endl;
  if (std::rand() % 2 == 0) {
    std::cout << target_ << " has been robotomized successfully" << std::endl;
  } else {
    std::cout << "failed to robotomize " << target_ << std::endl;
  }
}
