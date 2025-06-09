/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:18:34 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/09 18:06:32 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

#include <iostream>
#include <string>


int main(int argc, char **argv)
{

	(void)argv;
	(void)argc;
	
	std::string input;
	PhoneBook phonebook;
	Contact contact;
	
	std::cout << "You can ADD, SEARCH or EXIT" << std::endl;
	
	while(true)
	{
		std::cout << ">" ;
		
		if(!std::getline(std::cin, input))
		{
			std::cout << "EOF, Exiting the program!" << std::endl;
			break;
		}
		
		
		if(input == "ADD")
		{
			std::cout << "Adding a new contact" << std::endl;
			phonebook.add_contacts();
			
			
		}
		else if(input == "SEARCH")
		{
			std::cout << "********Displaying the contact list*********" << std::endl;
			phonebook.search();
		}
		else if(input == "EXIT")
		{
			std::cout << "Exiting the program. Goodbye!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Wrong input: try: ADD, SEARCH or EXIT" << std::endl;
			
		}
	}
	
	return (0);
}

