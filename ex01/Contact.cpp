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
    return _firstName;
}

std::string Contact::getLastName() const {
    return _lastName;
}

std::string Contact::getNickname() const {
    return _nickName;
}

std::string Contact::getDarkSecret() const {
    return _darkSecret;
}

int Contact::getPhoneNumber() const {
    return _phoneNumber;
}

void Contact::setFirstName(std::string n) {
    _firstName = n;
}

void Contact::setLastName(std::string n) {
    _lastName = n;
}

void Contact::setNickname(std::string n) {
    _nickName = n;
}

void Contact::setDarkSecret(std::string n) {
    _darkSecret = n;
}

void Contact::setPhoneNumber(int num) {
    _phoneNumber = num;
}
