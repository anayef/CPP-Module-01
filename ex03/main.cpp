/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:33:14 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:33:15 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
	 // Create a Weapon object
	Weapon knife;
	knife.setType("Knife");

	// Create a HumanA object with a Weapon
	HumanA humanA("John", knife);
	humanA.attack(); // John takes their Knife
	humanA.attack(); // John attacks with their Knife

	// Create a HumanB object without a Weapon
	HumanB humanB("Alice");
	humanB.attack();

	// Set a Weapon for HumanB
	Weapon sword;
	sword.setType("sword");
	humanB.setWeapon(sword);
	humanB.attack();

	return 0;
}