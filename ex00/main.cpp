#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat a("Alice", 1);
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
        Bureaucrat b("Bob", 151);
        std::cout << b << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat c("Charlie", 150);
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
        Bureaucrat d("Dave", 0);
        std::cout << d << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
