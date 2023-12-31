#pragma once

class Weapon {
public:
    Weapon(const std::string& name, int damage, int range)
        : m_name(name), m_damage(damage), m_range(range) {}

    std::string getName() const { return m_name; }
    int getDamage() const { return m_damage; }
    int getRange() const { return m_range; }

private:
    std::string m_name;
    int m_damage;
    int m_range;
};