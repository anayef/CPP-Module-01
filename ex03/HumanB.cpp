/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:33:07 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:33:08 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name){}

void HumanB::setWeapon(Weapon weapon){
	this->weapon = weapon;
}

void HumanB::attack() const {
	if (!weapon.getType().empty()) {
		std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
	} else {
		std::cout << this->name << " is unarmed" << std::endl;
	}
}