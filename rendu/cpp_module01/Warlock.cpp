#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
:	name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell*>::iterator it = knownSpells.begin(); it != knownSpells.end(); ++it)
	{
			delete it->second;
	}
	knownSpells.clear();
}

const std::string&		Warlock::getName() const					{ return(name); }
const std::string&		Warlock::getTitle() const					{	return(title); }
void					Warlock::setTitle(const std::string &title)	{ this->title = title; }

void					Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;

}

void					Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		knownSpells[spell->getName()] = spell->clone();
	}
}

void					Warlock::forgetSpell(std::string spellName)
{
		std::map<std::string, ASpell*>::iterator it = knownSpells.find(spellName);
		if (it != knownSpells.end())
		{
				delete it->second;
				knownSpells.erase(it);
		}
}

void					Warlock::launchSpell(const std::string spellName, const ATarget& target) 
{
		std::map<std::string, ASpell*>::iterator it = knownSpells.find(spellName);
		if (it != knownSpells.end())
		{
			it->second->launch(target);
		}
}




/*
Warlock::Warlock(const Warlock &other){*this = other;}
Warlock&				Warlock::operator=(const Warlock &other)
{
		if (this != &other)
		{
				this->name = other.name;
				this->title = other.title;
		}
		return (*this);

}
*/


