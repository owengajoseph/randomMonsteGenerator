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
	// constructor to intilize obejects
	Monster(Monstertype type, std::string_view name, std::string_view roar, int hits)
		: m_type{type}, m_name{name}, m_roar{roar}, m_hitpoints{hits}
	{
	}
	// function, checks for an enum type and return string of that enum type.
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
		std::cout << m_name << "the" << getTypeString(m_type)
		 << "has" << m_hitpoints << "hit points and says" << m_roar << '\n';
	}
	static Monster getname(Monster monster)
	{
		return monster;
	}

private:
	Monstertype m_type{};
	std::string m_name{"???"};
	std::string m_roar{"???"};
	int m_hitpoints{};
};
//

namespace MonsterGenerator
{
	std::string_view getName(int n)
	{
		switch (n)
		{
		case 0:
			return "Blarg";
		case 1:
			return "Moog";
		case 2:
			return "Pksh";
		case 3:
			return "Tyrn";
		case 4:
			return "Mort";
		case 5:
			return "Hans";
		default:
			return "???";
		}
	}

	std::string_view getRoar(int n)
	{
		switch (n)
		{
		case 0:
			return "*ROAR*";
		case 1:
			return "*peep*";
		case 2:
			return "*squeal*";
		case 3:
			return "*whine*";
		case 4:
			return "*growl*";
		case 5:
			return "*burp*";
		default:
			return "???";
		}
	}

	Monster generate()
	{
		return Monster {Monster::Skeleton, getName(0), getRoar(0), 4};
	}

};

int main()
{
	Monster m{MonsterGenerator::generate()};
	m.print();

	return 0;
}
