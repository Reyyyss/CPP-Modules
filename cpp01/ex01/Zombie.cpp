#include "Zombie.hpp"

Zombie::Zombie() {
	_name = "Zombie";
}

Zombie::Zombie(std::string name) { 
	_name = name;
}

Zombie::~Zombie() {
	
}

void	Zombie::announce() const{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void	Zombie::eponym(std::string name) {
	_name = name;
}
