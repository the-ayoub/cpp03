#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_hitpoints(10),_energypoints(10),_attackdamage(0)
{
	std::cout<<"ClapTrap default constructor called"<<std::endl;
}
ClapTrap::ClapTrap(std::string name):_hitpoints(10),_energypoints(10),_attackdamage(0)
{
	_name = name;
	std::cout<<"ClapTrap constructor called for "<<_name<<std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout<<"Copy constructor called"<<std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap& other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (this->_hitpoints > 0 && this->_energypoints > 0)
    {
        this->_energypoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
    }
    else
    {
        if (this->_energypoints == 0)
            std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        else
            std::cout << "ClapTrap " << _name << " can't attack because it's dead!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if((int)amount >= this->_hitpoints)
		this->_hitpoints = 0;
	else
	{
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energypoints > 0 && this->_hitpoints > 0)
	{
		this->_hitpoints += amount;
		this->_energypoints--;
		std::cout<< "ClapTrap " <<_name<<" repairs itself and recovers "<<amount<<" hit points."<<std::endl;
	}
	else
		std::cout<<"ClapTrap "<<_name<<" cannot repair itself due to insufficient hit points or energy."<<std::endl;
}
