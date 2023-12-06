#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &copy);
		MutantStack &operator=(MutantStack const &rhs);
		~MutantStack();
		// std::stack<T>::container_type::iterator <name> is a type
		typedef typename std::stack<T>::container_type::iterator iterator;
		//this iterator is the type we defined above
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"
#endif