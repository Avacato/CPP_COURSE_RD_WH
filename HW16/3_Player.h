#pragma once
#include "3_Weapon.h"

class Player {
public:
    Player(const std::string& name, int health, const std::string& playerClass, const Weapon& weapon);

    void printPlayerInfo() const;

private:
    std::string m_name;
    int m_health;
    std::string m_playerClass;
    Weapon m_weapon;
};