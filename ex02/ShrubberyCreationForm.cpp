/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:19:35 by chnaranj          #+#    #+#             */
/*   Updated: 2026/03/12 18:19:37 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137), _target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
    {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradeToExecute())
    {
        throw AForm::GradeTooLowException();
    }

    std::ofstream outfile((_target + "_shrubbery").c_str());
    if (!outfile.is_open())
    {
        throw ShrubberyCreationForm::FileOpeningException();
    }

    outfile << "      /\\      " << "\n";
    outfile << "     /\\*\\     " << "\n";
    outfile << "    /\\O\\*\\    " << "\n";
    outfile << "   /*/\\/\\/\\   " << "\n";
    outfile << "  /\\O\\/\\*\\/\\  " << "\n";
    outfile << " /\\*\\/\\*\\/\\/\\ " << "\n";
    outfile << "      ||      " << "\n";
    outfile << "      ||      " << "\n";

    outfile.close();
}
