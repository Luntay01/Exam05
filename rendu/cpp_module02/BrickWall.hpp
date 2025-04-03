#ifndef BRICKWALL_hpp
# define BRICKWALL_hpp
# include <string>
# include <iostream>
# include "ATarget.hpp"

class	BrickWall : public ATarget
{
		public:
				BrickWall();
				~BrickWall();
				BrickWall*		clone() const;

};

#endif
