#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default constructor FragTrap " << this->_name << " called" << std::endl;
}
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Parametrized constructor FragTrap " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor FragTrap " << this->_name << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "Copy assignment FragTrap operator " << this->_name << " called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap " << this->_name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " says: Give me a high five, guys!" << std::endl;
}
