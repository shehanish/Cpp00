/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:52:45 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/09 17:36:31 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

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
	
		
	}	
	contacts[current_index].set_lastname(input);
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
	
		
	}	
	contacts[current_index].set_nickname(input);
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
	
		
	}	
	contacts[current_index].set_darkestsecret(input);
	
	
}

void PhoneBook::search() {
	if (total_contacts == 0) {
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}

	std::cout << "last name: " << contacts[0].get_lastname() << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < total_contacts; ++i) {
		std::cout << "|" << std::setw(10) << i << "|"
		          << formatColumn(contacts[i].get_firstname()) << "|"
		          << formatColumn(contacts[i].get_lastname()) << "|"
		          << formatColumn(contacts[i].get_nickname()) << "|"
		          << std::endl;
	}

	std::cout << "Enter the index of the contact to view details: ";
	std::string input;
	std::getline(std::cin, input);

	if (std::cin.eof())
		return;

	if (input.length() != 1 || !std::isdigit(input[0])) {
		std::cout << "Invalid input. Please enter a number from 0 to 7." << std::endl;
		return;
	}

	int index = input[0] - '0';

	if (index < 0 || index >= total_contacts) {
		std::cout << "No contact at this index." << std::endl;
		return;
	}

	// Show full contact
	std::cout << "First Name: " << contacts[index].get_firstname() << std::endl;
	std::cout << "Last Name: " << contacts[index].get_lastname() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phonenumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].get_darkestsecret() << std::endl;
}

std::string		formatColumn(const std::string &input)
{
	if(input.length() > 10)
		return (input.substr(0, 9) + ".");
	else
		return std::string(10 - input.length(), ' ') + input;
}