#pragma once
#include <vector>
#include "3_Const.h"
#include "3_Player.h"

class Team {
public:
    Team(const std::string& name);

    bool addPlayer(Player* newPlayer);

    bool removePlayer(Player* playerToRemove);

    void printTeamInfo() const;

private:
    std::string m_teamName;
    int m_numPlayers;
    std::vector<Player*> m_players;
};