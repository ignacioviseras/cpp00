#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook {
    private:
        Contact[8] contact;
    public:
        PhoneBook();
        ~PhoneBook();

        // std::string getName() const;
        void ADD(std::string n);
        void SEARCH(std::string n);
        void EXIT(std::string n);
};

// #include "PhoneBook.hpp"
// #include "Contact.hpp"

// class PhoneBook
// {
//     private:

//     public:
//         new Contact[8];
// };