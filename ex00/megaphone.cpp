/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shehanihansika <shehanihansika@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 21:34:29 by shkaruna          #+#    #+#             */
/*   Updated: 2025/05/28 11:33:08 by shehanihans      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if(argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; ++i)
		{
			for(int j = 0; argv[i][j]; ++j)
			{
				std::cout << static_cast<char>(std::toupper(argv[i][j]));	
			}
			if (i < argc - 1)
                std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return(0);
	
}