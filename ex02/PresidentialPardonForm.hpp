/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:05:52 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:18:11 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H_
#define PRESIDENTIAL_PARDON_FORM_H_

#include "Form.hpp"

class PresidentialPardonForm : public Form {
 public:
  PresidentialPardonForm(const std::string &target);
  ~PresidentialPardonForm(void);

  void execute(const Bureaucrat &executor) const;

 private:
  PresidentialPardonForm(void);
  PresidentialPardonForm(const PresidentialPardonForm &origin);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
  static const int kRequiredSignGrade = 25;
  static const int kRequiredExecGrade = 5;
  const std::string target_;
};

#endif
