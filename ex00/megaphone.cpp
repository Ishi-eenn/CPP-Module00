/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:59:12 by tsishika          #+#    #+#             */
/*   Updated: 2023/12/24 13:57:12 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define DEF_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char **argv){
	if(argc == 1)
		return (std::cout << DEF_MESSAGE << std::endl, 0);
	for(int i = 1; i < argc; i++){
		std::string str(argv[i]);
		for(size_t j = 0; j < str.size(); j++)
			std::cout << (char)std::toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
}
