/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeException.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:31:46 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:18:01 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeException.hpp"

GradeExcption::GradeExcption(int grade) : grade_(grade) {}

const int &GradeExcption::grade(void) const { return grade_; }

GradeTooHighException::GradeTooHighException(int grade)
    : GradeExcption(grade) {}

GradeTooLowException::GradeTooLowException(int grade) : GradeExcption(grade) {}

const char *GradeTooLowException::what() const throw() {
  return "Reqested Grade too low";
}

const char *GradeTooHighException::what() const throw() {
  return "Reqested Grade too high";
}
