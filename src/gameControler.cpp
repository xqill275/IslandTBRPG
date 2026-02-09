//
// Created by olive on 08/02/2026.
//

#include "headers/gameControler.h"

#include <iostream>



std::string gameControler::getPlayerInput(std::string textDescript) {
    std::string input;
    std::cout << textDescript;
    std::cin >> input;
    return input;
}

void gameControler::mainMenu() {
    bool validChoice = false;
    while (!validChoice) {
        std::cout <<" ------------------------------ " << std::endl;
        std::cout <<" |    Welcome to the ISALND   | " << std::endl;
        std::cout <<" ------------------------------ " << std::endl;
        std::cout <<" | 1. start game              | " << std::endl;
        std::cout <<" | 2. exit game               | " << std::endl;
        std::cout <<" ------------------------------ " << std::endl;
        std::string playerChoice = getPlayerInput("choice: ");
        if (playerChoice == "1") {
            validChoice = true;
            break;
        }
        if (playerChoice == "2") {
            exit(0);
        }
        std::cout << "invalid choice " << std::endl;
    }
}


void gameControler::characterCreator() {
    //Todo!!!
}

