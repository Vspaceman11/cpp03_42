#include "DiamondTrap.hpp"

// ANSI Color Codes
#define RESET   "\033[0m"
#define RED     "\033[31m"      // ClapTrap
#define GREEN   "\033[32m"      // ScavTrap
#define YELLOW  "\033[33m"      // FragTrap
#define CYAN    "\033[36m"      // DiamondTrap
#define BOLD    "\033[1m"
#define MAGENTA "\033[35m"

int main()
{
	// PHASE 1: Demonstrating the Order of Construction
	// Thanks to virtual inheritance, ClapTrap should be constructed only once.
	std::cout << BOLD << MAGENTA << "===== 1. THE BIRTH OF A MONSTER =====" << RESET << std::endl;
	DiamondTrap dt("D-1000");
	std::cout << std::endl;

	// PHASE 2: Identity check
	// Shows the difference between DiamondTrap's own name and its ClapTrap base name.
	std::cout << BOLD << MAGENTA << "===== 2. IDENTITY CHECK (whoAmI) =====" << RESET << std::endl;
	std::cout << CYAN;
	dt.whoAmI();
	std::cout << RESET << std::endl;

	// PHASE 3: Testing inherited abilities
	// Attack should be from ScavTrap (with FragTrap's damage),
	// GuardGate from ScavTrap, and HighFives from FragTrap.
	std::cout << BOLD << MAGENTA << "===== 3. STATS CHECK =====" << RESET << std::endl;

	std::cout << GREEN << "[Testing ScavTrap's attack style]" << RESET << std::endl;
	dt.attack("a training dummy");

	std::cout << std::endl << GREEN << "[Testing ScavTrap's special ability]" << RESET << std::endl;
	dt.guardGate();

	std::cout << std::endl << YELLOW << "[Testing FragTrap's special ability]" << RESET << std::endl;
	dt.highFivesGuys();
	std::cout << std::endl;

	// PHASE 4: Energy and Health points
	// DiamondTrap should have 100 HP (Frag) and 50 Energy (Scav).
	std::cout << BOLD << MAGENTA << "===== 4. RESOURCE DEPLETION (HP & Energy) =====" << RESET << std::endl;
	std::cout << "Initial status check: Energy should be 50." << std::endl;

	std::cout << RED; // takeDamage and beRepaired are from the base ClapTrap
	dt.takeDamage(90);
	dt.beRepaired(10);
	std::cout << RESET << std::endl;

	// PHASE 5: Canonical Form Test
	// Testing if the name and attributes are correctly copied.
	std::cout << BOLD << MAGENTA << "===== 5. COPY & ASSIGNMENT =====" << RESET << std::endl;

	std::cout << CYAN << "[Action] Creating a copy using Copy Constructor..." << RESET << std::endl;
	DiamondTrap dtCopy(dt);
	dtCopy.whoAmI();

	std::cout << std::endl << CYAN << "[Action] Testing Assignment Operator..." << RESET << std::endl;
	DiamondTrap dtAssign("Original");
	dtAssign = dt;
	dtAssign.whoAmI();
	std::cout << std::endl;

	// PHASE 6: Destruction Order
	// Objects are destroyed in the reverse order of their construction.
	std::cout << BOLD << MAGENTA << "===== 6. DESTRUCTION ORDER =====" << RESET << std::endl;

	return 0;
}
