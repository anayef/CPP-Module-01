/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:33:25 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:33:26 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

std::string Weapon::getType()const {
	return(this->type);
}

void Weapon::setType(const std::string& type){
	this->type = type;
}

