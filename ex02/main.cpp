/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:12:02 by chnaranj          #+#    #+#             */
/*   Updated: 2026/03/12 18:12:03 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat boss("President", 1);
    Bureaucrat assistant("Assistant", 45);
    Bureaucrat intern("Intern", 150);

    ShrubberyCreationForm f1("home");
    RobotomyRequestForm f2("Christian");
    PresidentialPardonForm f3("Criminal");

    std::cout << "--- Shrubbery Test ---" << "\n";
    intern.executeForm(f1);
    assistant.signForm(f1);
    assistant.executeForm(f1);

    std::cout << "\n--- Robotomy Test ---" << "\n";
    assistant.signForm(f2);
    assistant.executeForm(f2);
    boss.executeForm(f2);

    std::cout << "\n--- Pardon Test ---" << "\n";
    boss.executeForm(f3);
    boss.signForm(f3);
    boss.executeForm(f3);

    return 0;
}
