/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:32:30 by anayef            #+#    #+#             */
/*   Updated: 2024/04/01 21:39:56 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <limits>
int main(){
	std::string name;
	int N;
	std::cout << "ENTER ZOMBIE NAME : " << std::endl;
	std::getline(std::cin, name);
	std::cout << "ENTER NUMBER OF ZOMBIES" << std::endl;
	while(!(std::cin >> N) || N < 0){
		std::cin.clear(); // Clear the fail bit
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "INVALID INPUT, ONLY NUMBERS ACCEPTED" << std::endl;
	}
	Zombie* horde = zombieHorde(N, name);
	for (int i = 0 ; i < N; i++){
		std::cout << "zombe ["<< i << "] ";
		horde[i].announce();
	}
	delete[] horde;
}