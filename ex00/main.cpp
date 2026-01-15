#include "ClapTrap.hpp"

int main()
{
	// 1. Constructor tests
	std::cout << "--- CREATION ---" << std::endl;
	ClapTrap clap("CLAP_01");
	ClapTrap trap("TRAP_02");
	std::cout << std::endl;

	// 2. Action tests (Energy consumption)
	std::cout << "--- BASIC ACTIONS ---" << std::endl;
	clap.attack("Handsome Jack");    // Costs 1 energy, 9 left
	clap.takeDamage(5);              // HP drops to 5
	clap.beRepaired(3);              // Costs 1 energy, 8 left, HP becomes 8
	std::cout << std::endl;

	// 3. Energy depletion test
	std::cout << "--- ENERGY DEPLETION TEST ---" << std::endl;
	// We already used 2 energy points. Let's use the remaining 8.
	for (int i = 0; i < 8; ++i)
	{
		clap.attack("a random skag");
	}

	// This 11th action should fail (0 energy left)
	std::cout << "[Action with 0 energy]" << std::endl;
	clap.beRepaired(10);
	std::cout << std::endl;

	// 4. Death and incapacity test
	std::cout << "--- DEATH TEST ---" << std::endl;
	trap.takeDamage(10);             // HP drops to 0
	trap.attack("an enemy");         // Should fail: no HP
	trap.beRepaired(5);              // Should fail: no HP
	std::cout << std::endl;

	// 5. Overkill test (Unsigned int protection)
	std::cout << "--- OVERKILL TEST ---" << std::endl;
	ClapTrap target("Target");
	target.takeDamage(100);          // Damage > HP, should stay at 0, not underflow
	std::cout << std::endl;

	// 6. Destructor tests
	std::cout << "--- DESTRUCTION ---" << std::endl;
	// Objects go out of scope here
	return 0;
}
