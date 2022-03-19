/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormNotSignedException.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:46:55 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:17:59 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_NOT_SIGNED_EXCEPTION_H_
#define FORM_NOT_SIGNED_EXCEPTION_H_

#include <exception>

class FormNotSignedException : public std::exception {
 public:
  const char *what() const throw();
};

#endif
