#include <iostream>
#include <string>

int main()
{
    std::string firstInput;
    std::string secondInput;
    std::string combinedString;

    for (int i = 1; i <= 3; i++)
    {
        std::cout << "Iteration " << i << std::endl;

        std::cout << "Enter first string: ";
        std::getline(std::cin, firstInput);

        std::cout << "Enter second string: ";
        std::getline(std::cin, secondInput);

        combinedString = firstInput + secondInput;

        std::cout << "Combined string: " << combinedString << std::endl;
        std::cout << "-----------------------------" << std::endl;
        }

        return 0;
}
