/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 03:43:07 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 17:35:18 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "GradeException.hpp"

void try_create_form(const std::string name, int sign_grade, int exec_grade) {
  try {
    Form f(name, sign_grade, exec_grade);
    std::cout << f << std::endl;
  } catch (GradeExcption &e) {
    std::cerr << e.what() << " (" << e.grade() << ")" << std::endl;
  }
}

void ctor_test(void)
{
  std::cout << "--- test Form ctor ---" << std::endl;
  try_create_form("TEST", 1, 1);
  try_create_form("TEST", 0, 1);
  try_create_form("TEST", 1, 0);
  try_create_form("TEST", 0, 0);
  try_create_form("TEST", 150, 150);
  try_create_form("TEST", 151, 150);
  try_create_form("TEST", 150, 151);
  try_create_form("TEST", 151, 151);
}

void sign_test(void)
{
  std::cout << "--- test sign ---" << std::endl;
  Bureaucrat bob("bob", 42);
  Form low("LOW", 150, 1);
  Form eq("EQUAL", 42, 1);
  Form high("HIGH", 1, 1);

  bob.signForm(low);
  bob.signForm(eq);
  bob.signForm(high);
}

int main(void) {
  ctor_test();
  sign_test();
  return 0;
}
