/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shehanihansika <shehanihansika@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:52:45 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/05 15:20:20 by shehanihans      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string		formatColumn(const std::string &input);

PhoneBook::PhoneBook()
{
	current_index = 0;
	total_contacts = 0;
}
void	PhoneBook::add_contacts()
{
	
	add_firstname();
	add_lastname();
	add_nickname();
	add_phonenumber();
	add_darkest_secret();

	current_index = (current_index + 1) % 8;
	if(total_contacts < 8)
		total_contacts++;
	
}

void     PhoneBook::add_firstname()
{
	std::string 	input;
	Contact contact;
	
	while(true)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, input);
	
		if (!input.empty())
			break;
			
		std::cout << "First name cannot be empty!" << std::endl;
		
	}
	contacts[current_index].set_firstname(input);
}

void     PhoneBook::add_lastname()
{
	std::string 	input;
	Contact contact;
	
	while(true)
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, input);
		
		if (!input.empty())
			break;
			
		std::cout << "Last name cannot be empty!" << std::endl;
	
		contacts[current_index].set_lastname(input);
	}	
}

void     PhoneBook::add_nickname()
{
	std::string 	input;
	Contact contact;
	
	while(true)
	{
		std::cout << "Nick Name: ";
		std::getline(std::cin, input);
		
		if (!input.empty())
			break;
			
		std::cout << "Nick name cannot be empty!" << std::endl;
	
		contacts[current_index].set_nickname(input);
	}	
}

void     PhoneBook::add_phonenumber()
{
	std::string 	input;
	Contact contact;
	
	while(true)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, input);
		
		if (input.empty())
		{
			std::cout << "Phone number cannot be empty!" << std::endl;
			continue;
		}
		if(!std::all_of(input.begin(), input.end(), ::isdigit))
		{
			std::cout << "Please enter numbers only! " << std::endl;
			continue;
		}
		contacts[current_index].set_phonenumber(input);
		break;
	}	
}

void     PhoneBook::add_darkest_secret()
{
	std::string 	input;
	Contact contact;
	
	while(true)
	{
		std::cout << "Reveal your darkest secret: ";
		std::getline(std::cin, input);
		
		if (!input.empty())
			break;
			
		std::cout << "Darkest secret cannot be empty!" << std::endl;
	
		contacts[current_index].set_nickname(input);
	}	
	
	
}

void	PhoneBook::search()
{
	std::string		input;
	Contact contact;
	std::getline(std::cin, input);
	std::cout << input << std::endl;


	
	std::cout << contacts[0].get_firstname();
	std::cout << "|" << std::endl;
}
std::string		formatColumn(const std::string &input)
{
	if(input.length() > 10)
		return (input.substr(0, 9) + ".");
	else
		return std::string(10 - input.length(), ' ') + input;
}