#include <iostream>
#include <string>
#include "3_Team.h"


Team::Team(const std::string& name) : m_teamName(name), m_numPlayers(0) {}

bool Team::addPlayer(Player* newPlayer) {
    if (m_numPlayers < MAX_PLAYERS) {
        m_players.push_back(newPlayer);
        m_numPlayers++;
        return true;
    }
    else {
        std::cout << "Team is full. Cannot add more players.\n";
        return false;
    }
}

bool Team::removePlayer(Player* playerToRemove) {
    auto it = std::find(m_players.begin(), m_players.end(), playerToRemove);
    if (it != m_players.end()) {
        m_players.erase(it);
        m_numPlayers--;
        return true;
    }
    else {
        std::cout << "Player not found in the team.\n";
        return false;
    }
}

void Team::printTeamInfo() const {
    std::cout << "Team Name: " << m_teamName << "\n";
    std::cout << "Number of Players: " << m_numPlayers << "\n";
    for (const auto& player : m_players) {
        player->printPlayerInfo();
        std::cout << "\n";
    }
}
