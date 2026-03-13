/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:21:55 by chnaranj          #+#    #+#             */
/*   Updated: 2026/03/12 18:21:56 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm
{
private:
    const std::string _target;
    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    virtual ~ShrubberyCreationForm();

    void execute(Bureaucrat const & executor) const;

    class FileOpeningException : public std::exception
    {
    public:
        virtual const char* what() const throw();
        
    };
};

#endif
