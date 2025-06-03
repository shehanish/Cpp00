/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:52:45 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/03 18:09:32 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string		formatColumn(const std::string &input);

PhoneBook::PhoneBook()
{
	current_index = 0;
	total_contacts = 0;
}
void	PhoneBook::add_firstname()
{
	std::string 	input;
	Contact contact;
	
	std::cout << "First Name: ";
	std::getline(std::cin, input);
	
	if (input.empty())
	{
		std::cout << "First name cannot be empty!" << std::endl;
		return;
	}
	contacts[current_index].set_firstname(input);

	current_index = (current_index + 1) % 8;
	if(total_contacts < 8)
		total_contacts++;
}



std::string		formatColumn(const std::string &input)
{
	if(input.length() > 10)
		return (input.substr(0, 9) + ".");
	else
		return std::string(10 - input.length(), ' ') + input;
}