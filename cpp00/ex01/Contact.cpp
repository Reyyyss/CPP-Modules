#include "Contact.hpp"

Contact::Contact()
{
	this->FirstName = "";
	this->LastName = "";
	this->NickName = "";
	this->PhoneNumber = "";
	this->DarkestSecret = "";
}

std::string	Contact::getFirstName() const{
	return (this->FirstName);
}

std::string	Contact::getLastName() const{
	return (this->LastName);
}

std::string	Contact::getNickName() const{
	return (this->NickName);
}

std::string	Contact::getPhoneNumber() const{
	return (this->PhoneNumber);
}

std::string	Contact::getDarkestSecret() const{
	return (this->DarkestSecret);
}

void	Contact::setFirstName(std::string name){
	this->FirstName = name;
}

void	Contact::setLastName(std::string name){
	this->LastName = name;
}

void	Contact::setNickName(std::string name){
	this->NickName = name;
}

void	Contact::setPhoneNumber(std::string number){
	this->PhoneNumber = number;
}

void	Contact::setDarkestSecret(std::string secret){
	this->DarkestSecret = secret;
}
