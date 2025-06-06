#include "Contact.hpp"
#include "PhoneBook.hpp"


int main() {
    std::cout << "Select option:" << std::endl;
    std::cout << "1. ADD" << std::endl;
    std::cout << "2. SEARCH" << std::endl;
    std::cout << "3. EXIT" << std::endl;

    std::string text;
    getline(std::cin, text);

    std::cout << "'" << text << "'" << std::endl;
    if (text == "ADD")
    {
        // new PhoneBook pb;
        // pb.
        std::cout << "option 1" << std::endl;
    }
    else if (text == "SEARCH")
        std::cout << "option 2" << std::endl;
    else if (text == "EXIT")
    {
        std::cout << "BYE :(" << std::endl;
        return 0;
    }
    return 0;
}
