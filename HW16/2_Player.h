#pragma once
#include "2_PlayerClass.h"

class Player {
public:
    Player(const std::string& name, int health, PlayerClass playerClass)
        : m_name(name), m_health(health), m_playerClass(playerClass), m_weapon(nullptr) {}

    std::string getName() const { return m_name; }
    int getHealth() const { return m_health; }
    PlayerClass getPlayerClass() const { return m_playerClass; }

    void setWeapon(Weapon* newWeapon) {
        m_weapon = newWeapon;
    }

    Weapon* getWeapon() const {
        return m_weapon;
    }

private:
    std::string m_name;
    int m_health;
    PlayerClass m_playerClass;
    Weapon* m_weapon;
};