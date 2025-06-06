/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shehanihansika <shehanihansika@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:18:34 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/05 14:36:44 by shehanihans      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

#include <iostream>
#include <string>


int main(int argc, char **argv)
{

	
	Contact contact1;
	
	//contact1.set_firstname("Finn");

	//std::cout << contact1.get_firstname() << std::endl;
	
	(void)argv;
	(void)argc;
	
	std::string input;
	PhoneBook phonebook;
	
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
			std::cout << "Searching for a contact" << std::endl;
			phonebook.search();
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

