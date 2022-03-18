/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeException.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:28:47 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 15:32:07 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADE_EXCEPTION_H_
#define GRADE_EXCEPTION_H_

#include <exception>

const int kHighestGrade = 1;
const int kLowestGrade = 150;

class GradeExcption : public std::exception {
 public:
  GradeExcption(int grade);
  const int &grade(void) const;
  virtual const char *what() const throw() = 0;

 private:
  const int grade_;
};

class GradeTooHighException : public GradeExcption {
 public:
  GradeTooHighException(int grade);
  const char *what() const throw();
};

class GradeTooLowException : public GradeExcption {
 public:
  GradeTooLowException(int grade);
  const char *what() const throw();
};

#endif
