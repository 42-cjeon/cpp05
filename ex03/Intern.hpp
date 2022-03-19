/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:49:35 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 20:26:08 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H_
#define INTERN_H_

class Form;
class RobotomyRequestForm; 
class PresidentialPardonForm;
class ShrubberyCreationForm;

#include <string>

class Intern {
  public:
    Intern(void);
    ~Intern(void);
    Form *makeForm(const std::string &form_name, const std::string &target);

  private:
    enum { kNumberOfFormKind = 3};

    Form *makeRobotomyRequestForm(const std::string &target);
    Form *makePresidentialPardonForm(const std::string &target);
    Form *makeShrubberyCreationForm(const std::string &target);

    Intern(const Intern &);
    Intern &operator=(const Intern &);
};

#endif
