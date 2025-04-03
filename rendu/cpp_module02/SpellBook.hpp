#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <map>
# include "ASpell.hpp"

class SpellBook
{
	private:
		std::map<std::string, ASpell*>	knownSpells;
		SpellBook(const SpellBook &other);
		SpellBook&	operator=(const SpellBook &other);
	public:
		SpellBook();
		~SpellBook();
		void					learnSpell(ASpell *spell);

		void					forgetSpell(const std::string &spellName);
		ASpell*					createSpell(std::string const &spellName);
};


#endif
