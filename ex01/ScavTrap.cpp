#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitpoints = 100;
  	_energypoints = 50;
 	_attackdamage = 20;
	std::cout<<"ScavTrap default constructor called"<<std::endl;
}
ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	_hitpoints = 100;
  	_energypoints = 50;
 	_attackdamage = 20;
	std::cout<<"ScavTrap constructor called for "<<_name<<std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other)
{
	*this = other;
	std::cout<<"Copy constructor called"<<std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
	if(this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energypoints = other._energypoints;
		this->_attackdamage = other._attackdamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"Destructor called "<<_name<<std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    if (this->_hitpoints > 0 && this->_energypoints > 0)
    {
        this->_energypoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
    }
    else
    {
        if (this->_energypoints == 0)
            std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
        else
            std::cout << "ScavTrap " << _name << " can't attack because it's dead!" << std::endl;
    }
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name<< " has entered Gate Keeper mode." << std::endl;
}
