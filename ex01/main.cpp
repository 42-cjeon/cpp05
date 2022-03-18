/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 03:43:07 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 15:56:32 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "GradeException.hpp"

void ctor_test(void)
{
  std::cout << 
}

int main(void) {
  Bureaucrat b("bob", 75);

  Form f("Simple-job", 100, 1);

  std::cout << f << std::endl;

  return 0;
}
