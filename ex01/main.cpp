#include "ScavTrap.hpp"

int main() {
	std::cout << "--- CREATING CLAPTRAP ---" << std::endl;
	ClapTrap clap("Clappy");

	std::cout << "\n--- CREATING SCAVTRAP ---" << std::endl;
	// Here you will see BOTH ClapTrap and ScavTrap constructors
	ScavTrap scav("Scavvy");

	std::cout << "\n--- TESTING SCAVTRAP ACTIONS ---" << std::endl;
	scav.attack("a dangerous bandit"); // Should use ScavTrap's attack message
	scav.beRepaired(50);
	scav.guardGate();

	std::cout << "\n--- TESTING INHERITANCE ---" << std::endl;
	// ScavTrap has 150 HP, so it should survive a 50 damage hit easily
	scav.takeDamage(50);
	std::cout << "Scavvy should still be alive and kicking!" << std::endl;

	std::cout << "\n--- DESTRUCTORS CALLED IN REVERSE ORDER ---" << std::endl;
	return 0;
}
