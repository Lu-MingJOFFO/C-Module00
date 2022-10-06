#include "Contact.class.hpp"
//#include "Phonebook.class.hpp"


int	main(void)
{
	std::string	command;
	std:: string	index;
	Contact		inst;
	Contact		inst2;
	Contact         inst3;
	int		i(0);

	while (command != "EXIT")
	{
		std::cout << "Possible command is ADD, SEARCH or EXIT" << std::endl;
	        getline(std::cin, command);

		if (command == "ADD" && i == 0)
		{
			inst.set_contact();
			i++;
		}
		else if (command == "ADD" && i == 1)
                {
                        inst2.set_contact();
			i++;
                }
		else if (command == "ADD" && i == 2)
                {
                        inst3.set_contact();
			i = 0;
                }
		if (command == "SEARCH")
		{
			std::cout << "Index|First_name|Last_name|nickname" << std::endl;
			inst.show_contacts(1);
			inst2.show_contacts(2);
			inst3.show_contacts(3);
			std::cout << "Enter chosen contact index: ";
			std::cin >> index;
			while (index != "1" && index != "2" && index != "3")
			{
				std::cout << "Wrong value! Possible index values are 1, 2 or 3: ";
			 	std::cin >> index;
			}
			if (index == "1")
				inst.show_the_contact();
			if (index == "2")
				inst2.show_the_contact();
			if (index == "3")
                                inst3.show_the_contact();
		}
	}
	return 0;
}
