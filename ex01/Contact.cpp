/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:26:57 by tsishika          #+#    #+#             */
/*   Updated: 2023/10/30 00:50:04 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string newFirstName)
{
	firstName = newFirstName;
}

void Contact::setLastName(std::string newLastName)
{
	lastName = newLastName;
}

void Contact::setNickName(std::string newNickName)
{
	nickName = newNickName;
}

void Contact::setPhoneNumber(std::string newPhoneNumber)
{
	phoneNumber = newPhoneNumber;
}

void Contact::setDarkestSecret(std::string newDarkestSecret)
{
	darkestSecret = newDarkestSecret;
}

std::string Contact::getFirstName() const
{
	return (firstName);
}

std::string Contact::getLastName() const
{
	return (lastName);
}

std::string Contact::getNickName() const
{
	return (nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (darkestSecret);
}
