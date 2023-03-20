// Local headers
#include "textuserinterface.h"
// Standard library headers
#include <iostream>
#include <vector>
// Windows 
#include <windows.h>
namespace text_user_interface {
	int writeActionSeperator() {
		// 05-04-2022 14.00
		const int numberOfCharcters = 80;
		const char theSeperatorCharacter = '*';
		std::vector<char> theSeperator{};
		for (unsigned int i = 0; i < numberOfCharcters; i++) {
			theSeperator.push_back(theSeperatorCharacter);
		}
		//
		for (unsigned int i = 0; i < theSeperator.size(); i++) {
			std::cout << theSeperatorCharacter;
		}
		//std::cout << std::endl;
		return 0;
	}

	int writeSelectionHighlighter() {
		// 05-04-2022 14.00
		const int numberOfCharcters = 80;
		const char theSeperatorCharacter = '-';
		std::vector<char> theSeperator{};
		for (unsigned int i = 0; i < numberOfCharcters; i++) {
			theSeperator.push_back(theSeperatorCharacter);
		}
		//
		for (unsigned int i = 0; i < theSeperator.size(); i++) {
			std::cout << theSeperatorCharacter;
		}
		return 0;
	}

	int writeAppInformation(std::string appTitle, std::string appVersion) {
		// 05-04-2022 14.00
		const int numberOfCharcters = 80;
		const int centerOfConsol = 40;
		int appAction = 0;
		int startAt = 0;
		startAt = (centerOfConsol - (appTitle.length() / 2));
		appAction = 0;
		// appAction = text_user_interface::writeActionSeperator();
		std::cout << std::endl;
		for (int t = 0; t < startAt; t++) {
			std::cout << ' ';
		}
		std::cout << appTitle << std::endl;
		std::cout << appVersion << std::endl;
		appAction = text_user_interface::writeActionSeperator();
		//
		return 0;
	}

	int writeSubFunctionalityInformation(std::string appTitle, std::string appVersion) {
		// 05-04-2022 15.22
		const int numberOfCharcters = 80;
		const int centerOfConsol = 40;
		int appAction = 0;
		int startAt = 0;
		startAt = (centerOfConsol - (appTitle.length() / 2));
		appAction = 0;
		//appAction = text_user_interface::writeActionSeperator();
		std::cout << std::endl;
		for (int t = 0; t < startAt; t++) {
			std::cout << ' ';
		}
		std::cout << appTitle << std::endl;
		std::cout << appVersion << std::endl;
		appAction = text_user_interface::writeActionSeperator();
		//
		return 0;
	}

	int writeSelectedOption(std::string selectedOption) {
		// 05-04-2022 14.00
		const int numberOfCharcters = 80;
		const int centerOfConsol = 40;
		int appAction = 0;
		int startAt = 0;
		appAction = text_user_interface::writeActionSeperator();
		startAt = (centerOfConsol - (selectedOption.length() / 2));
		appAction = 0;
		std::cout << std::endl;
		for (int t = 0; t < startAt; t++) {
			std::cout << ' ';
		}
		std::cout << selectedOption << std::endl;
		std::cout << std::endl;
		appAction = text_user_interface::writeActionSeperator();
		//
		return 0;
	}

	int writeAppNoOption() {
		// 05-04-2022 14.00
		int appAction = 0;
		appAction = text_user_interface::writeSelectionHighlighter();
		std::cout << "Not done yet" << std::endl;
		appAction = text_user_interface::writeSelectionHighlighter();
		appAction = text_user_interface::writeActionSeperator();
		//
		return 0;
	}

	int pauseApplication() {
		// 25-12-2021 19.37
		std::cout << std::endl;
		std::cout << "Pres ENTER to continue: ";
		//std::system("pause>0");
		std::cin.get();
		//
		return 0;
	}

	int preventConsoleClose() {
		// 05-04-2022 14.00
		std::cout << "Press ENTER to end the application: ";
		std::system("pause>0");
		//
		return 0;
	}

	int handleBlanks() {
		// 06-04-2022 08.22
		// Declarations
		int appAction;
		std::string str;
		// Initializations
		appAction = 0;
		str = "*";
		//
		appAction = text_user_interface::writeSelectionHighlighter();
		std::cout << "Please enter your name:";
		// This works! But why? See
		// https://www.cplusplus.com/forum/beginner/248026/
		// https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus
		// Clear the buffer before getline!
		std::cin.ignore(INT_MAX, '\n');
		// Use getline
		getline(std::cin, str);
		std::cout << "Hello, " << str << " welcome!" << std::endl;
		//
		appAction = text_user_interface::writeSelectionHighlighter();
		appAction = text_user_interface::writeActionSeperator();
		appAction = text_user_interface::pauseApplication();
		return 0;
	}

	int handleColors() {
		// 05-03-2023 09.06
		// Declarations
		int appAction;
		HANDLE h;
		// Initializations
		appAction = 0;
		h = GetStdHandle(STD_OUTPUT_HANDLE);
		//
		appAction = text_user_interface::writeSelectionHighlighter();
		//
		SetConsoleTextAttribute(h, 1);
		std::cout << "Blue color" << std::endl;
		//
		SetConsoleTextAttribute(h, 2);
		std::cout << "Green color" << std::endl;
		//
		SetConsoleTextAttribute(h, 3);
		std::cout << "Cyan color" << std::endl;
		//
		SetConsoleTextAttribute(h, 4);
		std::cout << "Red color" << std::endl;
		//
		SetConsoleTextAttribute(h, 5);
		std::cout << "Purple color" << std::endl;
		//
		SetConsoleTextAttribute(h, 6);
		std::cout << "Dark yellow color" << std::endl;
		//
		SetConsoleTextAttribute(h, 7);
		std::cout << "White color, default" << std::endl;
		//
		SetConsoleTextAttribute(h, 8);
		std::cout << "Grey color" << std::endl;
		//
		SetConsoleTextAttribute(h, 9);
		std::cout << "Bright blue color" << std::endl;
		//
		SetConsoleTextAttribute(h, 10);
		std::cout << "Bright green color" << std::endl;
		//
		SetConsoleTextAttribute(h, 11);
		std::cout << "Bright cyan color" << std::endl;
		//
		SetConsoleTextAttribute(h, 12);
		std::cout << "Bright red color" << std::endl;
		//
		SetConsoleTextAttribute(h, 13);
		std::cout << "Pink color" << std::endl;
		//
		SetConsoleTextAttribute(h, 14);
		std::cout << "Yellow color" << std::endl;
		//
		SetConsoleTextAttribute(h, 15);
		std::cout << "Bright color" << std::endl;
		// Return to standard color
		SetConsoleTextAttribute(h, 7);
		std::cout << "White color, default" << std::endl;
		//
		appAction = text_user_interface::writeSelectionHighlighter();
		appAction = text_user_interface::writeActionSeperator();
		// Why twice? It doesn't work with one!
		appAction = text_user_interface::pauseApplication();
		appAction = text_user_interface::pauseApplication();
		return 0;
	}

	int clearConsole() {
		// 05-03-2023 08.34
		std::system("cls");
		// 
		return 0;
	}

	int sizeConsole() {
		// 05-03-2023 08.56
		// Get a handle to the console window
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		// Set the console window size to 80 columns by 40 rows
		SMALL_RECT windowSize = { 0, 0, 79, 29 };
		SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

		// 
		return 0;
	}
}