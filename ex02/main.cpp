/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 03:43:07 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:46:53 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  std::srand(std::time(NULL));
  PresidentialPardonForm p("someone");
  RobotomyRequestForm r("someone");
  ShrubberyCreationForm s("tree");

  Bureaucrat high("high", 5);
  Bureaucrat mid("mid", 10);
  Bureaucrat low("low", 60);
  Bureaucrat vlow("vlow", 150);

  Bureaucrat *brueaucrats[4] = {&vlow, &low, &mid, &high};
  Form *forms[3] = {&s, &r, &p};

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 3; ++j) {
      brueaucrats[i]->signForm(*forms[j]);
      brueaucrats[i]->executeForm(*forms[j]);
    }
  }
  return 0;
}
