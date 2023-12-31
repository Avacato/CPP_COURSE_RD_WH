#include <iostream>
#include <string>
#include "3_Weapon.h"
#include "3_Player.h"
#include "3_Team.h"


int main() {
    Weapon rifle("M416", 35, 300);
    Weapon shotgun("M870", 40, 50);

    Player player1("Jack", 100, "Assault", rifle);
    Player player2("Mike", 90, "Support", shotgun);

    Team team("Team RED");

    team.addPlayer(&player1);
    team.addPlayer(&player2);

    std::cout << "--- Team Information ---\n";
    team.printTeamInfo();

    return 0;
}