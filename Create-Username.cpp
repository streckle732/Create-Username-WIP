#include <iostream>
#include <string>
#include <regex>

void S_CHAR_PRESENT(std::string Username)
{
    const std::regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");
    if (Username.empty())
    {
        std::cout << "No username entered.\n";
    }
    if (std::regex_match(Username, pattern))
    {
        
    }
}

int main()
{
    for (;;) 
    {
        std::cout << "Enter a Username to create an account.\n" ;
        std::string Username;
        std::cin >> Username;

        if (Username.length() > 10)
        {
            std::cout << "Your username is too big. Please try again.\n" ;

        }
        else
        {
            std::cout << "Username " + Username + " Accepted.\n";
            break;
        }
    }
}