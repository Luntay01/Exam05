#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
	for (std::map<std::string, ATarget*>::iterator it = knownSpells.begin(); it != knownSpells.end(); ++it)
	{
			delete it->second;
	}
	knownSpells.clear();
}

void				TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		knownSpells.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
	}
}

void					TargetGenerator::forgetTargetType(const std::string &target)
{
		std::map<std::string, ATarget*>::iterator it = knownSpells.find(target);
		if (it != knownSpells.end())
		{
				delete it->second;
				knownSpells.erase(it);
		}
}

ATarget*				TargetGenerator::createTarget(std::string const &type)
{
		std::map<std::string, ATarget*>::iterator it = knownSpells.find(type);
		if (it != knownSpells.end())
		{
			return(it->second);
		}
		return NULL;
}


