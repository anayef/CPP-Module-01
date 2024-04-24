/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:33:10 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:33:11 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanB(const std::string& name);
		void setWeapon(Weapon weapon);
		void attack() const;
};

#endif