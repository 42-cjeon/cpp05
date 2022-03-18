/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:01:45 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 15:49:52 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H_
#define FORM_H_

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "GradeException.hpp"

class Form {
 public:
  Form(const std::string &name, int required_sign_grade,
       int required_execute_grade);
  Form(const Form &origin);
  Form &operator=(const Form &rhs);
  ~Form(void);

  void beSigned(const Bureaucrat &bureaucrat);

  const bool &is_signed(void) const;
  const std::string &name(void) const;
  const int &required_sign_grade(void) const;
  const int &required_execute_grade(void) const;

 private:
  Form(void);
  void checkGradeOrThrow(void);
  bool is_signed_;
  const std::string name_;
  const int required_sign_grade_;
  const int required_execute_grade_;
};

std::ostream &operator<<(std::ostream &lhs, const Form &rhs);

#endif
