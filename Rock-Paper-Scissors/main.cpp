#include <iostream>
#include <string>
#include <time.h>

int main( void ) {
	system("clear");
	int num = 0;
	while (!std::cin.eof())
	{
	std::cin.clear();
	std::cout << "Choose your weapon: Rock🪨, Paper📜 or Scissors✂️ by their number and press Enter" << std::endl;
	std::cout << "1 - 🪨Rock:" << std::endl << "2 - 📜Paper: " << std::endl << "3 - ✂️ Scissors:" << std::endl;
	std::cin >> num;
	switch(num){
		case 1:
			std::cout << "You chose Rock! 🪨" << std::endl;
			break ;
		case 2:
			std::cout << "You chose Paper!📜" << std::endl;
			break ;
		case 3:
			std::cout << "You chose Scissors!✂️" << std::endl;
			break;
		default:
			std::cout << "You chose the wrong weapon, please relaunch and try again" << std::endl;
			break ;
	}
	srand((unsigned) time (0));
	if (rand() % 2 == 0) {
		std::cout << "The computer picked Paper!📜" << std::endl;
		if (num == 2)
			std::cout << "Draw!" << std::endl;
		else if (num == 1)
			std::cout << "You lost to the computer" << std::endl;
		else if (num == 3)
			std::cout << "You won the computer" << std::endl;
	}
	else if (rand() % 3 == 0) {
			std::cout << "The computer picked Scissors✂️ !" << std::endl;
		if (num == 3)
			std::cout << "Draw!" << std::endl;
		else if (num == 2)
			std::cout << "You lost to the computer" << std::endl;
		else if (num == 1)
			std::cout << "You won the computer" << std::endl;
	}
	else{
			std::cout << "The computer picked Rock🪨!" << std::endl;
		if (num == 1)
			std::cout << "Draw!" << std::endl;
		else if (num == 3)
			std::cout << "You lost to the computer" << std::endl;
		else if (num == 2)
			std::cout << "You won the computer" << std::endl;
	}
	std::cout << "Press enter to try again" << std::endl;
	std::cin.get();
	std::cin.ignore(2147483647, '\n');
	std::cin.clear();
	system("clear");
	}
}