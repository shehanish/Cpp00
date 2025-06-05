/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shehanihansika <shehanihansika@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:18:34 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/05 08:51:08 by shehanihans      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

#include <iostream>
#include <string>

void	exit_signal_handler(int sig)
{
	
}

int main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	
	std::string input;
	PhoneBook phonebook;
	
	std::cout << "You can ADD, SEARCH or EXIT" << std::endl;
	
	while(true)
	{
		std::cout << ">" ;
		std::getline(std::cin, input);
		
		if(input == "ADD")
		{
			std::cout << "Adding a new contact" << std::endl;
			phonebook.add_contacts();
			
			
		}
		else if(input == "SEARCH")
		{
			std::cout << "Searching for a contact" << std::endl;
		}
		else if(input == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Wrong input: try: ADD, SEARCH or EXIT" << std::endl;
			
		}
	}
	
	return (0);
}