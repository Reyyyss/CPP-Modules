#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name) {
	if (N <= 0 || name.empty())
		return NULL;
	Zombie *Zombie_Horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		Zombie_Horde[i].eponym(name);
	}
	return Zombie_Horde;
}
