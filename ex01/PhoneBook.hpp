#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int _index;
        int _cnt;
        bool isTextOnly(const std::string& str);
        bool isDigitsOnly(const std::string& str);
        std::string formatField(const std::string& str);
        int toInt(const std::string& str);
    public:
        PhoneBook();
        ~PhoneBook();

        void add();
        void search();
};
