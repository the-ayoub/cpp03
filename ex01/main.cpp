#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n--- 1. Orthodox Canonical Form tests ---" << std::endl;
	ScavTrap Chispitas("Chispitas");
	ScavTrap Tornillín;
	ScavTrap Cabezón(Chispitas);
	Tornillín = Chispitas;
	Chispitas.guardGate();
	std::cout << "\n\n--- 2. Logic tests for functions ---" << std::endl;
	ScavTrap Luchador("Luchador");
	ScavTrap Zombe("Zombe");
	for(int i=0;i<8;i++)
		Luchador.attack("Zombe");
	Zombe.takeDamage(8);
	Zombe.beRepaired(2);
	for(int i=0;i<6;i++)
		Chispitas.attack("zombie");
	Zombe.takeDamage(6);
	Zombe.attack("Luchador");
	for(int i=0;i<4;i++)
		Luchador.attack("Zombie");
	Zombe.takeDamage(6);
	Zombe.guardGate();
}