/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:01:10 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 15:55:30 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include "GradeException.hpp"

void Form::checkGradeOrThrow(void) {
  if (required_sign_grade_ < kHighestGrade) {
    throw GradeTooHighException(required_sign_grade_);
  } else if (required_execute_grade_ < kHighestGrade) {
    throw GradeTooHighException(required_execute_grade_);
  } else if (required_sign_grade_ > kLowestGrade) {
    throw GradeTooHighException(required_sign_grade_);
  } else if (required_execute_grade_ > kLowestGrade) {
    throw GradeTooHighException(required_execute_grade_);
  }
}

Form::Form(const std::string &name, int required_sign_grade,
           int required_execute_grade)
    : is_signed_(false),
      name_(name),
      required_sign_grade_(required_sign_grade),
      required_execute_grade_(required_execute_grade) {
  checkGradeOrThrow();
}

Form::Form(const Form &origin)
    : is_signed_(origin.is_signed_),
      name_(origin.name_),
      required_sign_grade_(origin.required_sign_grade_),
      required_execute_grade_(origin.required_execute_grade_) {}

Form &Form::operator=(const Form &rhs) {
  is_signed_ = rhs.is_signed_;
  const_cast<std::string &>(name_) = rhs.name_;
  const_cast<int &>(required_sign_grade_) = rhs.required_sign_grade_;
  const_cast<int &>(required_execute_grade_) = rhs.required_execute_grade_;
  return *this;
}

Form::~Form(void) {}

const bool &Form::is_signed(void) const { return is_signed_; }

const std::string &Form::name(void) const { return name_; }

const int &Form::required_sign_grade(void) const {
  return required_sign_grade_;
}

const int &Form::required_execute_grade(void) const {
  return required_execute_grade_;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
  if (required_sign_grade_ < bureaucrat.getGrade()) {
    throw GradeTooLowException(bureaucrat.getGrade());
  }
  is_signed_ = true;
}

std::ostream &operator<<(std::ostream &lhs, const Form &rhs) {
  lhs << "Form <" << rhs.name() << "> "
      << (rhs.is_signed() ? "[signed] " : "[not signed] ")
      << "Required grade: (sign=" << rhs.required_sign_grade()
      << ", execute=" << rhs.required_execute_grade()
      << ")";
  return lhs;
}
