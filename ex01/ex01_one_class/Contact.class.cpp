#include "Contact.class.hpp"


//Contact::Contact(void){}

//Contact::~Contact(void){}

void	Contact::set_contact()
{
	std::cout << "Enter first name: ";
	getline(std::cin, first_name);
        std::cout << "Enter last name: ";
	getline(std::cin, last_name);
        std::cout << "Enter nickname: ";
	getline(std::cin, nickname);
        std::cout << "Enter phone number: ";
	getline(std::cin, phone_number);
        std::cout << "Enter darkest secret: ";
	getline(std::cin, darkest_secret);
}

void	Contact::show_contacts(int i)
{
	std::cout << i << "|" << first_name << "|" << last_name << "|" << nickname << std::endl;
}

void	Contact::show_the_contact()
{
	std::cout << "First name :" << first_name << std::endl;
	std::cout << "Last name :" << last_name << std::endl;
	std::cout << "Nickname :" << nickname << std::endl;
	std::cout << "Phone number :" << phone_number << std::endl;
	std::cout << "Darkest secret :" << darkest_secret << std::endl;
}

