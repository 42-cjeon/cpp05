/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormNotSignedException.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:48:19 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 19:17:56 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FormNotSignedException.hpp"

const char *FormNotSignedException::what() const throw() {
  return "Form not signed";
}
