/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:49:21 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/01 13:49:22 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SED_H__
#define __SED_H__
#include <iostream>
#include <fstream>
#include <sstream>

/*------------------------------------ sed.cpp --------------------------------------*/
void searchAndReplace(std::string fileName, std::string oldKeyword, std::string newKeyword);

#endif