/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:59:12 by tsishika          #+#    #+#             */
/*   Updated: 2023/12/24 14:45:59 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define DEF_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

static void megaphone(const char *str){
	for(int i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
}

int main(int argc, char **argv){
	if(argc == 1)
		return (std::cout << DEF_MESSAGE << std::endl, 0);
	for(int i = 1; i < argc; i++)
		megaphone(argv[i]);
	std::cout << std::endl;
	return (0);
}
