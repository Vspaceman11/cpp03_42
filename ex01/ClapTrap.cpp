#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
				_name(""),
				_hitPoints(10),
				_energyPoints(10),
				_attackDamage(0)
{
	std::cout << "Default Constructor ClapTrap " << _name << " called" << std::endl;
}
ClapTrap::ClapTrap(const std::string& name) :
				_name(name),
				_hitPoints(10),
				_energyPoints(10),
				_attackDamage(0)
{
	std::cout << "Parametrized Constructor ClapTrap " << _name << " called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other) :
				_name(other._name),
				_hitPoints(other._hitPoints),
				_energyPoints(other._energyPoints),
				_attackDamage(other._attackDamage)
{
	std::cout << "Copy constructor ClapTrap " << _name << " called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "Copy assignment operator ClapTrap " << _name << " called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap " << _name << " called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " Cannot attack. No energy or no HP" << std::endl;
		return;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot take damage" << std::endl;
		return;
	}
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	std::cout << "ClapTrap " << _name << " takes " << amount << " damage, and leaving " << _hitPoints << " HP!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no HP or energy to repair itself" << std::endl;
		return;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " rapair " << amount << " HP , and have now " << _hitPoints << " HP!" << std::endl;
}

