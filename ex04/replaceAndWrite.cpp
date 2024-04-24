/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceAndWrite.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:38:39 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:38:41 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void replaceAndWrite(std::ofstream& outputFile, const std::string& line, const std::string& s1, const std::string& s2) {
	std::size_t pos = 0;
	std::size_t found = line.find(s1);

	while (found != std::string::npos) {
		outputFile << line.substr(pos, found - pos) << s2;
		pos = found + s1.length();
		found = line.find(s1, pos);
	}

	outputFile << line.substr(pos) << std::endl;
}
