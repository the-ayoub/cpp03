#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitpoints = 100;
  	_energypoints = 100;
 	_attackdamage = 30;
	std::cout<<"FragTrap default constructor called"<<std::endl;
}
FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	_hitpoints = 100;
  	_energypoints = 100;
 	_attackdamage = 30;
	std::cout<<"FragTrap constructor called for "<<_name<<std::endl;
}
FragTrap::FragTrap(const FragTrap& other)
{
	*this = other;
	std::cout<<"Copy constructor called"<<std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap& other)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << _name << std::endl;
}