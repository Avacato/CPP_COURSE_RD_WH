#include <iostream>
#include "3_Player.h"
#include "3_Weapon.h"

Player::Player(const std::string& name, int health, const std::string& playerClass, const Weapon& weapon)
    : m_name(name), m_health(health), m_playerClass(playerClass), m_weapon(weapon) {}

void Player::printPlayerInfo() const {
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Health: " << m_health << "\n";
    std::cout << "Class: " << m_playerClass << "\n";
    std::cout << "Weapon: " << m_weapon.getName() << "\n";
    std::cout << "Damage: " << m_weapon.getDamage() << "\n";
    std::cout << "Range: " << m_weapon.getRange() << "\n";
}
