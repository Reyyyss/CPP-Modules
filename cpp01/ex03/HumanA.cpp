#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &Weapon)
	: name(name), weapon(Weapon)
{

}

void	HumanA::attack() const{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
