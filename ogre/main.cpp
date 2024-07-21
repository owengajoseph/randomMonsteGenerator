#include <string.h>
#include <string_view>
#include <iostream>

// monster class wich has enum
class Monster
{

	// enum inside a class so that i can access it
public:
	enum Monstertype
	{
		Dragon,
		Goblin,
		Orgre,
		Orch,
		Skeleton,
		Troll,
		Vampire,
		Zombie,
		MaxMonsterType

	};
	//constructor to intilize obejects
	Monster(Monstertype type, std::string name, std::string roar, int hits)
		: m_type{type}, m_name{name}, m_roar{roar}, m_hitpoints{hits}
	{
	}
	//function, checks for an enum type and return string of that enum type.
	std::string getTypeString(Monstertype monsters)
	{
		switch (monsters)
		{
		case Dragon:
			return "Dragon";
			break;
		case Goblin:

			return "Goblin";
			break;
		case Orgre:
			return "Ogre";
			break;
		case Orch:
			return "Orch";
			break;
		case Skeleton:
			return "Skeleton";
			break;
		case Troll:
			return "Troll";
			break;
		case Vampire:
			return "vampire";
			break;
		case Zombie:
			return "Zombie";
			break;

		default:
			return "???";
			break;
		}
	}
	void print()
	{
		std::cout << m_name << "the" << getTypeString(m_type) << "has" << m_hitpoints << "hit points and says" << m_roar << '\n';
	}

private:
	Monstertype m_type{};
	std::string m_name{"???"};
	std::string m_roar{"???"};
	int m_hitpoints{};
};

int main()
{
	Monster skeleton{ Monster::Skeleton, "Bones", "*rattle*", 4 };
	skeleton.print();

	Monster vampire{ Monster::Vampire, "Nibblez", "*hiss*", 0 };
	vampire.print();

	return 0;
}
