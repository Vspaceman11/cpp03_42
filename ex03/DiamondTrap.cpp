#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap()
	: ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Default constructor DiamondTrap " << this->_name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	std::cout << "Parametrized constructor DiamondTrap " << this->_name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "Copy constructor DiamondTrap " << this->_name << " called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		ClapTrap::operator=(other);
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "Copy assignment DiamondTrap operator " << this->_name << " called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap " << this->_name << " called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap: " << this->_name << ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
