#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default constructor FragTrap " << _name << " called" << std::endl;
}
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Parametrized constructor FragTrap " << _name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor FragTrap " << _name << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "Copy assignment FragTrap operator " << _name << " called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap " << _name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " says: Give me a high five, guys!" << std::endl;
}
