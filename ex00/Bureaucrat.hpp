/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 02:35:03 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 17:25:08 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H_
#define BUREAUCRAT_H_

#include <string>

class Bureaucrat {
 public:
  Bureaucrat(const std::string &name, int grade);
  ~Bureaucrat(void);

  const std::string &getName(void) const;
  const int &getGrade(void) const;

  void promote(void);
  void demote(void);

 private:
  Bureaucrat(void);
  Bureaucrat(const Bureaucrat &origin);
  Bureaucrat &operator=(const Bureaucrat &rhs);
  const std::string name_;
  int grade_;

  static const int kHighestGrade = 1;
  static const int kLowestGrade = 150;
};

std::ostream &operator<<(std::ostream &lhs, const Bureaucrat &rhs);

#endif
