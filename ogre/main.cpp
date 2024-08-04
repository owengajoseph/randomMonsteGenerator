#include "random.h"
int main()
{
	Monster m{MonsterGenerator::generate()};
	m.print();

	return 0;
}
