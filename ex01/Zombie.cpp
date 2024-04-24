/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:32:37 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:32:38 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("") {}
Zombie::~Zombie(){
	static int i = 0;
	std::cout << "zombie[" << i << "] called " << this->name << " has been destroyed" << std::endl;
	i++;
}
void Zombie::setName(const std::string& newName){
	this->name = newName;
}
void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
