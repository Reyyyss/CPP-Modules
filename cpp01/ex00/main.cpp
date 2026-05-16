#include "Zombie.hpp"
int	main(void)
{
	randomChump("Stacky");
	Zombie *z = newZombie("Heapy");
	if (z)
	{
		z->announce();
		delete z;
	}

	return 0;
}
