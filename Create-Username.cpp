#include <iostream>
#include <string>
#include <regex>

int main()
{
    for (;;) 
    {
        std::cout << "Enter a Username to create an account.\n" ;
        std::string Username;
        std::cin >> Username;
        const std::regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");

        if (std::regex_match(Username, pattern))
        {
            std::cout << "Your username contains one or more special characters\n";
        }
        else
        {
            if (Username.length() > 15)
            {
                std::cout << "Your username is too big. Please try again.\n" ;
            }
            else
            {
                std::cout << "Username " + Username + " Accepted.\n";
            }
            break;
        }
    }
}