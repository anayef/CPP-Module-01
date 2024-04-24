/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:38:50 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:38:51 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
	std::cout << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "INFO : I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "WARNING : I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "ERROR: his is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	if (level == "DEBUG") {
		debug();
	}
	
	else if (level == "INFO") {
		info();
	}
	
	else if (level == "WARNING") {
		warning();
	}
	
	else if (level == "ERROR") {
		error();
	}
	
	else {
		std::cerr << "Unknown complaint level: " << level << std::endl;
	}
}