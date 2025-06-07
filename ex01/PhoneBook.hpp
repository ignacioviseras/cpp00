#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int _index;
        int _cnt;
    public:
        PhoneBook();
        ~PhoneBook();

        void add();
        void search();
        void exit();
};
