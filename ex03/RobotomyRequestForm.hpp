/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:57:00 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:18:47 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H_
#define ROBOTOMY_REQUEST_FORM_H_

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm(const std::string &target);
  ~RobotomyRequestForm(void);

  void execute(const Bureaucrat &executor) const;

 private:
  RobotomyRequestForm(void);
  RobotomyRequestForm(const RobotomyRequestForm &origin);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
  static const int kRequiredSignGrade = 72;
  static const int kRequiredExecGrade = 45;
  const std::string target_;
};

#endif
