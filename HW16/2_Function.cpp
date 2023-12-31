#include <iostream>
#include "2_Weapon.h"
#include "2_Player.h"

void printPlayerInfo(const Player& player) {
    std::cout << "Player name: " << player.getName() << std::endl;
    std::cout << "Health: " << player.getHealth() << std::endl;
    std::cout << "Player Class: ";
    switch (player.getPlayerClass()) {
    case PlayerClass::ASSAULT:
        std::cout << "Assault";
        break;
    case PlayerClass::SUPPORT:
        std::cout << "Support";
        break;
    case PlayerClass::SNIPER:
        std::cout << "Sniper";
        break;
    case PlayerClass::MEDIC:
        std::cout << "Medic";
        break;
    }
    std::cout << std::endl;

    Weapon* playerWeapon = player.getWeapon();
    if (playerWeapon != nullptr) {
        std::cout << "Weapon: " << playerWeapon->getName() << std::endl;
        std::cout << "Damage: " << playerWeapon->getDamage() << std::endl;
        std::cout << "Range: " << playerWeapon->getRange() << std::endl;
    }
    else {
        std::cout << "No weapon equipped." << std::endl;
    }

    std::cout << std::endl;
}