/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:33:00 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:33:01 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& humanWeapon) : name(name), weapon(humanWeapon){
	std::cout << this->name << " takes their " << weapon.getType() << std::endl;
}

void HumanA::attack()const{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}