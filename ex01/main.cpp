/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:10:57 by chnaranj          #+#    #+#             */
/*   Updated: 2026/03/12 18:10:58 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try
    {
        Form invalidHigh("FormA", 0, 50);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Form invalidLow("FormB", 50, 151);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat boss("Christian", 1);
        Bureaucrat intern("Douglas", 150);
        Form taxForm("TaxForm", 50, 50);

        std::cout << taxForm << std::endl;

        intern.signForm(taxForm);
        std::cout << taxForm << std::endl;

        boss.signForm(taxForm);
        std::cout << taxForm << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
