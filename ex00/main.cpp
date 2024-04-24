#include <iostream>
#include "Zombie.hpp"

int main() {
	Zombie stackZombie;
	stackZombie.setName("StackZombie");
	stackZombie.announce();

	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	randomChump("RandomChumpZombie");

	delete heapZombie;

	return 0;
}
