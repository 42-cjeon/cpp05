/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:57:05 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:47:24 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H_
#define SHRUBBERY_CREATION_FORM_H_

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm(const std::string &target);
  ~ShrubberyCreationForm(void);

  void execute(const Bureaucrat &executor) const;

 private:
  ShrubberyCreationForm(void);
  ShrubberyCreationForm(const ShrubberyCreationForm &origin);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
  static const int kRequiredSignGrade = 145;
  static const int kRequiredExecGrade = 137;
  const std::string target_;
};

#endif
