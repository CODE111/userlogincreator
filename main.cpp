#include <iostream>
#include <string>
#include <cctype>


void passwordCreator() {
    std::string strPass;
    bool hasAlpha = false;
    bool hasDigit = false;
    bool hasPunct = false;

    std::cout << "Enter password: ";
    std::getline(std::cin, strPass);

    for (char userChar : strPass) { // this will specifies the container over which the loop will iterate
        if (isalpha(userChar)) {
            hasAlpha = true;
        } else if (isdigit(userChar)) {
            hasDigit = true;
        } else if (ispunct(userChar)) {
            hasPunct = true;
        }
    }

    if (hasAlpha && hasDigit && hasPunct) {
        std::cout << strPass << " is a valid password. Congrats!!!" << std::endl;
        std::cout << std::endl;
    } else {
        std::cout << strPass << " is not a valid password. Try again!" << std::endl;
        std::cout << "Password must include letters, digits, and character";
        std::cout << std::endl << std::endl;
    }
}

int main() {

    char quitKey;
    std::cout << "Enter q to quit. any other key to start program: ";
    std::cin >> quitKey;
    std::cin.ignore();

    while (quitKey != 'q') {
        passwordCreator();

        std::cout << "Enter q to quit. any other key to start program: ";
        std::cin >> quitKey;
        std::cin.ignore();
    }

   std::cout << "Program has ended." << std::endl;

    return 0;
}
