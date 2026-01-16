#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "===== PHASE 1: BIRTH OF THE ARMY =====" << std::endl;

	std::cout << "[Creating ClapTrap]" << std::endl;
	ClapTrap clappy("Clappy");
	std::cout << std::endl;

	std::cout << "[Creating ScavTrap]" << std::endl;
	ScavTrap scavvy("Scavvy-Guard");
	std::cout << std::endl;

	std::cout << "[Creating FragTrap]" << std::endl;
	FragTrap fraggy("Fraggy-HighFive");
	std::cout << std::endl;

	std::cout << "===== PHASE 2: TESTING ATTACK POWER =====" << std::endl;

	// ClapTrap damage: 0
	clappy.attack("a fly");

	// ScavTrap damage: 20
	scavvy.attack("a skag");

	// FragTrap damage: 30
	fraggy.attack("a massive boss");

	std::cout << "\n===== PHASE 3: UNIQUE ABILITIES =====" << std::endl;

	scavvy.guardGate();
	fraggy.highFivesGuys();

	std::cout << "\n===== PHASE 4: RESILIENCE (HP TEST) =====" << std::endl;

	std::cout << "ClapTrap (10 HP) takes 15 damage:" << std::endl;
	clappy.takeDamage(15);
	clappy.beRepaired(5); // Should fail (0 HP)

	std::cout << "\nScavTrap (100 HP) takes 15 damage:" << std::endl;
	scavvy.takeDamage(15);
	scavvy.beRepaired(5); // Should work (85 + 5 = 90 HP)

	std::cout << "\nFragTrap (100 HP) takes 95 damage:" << std::endl;
	fraggy.takeDamage(95);
	fraggy.beRepaired(50); // Should work (5 + 50 = 55 HP)

	std::cout << "\n===== PHASE 5: DESTRUCTION ORDER =====" << std::endl;
	// Destructors will be called automatically here
	return 0;
}
