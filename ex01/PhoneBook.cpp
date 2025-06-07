#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

}

void PhoneBook::add() {
    Contact c;
    std::string input;

    std::cout << "First Name: ";
    getline(std::cin, input);
    c.setFirstName(input);

    std::cout << "Last Name: ";
    std::getline(std::cin, input);
    c.setLastName(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    c.setNickname(input);

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, input);
    c.setDarkSecret(input);

    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
    c.setPhoneNumber(std::stoi(input));

    contacts[index % 8] = c;
    _index++;
    std::cout << "✅ Contact added ✅\n";

}

void PhoneBook::search(std::string n) {
    // darkSecret = n;
}
void PhoneBook::exit(std::string n) {
    // darkSecret = n;
}