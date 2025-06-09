#include "Contact.hpp"
#include "PhoneBook.hpp"


int main() {
    PhoneBook p;
    while (true) {
        std::cout << "Select option:" << std::endl;
        std::cout << "1. ADD" << std::endl;
        std::cout << "2. SEARCH" << std::endl;
        std::cout << "3. EXIT" << std::endl;

        std::cout << "> ";
        std::string text;
        std::getline(std::cin, text);

        if (text == "ADD")
            p.add();
        else if (text == "SEARCH")
            p.search();
        else if (text == "EXIT")
        {
            std::cout << "BYE :(" << std::endl;
            break;
        }
        else
            std::cout << "❌ Invalid option. Try ADD, SEARCH or EXIT." << std::endl;
    }
    return 0;
}
