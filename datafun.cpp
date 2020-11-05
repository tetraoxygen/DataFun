/*

	GeometryFun
	Charlie Welsh
	2020-10-26
	Nova on macOS with CMake on various platforms

	Pseudocode: 
	
	get user input 
	
	print if user input is positive or negative
	
	print if input is over 1000
	print else if input is over 100
	print else if input is over 10
	
	print if input is odd or even
	
	switch {
		2:
			print helium
		10: 
			print neon	
		18:
			print argon
		(and so on) 
		default:
			print not a noble gas
	}
	
	get user input
	
	print if input is uppercase or lowercase
	
	print is a vowel if uppercase(input) matches A E I O or U
	
	print ascii value of input
	
	print ordinal((decimal(uppercase(input)) - 64))
	
	function ordinal (number) {
		1: 
			return 1st
		2: 
			return 2nd
		3:
			return 3rd
		(and so on)
	}

*/

#include <iostream>
#include <string>

std::string toOrdinal(int cardinal)
{
	switch (cardinal) {
		case 1:
			return "1st";
		case 2:
			return "2nd";
		case 3:
			return "3rd";
		case 4:
			return "4th";
		case 5:
			return "5th";
		case 6:
			return "6th";
		case 7:
			return "7th";
		case 8:
			return "8th";
		case 9:
			return "9th";
		case 10:
			return "10th";
		case 11:
			return "11th";
		case 12:
			return "12th";
		case 13:
			return "13th";
		case 14:
			return "14th";
		case 15:
			return "15th";
		case 16:
			return "16th";
		case 17:
			return "17th";
		case 18:
			return "18th";
		case 19:
			return "19th";
		case 20:
			return "20th";
		case 21:
			return "21st";
		case 22:
			return "22nd";
		case 23:
			return "23rd";
		case 24:
			return "24th";
		case 25:
			return "25th";
		case 26:
			return "26th";
		default: 
			return "unsupported";
	}
}

int main()
{
	int intInput;
	
	std::cout << "What is your favorite integer? ";
	std::cin >> intInput; 
	// This just prints something if the user doesn't put in a number instead of crashing. 
	if (!std::cin.good()) {
		std::cout << "That wasn't an integer." << std::endl;
		return 0;
	}
	
	if (intInput < 0) {
		std::cout << "\t" <<  intInput << " is a negative number," << std::endl;
	} else {
		std::cout << "\t" <<  intInput << " is a positive number," << std::endl;
	}
	
	if (intInput > 1000) {
		std::cout << "\t" << "it is greater than 10," << std::endl;
	} else if (intInput > 100) {
		std::cout << "\t" << "it is greater than 10," << std::endl;
	} else if (intInput > 10) {
		std::cout << "\t" << "it is greater than 10," << std::endl;
	}
	
	
	if (intInput % 2 == 0) {
		std::cout << "\t" << "it is even," << std::endl;
	} else {
		std::cout << "\t" << "it is odd," << std::endl;
	}
	
	switch (intInput) {
		case 2: 
			std::cout << "\t" << "and it is the atomic number of Helium." << std::endl;
		case 10: 
			std::cout << "\t" << "and it is the atomic number of Neon." << std::endl;
		case 18: 
			std::cout << "\t" << "and it is the atomic number of Argon." << std::endl;
		case 36: 
			std::cout << "\t" << "and it is the atomic number of Krypton." << std::endl;
		case 54: 
			std::cout << "\t" << "and it is the atomic number of Xenon." << std::endl;
		case 86: 
			std::cout << "\t" << "and it is the atomic number of Radon." << std::endl;
		default: 
			std::cout << "\t" << "and it is not the atomic number of a noble gas." << std::endl;
	}
	
	char charInput;
	
	std::cout << "What is your favorite character? ";
	std::cin >> charInput; 
	
	// This just prints something if the user doesn't put in a number instead of crashing. 
	if (!std::cin.good()) {
		std::cout << "That wasn't a character." << std::endl;
		return 0;
	}
	
	if (std::isupper(charInput)) {
		std::cout << "\t" <<  charInput << " is an uppercase letter," << std::endl;
	} else {
		std::cout << "\t" <<  charInput << " is a lowercase letter," << std::endl;
	}
	
	if (std::toupper(charInput) == 'A' || std::toupper(charInput) == 'E' || std::toupper(charInput) == 'I' || std::toupper(charInput) == 'O' || std::toupper(charInput) == 'U') {
		std::cout << "\t" << "it is a vowel," << std::endl;
	} else {
		std::cout << "\t" << "it is not a vowel," << std::endl;
	}
	
	std::cout << "\t" << "its ASCII value is " << static_cast<int>(charInput) << "," << std::endl;
	
	std::cout << "\t" << "and it is the " << toOrdinal(static_cast<int>(std::toupper(charInput)) - 64) << " letter of the alphabet." << std::endl;
}

