#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap,public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);

		virtual ~DiamondTrap();

		using ScavTrap::attack;
		void whoAmI();
	private:
		std::string _name;
};
