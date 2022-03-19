/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:59:46 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:40:46 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>

#include "Bureaucrat.hpp"
#include "FormNotSignedException.hpp"
#include "GradeException.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", kRequiredSignGrade, kRequiredExecGrade),
      target_(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
  if (!is_signed()) {
    throw FormNotSignedException();
  } else if (required_execute_grade() < executor.getGrade()) {
    throw GradeTooLowException(executor.getGrade());
  }
  std::ofstream tree(target_ + "_shrubbery");
  if (tree.is_open()) {
    tree << "   oxoxoo    ooxoo\n"
            " ooxoxo oo  oxoxooo\n"
            "oooo xxoxoo ooo ooox\n"
            "oxo o oxoxo  xoxxoxo\n"
            " oxo xooxoooo o ooo\n"
            "   ooo\\oo\\  /o/o\n"
            "       \\  \\/ /\n"
            "        |   /\n"
            "        |  |\n"
            "        | D|\n"
            "        |  |\n"
            "        |  |\n"
            " ______/____\\____"
         << std::endl;
    tree.close();
  } else {
    std::cout << "failed to plant new shurbbery tree :c" << std::endl;
  }
}
