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
	appAction = textuserinterface::writeActionSeperator();
	while (stop == false) {
		appAction = textuserinterface::sizeConsole();
		appAction = textuserinterface::clearConsole();
		appAction = textuserinterface::writeAppInformation("--Console Application Template--", "V.00.01");
		appAction = showAppOptions();
		appAction = textuserinterface::writeActionSeperator();
		std::cout << "Enter choise: ";
		std::cin >> choise;
		// Handle text user interface
		appAction = textuserinterface::writeActionSeperator();
		// Handle user input
		switch (choise) {
		case 1:
			appAction = handleSubFunctionalityOptions();
			break;
		case 2:
			appAction = textuserinterface::writeAppNoOption();
			break;
		case 3:
			appAction = textuserinterface::writeAppNoOption();
			break;
		case 4:
			appAction = textuserinterface::handleBlanks();
			break;
		case 5:
			appAction = textuserinterface::handleColors();
			break;
		case 6:
			appAction = textuserinterface::writeAppNoOption();
			break;
		case 7:
			appAction = textuserinterface::writeAppNoOption();
			break;
		case 8:
			appAction = textuserinterface::writeAppNoOption();
			break;
		case 9:
			appAction = textuserinterface::writeAppNoOption();
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
	appAction = textuserinterface::preventConsoleClose();
}
