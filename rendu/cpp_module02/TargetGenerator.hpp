#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::map<std::string, ATarget*>	knownSpells;
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator&	operator=(const TargetGenerator &other);
	public:
		TargetGenerator();
		~TargetGenerator();
		void					learnTargetType(ATarget *target);
		void					forgetTargetType(const std::string &type);
		ATarget*					createTarget(std::string const &type);
};


#endif
