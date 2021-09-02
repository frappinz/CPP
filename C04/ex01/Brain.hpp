#ifndef Brain_hpp
#define Brain_hpp


class Brain
{
	private:
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &brain);
		Brain &operator = (const Brain &Brain);
		~Brain();
};
#endif