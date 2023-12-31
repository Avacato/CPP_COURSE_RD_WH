#include <iostream>
#include <string>
#include "2_Weapon.h"
#include "2_Player.h"
#include "2_PlayerClass.h"

void printPlayerInfo(const Player& player);

int main() {
    Weapon rifle("M416", 35, 300);
    Weapon shotgun("M870", 40, 50);
    Weapon sniperRifle("AWP", 90, 800);
    Weapon medicalKit("First Aid Kit", 0, 1);

    Player players[] = {
        {"Jack", 100, PlayerClass::ASSAULT},
        {"Mike", 90, PlayerClass::SUPPORT},
        {"Bob", 80, PlayerClass::SNIPER},
        {"Eva", 95, PlayerClass::MEDIC}
    };

    players[0].setWeapon(&rifle);
    players[1].setWeapon(&sniperRifle);

    printPlayerInfo(players[0]);
    printPlayerInfo(players[1]);

    return 0;
}
