/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 03:43:07 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 14:50:01 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "GradeException.hpp"

int main(void) {
  std::cout << "--- Constructor test ---" << std::endl;
  try {
    for (int i = 1; i < 200; ++i) {
      std::cout << Bureaucrat("TEST", i) << std::endl;
    }
  } catch (const GradeExcption &e) {
    std::cerr << e.what() << " (" << e.grade() << ")" << std::endl;
  }
  try {
    for (int i = 150; i >= 0; --i) {
      std::cout << Bureaucrat("TEST", i) << std::endl;
    }
  } catch (const GradeExcption &e) {
    std::cerr << e.what() << " (" << e.grade() << ")" << std::endl;
  }

  std::cout << "--- promotion test ---" << std::endl;
  try {
    Bureaucrat b("TEST", 150);
    for (int i = 0; i < 150; i++) {
      b.promote();
      std::cout << b << std::endl;
    }
  } catch (const GradeExcption &e) {
    std::cerr << e.what() << " (" << e.grade() << ")" << std::endl;
  }

  std::cout << "--- demotion test ---" << std::endl;
  try {
    Bureaucrat b("TEST", 1);
    for (int i = 0; i < 150; i++) {
      b.demote();
      std::cout << b << std::endl;
    }
  } catch (const GradeExcption &e) {
    std::cerr << e.what() << " (" << e.grade() << ")" << std::endl;
  }
  return 0;
}
