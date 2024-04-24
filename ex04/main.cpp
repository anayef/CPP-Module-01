/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anayef <anayef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:38:28 by anayef            #+#    #+#             */
/*   Updated: 2024/03/22 21:38:29 by anayef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::ifstream inputFile(argv[1]);
	std::string outputFileName = std::string(argv[1]) + ".replace";
	std::ofstream outputFile(outputFileName.c_str());



	if (!inputFile.is_open() || !outputFile.is_open()) {
		std::cerr << "ERROR: Unable to open files." << std::endl;
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	while (std::getline(inputFile, line)) {
		replaceAndWrite(outputFile, line, s1, s2);
	}

	inputFile.close();
	outputFile.close();

	std::cout << "Replacement completed successfully." << std::endl;
	return 0;
}
