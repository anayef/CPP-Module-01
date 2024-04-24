/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:32:44 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:32:45 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* hord = new Zombie[N];
	for (int i = 0; i < N ; i++){
		hord[i].setName(name);
	}
	return (hord);
}