#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <iostream>

class	Contact 
{

	public:

//		Contact(void);
//		~Contact(void);
		void    set_contact();
		void    show_contacts(int i);
		void	show_the_contact();


	private:
		std::string	first_name;
		std::string     last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;


};

#endif
