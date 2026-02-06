#include "FragTrap.hpp"

int main()
{
    std::cout << "\n--- 1. PRUEBAS DE CREACION (FRAGTRAP) ---" << std::endl;
    {
        FragTrap Fiestero("Fiestero");
        FragTrap Copia(Fiestero);
    } 

    std::cout << "\n\n--- 2. PRUEBAS DE LOGICA Y FIESTA ---" << std::endl;
    FragTrap Pepe("Pepe");
    ClapTrap Diana("Diana");
    Pepe.attack("Diana");
    Diana.takeDamage(30);
    Pepe.takeDamage(99);
    Pepe.beRepaired(50);
    Pepe.highFivesGuys();
    return 0;
}