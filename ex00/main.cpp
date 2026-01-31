#include "ClapTrap.hpp"

int main()
{
	std::cout << "\n--- 1. Orthodox Canonical Form tests ---" << std::endl;
	ClapTrap Chispitas("Chispitas");
	ClapTrap Tornillín;
	ClapTrap Cabezón(Chispitas);
	Tornillín = Chispitas;
	std::cout << "\n\n--- 2. Logic tests for functions ---" << std::endl;
	ClapTrap Luchador("Luchador");
	ClapTrap Zombe("Zombe");
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
}