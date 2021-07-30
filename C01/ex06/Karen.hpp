#ifndef KAREN_HPP
#define KAREN_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <stdio.h>
# include <iomanip>

class Karen;
typedef	void	(Karen::*functArray)(void);

class	Karen
{
	public:
		Karen();
		void complain( std::string level);
	private:
		functArray arr[4];
		std::string levArr[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};



#endif