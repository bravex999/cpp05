#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);
    AForm* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
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

    rrf = someRandomIntern.makeForm("unknown form", "Target");
    if (rrf)
    {
        delete rrf;
    }

    return 0;
}
