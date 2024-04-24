/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:32:08 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:32:09 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setName(const std::string& newName);
		void announce();
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif