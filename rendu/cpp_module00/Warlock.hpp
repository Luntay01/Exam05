#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
	private:
		std::string	name;
		std::string title;
	
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

	private:
		Warlock();
		Warlock(const Warlock &other);
		Warlock&				operator=(const Warlock &other);

	public:
		const std::string&		getName() const;
		const std::string&		getTitle() const;
		void					setTitle(const std::string &title);
		void					introduce() const;
};

#endif
