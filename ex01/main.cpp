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
        std::cerr << "Exception: " << e.what() << "\n";
    }

    try
    {
        Form invalidLow("FormB", 50, 151);
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    try
    {
        Bureaucrat boss("Alice", 1);
        Bureaucrat intern("Bob", 150);
        Form taxForm("TaxForm", 50, 50);

        std::cout << taxForm << "\n";

        intern.signForm(taxForm);
        std::cout << taxForm << "\n";

        boss.signForm(taxForm);
        std::cout << taxForm << "\n";
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}
