#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = knownSpells.begin(); it != knownSpells.end(); ++it)
	{
			delete it->second;
	}
	knownSpells.clear();
}

void				SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		knownSpells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
	}
}

void				SpellBook::forgetSpell(const std::string &spellName)
{
		std::map<std::string, ASpell*>::iterator it = knownSpells.find(spellName);
		if (it != knownSpells.end())
		{
				delete it->second;
				knownSpells.erase(it);
		}
}

ASpell*					SpellBook::createSpell(std::string const &spellName)
{
		std::map<std::string, ASpell*>::iterator it = knownSpells.find(spellName);
		if (it != knownSpells.end())
		{
			return(it->second);
		}
		return NULL;
}


