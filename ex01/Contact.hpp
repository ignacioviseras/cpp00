#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _darkSecret;
        int _phoneNumber;
    public:
        Contact();
        Contact(std::string fn, std::string ln, std::string nn, std::string ds, int pn);
        ~Contact();

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getDarkSecret() const;
        int getPhoneNumber() const;
        void setFirstName(std::string n);
        void setLastName(std::string n);
        void setNickname(std::string n);
        void setDarkSecret(std::string n);
        void setPhoneNumber(int num);
};
