#ifndef DUMMY_hpp
# define DUMMY_hpp
# include <string>
# include <iostream>
# include "ATarget.hpp"

class	Dummy : public ATarget
{
		public:
				Dummy();
				~Dummy();
				Dummy*		clone() const;

};

#endif
