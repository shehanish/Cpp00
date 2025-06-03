/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:18:55 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/03 18:05:39 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
#define		PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string>

class 	 PhoneBook{
	private:
		Contact		contacts[8];
		int			current_index;
		int			total_contacts;

	public:
		PhoneBook();
		void	add_firstname();
		
	
};


#endif