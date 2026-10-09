#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter your monthly costs for the following housing related expenses.\n";

    double rentOrMortgage = 0.0;
    double phones = 0.0;
    double internetServices = 0.0;
    double utilities = 0.0;
    double cable = 0.0;

    std::cout << "Rent or mortgage: $";
    std::cin >> rentOrMortgage;

    std::cout << "Phones: $";
    std::cin >> phones;

    std::cout << "Internet services: $";
    std::cin >> internetServices;

    std::cout << "Utilities: $";
    std::cin >> utilities;

    std::cout << "Cable: $";
    std::cin >> cable;

    double totalMonthly = rentOrMortgage + phones + internetServices + utilities + cable;
    double totalAnnual = totalMonthly * 12.0;

    std::cout << std::fixed << std::setprecision(2) << "\n";
    std::cout << "Total monthly cost: $" << totalMonthly << '\n';
    std::cout << "Total annual cost:  $" << totalAnnual << '\n';

    return 0;
}