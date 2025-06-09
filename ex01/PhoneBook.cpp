#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook() {

}


void PhoneBook::add() {
    Contact c;
    std::string input;

    while (true) {
        std::cout << "First Name: ";
        std::getline(std::cin, input);
        if (isTextOnly(input)) {
            c.setFirstName(input);
            break;
        } else {
            std::cout << "Invalid text. Please enter a name without numbers or empty.\n";
        }
    }

    while (true) {
        std::cout << "Last Name: ";
        std::getline(std::cin, input);
        if (isTextOnly(input)) {
            c.setLastName(input);
            break;
        } else {
            std::cout << "Invalid text. Please enter a name without numbers or empty.\n";
        }
    }

    while (true) {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
        if (isTextOnly(input)) {
            c.setNickname(input);
            break;
        } else {
            std::cout << "Invalid text. Please enter a nickname without numbers or empty.\n";
        }
    }

    while (true) {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, input);
        if (!input.empty()) {
            c.setDarkSecret(input);
            break;
        } else {
            std::cout << "Invalid text. Please enter text.\n";
        }
    }

    while (true) {
        std::cout << "Phone Number: ";
        std::getline(std::cin, input);
        if (isDigitsOnly(input)) {
            c.setPhoneNumber(toInt(input));
            break;
        } else {
            std::cout << "Invalid phone number. Please enter digits only or empty.\n";
        }
    }

    contacts[_index % 8] = c;
    _index++;
    std::cout << "✅ Contact added ✅\n";
}

void PhoneBook::search() {
    int count = (_index < 8) ? _index : 8;
    if (count == 0) {
        std::cout << "No contacts to display.\n";
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < count; i++) {
        std::cout << std::setw(10) << i << "|"
                  << formatField(contacts[i].getFirstName()) << "|"
                  << formatField(contacts[i].getLastName()) << "|"
                  << formatField(contacts[i].getNickname()) << std::endl;
    }

    std::string input;
    std::cout << "Enter index to display contact details: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "❌ Input is empty. Aborting.\n";
        return;
    }
    int idx;
    try {
        idx = toInt(input);
    } catch (...) {
        std::cout << "❌ Invalid input. Not a number.\n";
        return;
    }
    if (idx < 0 || idx >= count) {
        std::cout << "❌ Invalid index. Out of range (0–" << count - 1 << ").\n";
        return;
    }

    std::cout << "\n--- Contact details ---\n";
    std::cout << "First name: " << contacts[idx].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[idx].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[idx].getNickname() << std::endl;
    std::cout << "Darkest secret: " << contacts[idx].getDarkSecret() << std::endl;
    std::cout << "Phone number: " << contacts[idx].getPhoneNumber() << std::endl << std::endl;
}

std::string PhoneBook::formatField(const std::string& str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    } else {
        return std::string(10 - str.length(), ' ') + str;
    }
}

bool PhoneBook::isTextOnly(const std::string& str) {
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (c >= '0' && c <= '9') {
            return false;
        }
    }
    return true;
}

bool PhoneBook::isDigitsOnly(const std::string& str) {
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}


int PhoneBook::toInt(const std::string& str) {
    std::istringstream iss(str);
    int value;
    iss >> value;
    return value;
}