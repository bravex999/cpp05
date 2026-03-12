/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:20:53 by chnaranj          #+#    #+#             */
/*   Updated: 2026/03/12 18:20:54 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{
}

AForm* Intern::_makeShrubbery(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::_makeRobotomy(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::_makePardon(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
	static const std::string names[] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	static AForm* (Intern::*methods[])(const std::string&) = 
	{
		&Intern::_makeShrubbery,
		&Intern::_makeRobotomy,
		&Intern::_makePardon
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
		{
			std::cout << "Intern creates " << name << "\n";
			return (this->*methods[i])(target);
		}
	}

	std::cout << "Error: Intern cannot create " << name << "\n";
	return NULL;
}
