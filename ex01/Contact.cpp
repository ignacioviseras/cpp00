#include "Contact.hpp"

Contact::Contact() {
    _firstName = "";
    _lastName = "";
    _nickName = "";
    _darkSecret = "";
    _phoneNumber = 0;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string ds, int pn){
	_firstName = fn;
	_lastName = ln;
    _nickName = nn;
    _darkSecret = ds;
    _phoneNumber = pn;
}

Contact::~Contact() {
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getDarkSecret() const {
    return darkSecret;
}

int Contact::getPhoneNumber() const {
    return phoneNumber;
}

void Contact::setFirstName(std::string n) {
    firstName = n;
}

void Contact::setLastName(std::string n) {
    lastName = n;
}

void Contact::setNickname(std::string n) {
    nickname = n;
}

void Contact::setDarkSecret(std::string n) {
    darkSecret = n;
}

void Contact::setPhoneNumber(int num) {
    phoneNumber = num;
}
