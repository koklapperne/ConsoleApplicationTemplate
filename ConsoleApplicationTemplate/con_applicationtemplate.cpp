// Local headers
#include "textuserinterface.h"
#include "subfunctionality.h"
// Standard library headers
#include <iostream>

// Application options

int showAppOptions() {
	// 05-04-2022 15.27
	int appAction = 0;
	std::cout << "1. Sub Functionality" << std::endl;
	std::cout << "2. #" << std::endl;
	std::cout << "3. #" << std::endl;
	std::cout << "4. Blanks" << std::endl;
	std::cout << "5. Color" << std::endl;
	std::cout << "6. #" << std::endl;
	std::cout << "7. #" << std::endl;
	std::cout << "8. #" << std::endl;
	std::cout << "9. #" << std::endl;
	std::cout << "0. Exit" << std::endl;
	//
	return 0;
}

int handleAppOptions() {
	// 05-03-2023 08.59
	int appAction = 0;
	int choise = 99;
	bool stop = false;
	// Operations 
	appAction = text_user_interface::writeActionSeperator();
	while (stop == false) {
		appAction = text_user_interface::sizeConsole();
		appAction = text_user_interface::clearConsole();
		appAction = text_user_interface::writeAppInformation("--Console Application Template--", "V.00.01");
		appAction = showAppOptions();
		appAction = text_user_interface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = text_user_interface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			appAction = sub_functionality::handleSubFunctionalityOptions();
			break;
		case 2:
			appAction = text_user_interface::writeAppNoOption();
			break;
		case 3:
			appAction = text_user_interface::writeAppNoOption();
			break;
		case 4:
			appAction = text_user_interface::handleBlanks();
			break;
		case 5:
			appAction = text_user_interface::handleColors();
			break;
		case 6:
			appAction = text_user_interface::writeAppNoOption();
			break;
		case 7:
			appAction = text_user_interface::writeAppNoOption();
			break;
		case 8:
			appAction = text_user_interface::writeAppNoOption();
			break;
		case 9:
			appAction = text_user_interface::writeAppNoOption();
			break;
		case 0:
			stop = true;
			break;
		default:
			stop = true;
			break;

		}
	}
	//
	return 0;
}

// Application entry point

int main()
{
	// 05-04-2022 14.39
    // Declarations
    int appAction;
    // Initializations
    appAction = 0;
	// Assigning
    appAction = handleAppOptions();
	appAction = text_user_interface::preventConsoleClose();
}
