/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 03:09:15 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 02:10:26 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeException.hpp"

#include <iostream>

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name_(name) {
  if (grade < kHighestGrade) {
    throw GradeTooHighException(grade);
  } else if (grade > kLowestGrade) {
    throw GradeTooLowException(grade);
  }
  grade_ = grade;
}

Bureaucrat::~Bureaucrat(void) {}

const std::string &Bureaucrat::getName(void) const { return name_; }

const int &Bureaucrat::getGrade(void) const { return grade_; }

void Bureaucrat::promote(void) {
  if (grade_ <= kHighestGrade) {
    throw GradeTooHighException(grade_ - 1);
  }
  --grade_;
}

void Bureaucrat::demote(void) {
  if (grade_ >= kLowestGrade) {
    throw GradeTooLowException(grade_ + 1);
  }
  ++grade_;
}

std::ostream &operator<<(std::ostream &lhs, const Bureaucrat &rhs) {
  lhs << "Bureaucrat <" << rhs.getName() << "> grade " << rhs.getGrade();
  return lhs;
}
