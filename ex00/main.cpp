/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:09:36 by chnaranj          #+#    #+#             */
/*   Updated: 2026/03/12 18:09:37 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat a("Christian", 1);
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("Douglas", 151);
        std::cout << b << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat c("Luis", 150);
        std::cout << c << std::endl;
        c.decrementGrade();
        std::cout << c << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat d("Angel", 0);
        std::cout << d << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
