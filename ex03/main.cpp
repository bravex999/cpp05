/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:30:29 by chnaranj          #+#    #+#             */
/*   Updated: 2026/03/12 18:30:31 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);
    AForm* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Christian");
    if (rrf)
    {
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf;
    }

    rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
    if (rrf)
    {
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf;
    }

    rrf = someRandomIntern.makeForm("presidential pardon", "Criminal");
    if (rrf)
    {
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf;
    }

    rrf = someRandomIntern.makeForm("unknown form", "Target");
    if (rrf)
    {
        delete rrf;
    }

    return 0;
}
