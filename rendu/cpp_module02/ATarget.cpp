#include "ATarget.hpp"


ATarget::ATarget(const std::string &type)
: type(type)
{

}

ATarget::ATarget(const ATarget &other)
{
	*this = other;
}

ATarget&			ATarget::operator=(const ATarget &other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

ATarget::~ATarget()
{
}

const std::string&		ATarget::getType() const
{
	return (type);
}


void			ATarget::getHitBySpell(const ASpell& spell) const
{
		std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}


