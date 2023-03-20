// Local headers
#include "subfunctionality.h"
#include "textuserinterface.h"
// Standard library headers
// 
// Function implimentations
namespace sub_functionality {
	int showSubFunctionalityOptions() {
		// 05-04-2022 14.50
		int appAction = 0;
		std::cout << "1. #" << std::endl;
		std::cout << "2. #" << std::endl;
		std::cout << "3. #" << std::endl;
		std::cout << "4. #" << std::endl;
		std::cout << "5. #" << std::endl;
		std::cout << "6. #" << std::endl;
		std::cout << "7. #" << std::endl;
		std::cout << "8. #" << std::endl;
		std::cout << "9. #" << std::endl;
		std::cout << "0. Exit" << std::endl;
		//
		return 0;
	}
	int handleSubFunctionalityOptions() {
		// 05-04-2022 14.34
		int appAction = 0;
		int choise = 99;
		bool stop = false;
		// Clear the console
		appAction = text_user_interface::clearConsole();
		// Operations
		while (stop == false) {
			appAction = text_user_interface::writeSubFunctionalityInformation("--Sub Functionality Options--", "V.00.01");
			appAction = showSubFunctionalityOptions();
			appAction = text_user_interface::writeActionSeperator();
			std::cout << "Enter choise: ";
			std::cin >> choise;
			// Handle text user interface
			appAction = text_user_interface::writeActionSeperator();
			// Handle user input
			switch (choise) {
			case 1:
				appAction = text_user_interface::writeAppNoOption();
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
				appAction = text_user_interface::writeAppNoOption();
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
}