#pragma once
#include <vector>
#include "3_Const.h"

class Team {
public:
    Team(const std::string& name) : m_teamName(name), m_numPlayers(0) {}

    bool addPlayer(Player* newPlayer) {
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

    bool removePlayer(Player* playerToRemove) {
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

    void printTeamInfo() const {
        std::cout << "Team Name: " << m_teamName << "\n";
        std::cout << "Number of Players: " << m_numPlayers << "\n";
        for (const auto& player : m_players) {
            player->printPlayerInfo();
            std::cout << "\n";
        }
    }
private:
    std::string m_teamName;
    int m_numPlayers;
    std::vector<Player*> m_players;
};