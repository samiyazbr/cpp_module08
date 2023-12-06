#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
# include <algorithm>
# include <vector> // for container
# include <climits> 

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _vector;
	public:
	    Span();
		Span(unsigned int n);
		Span(Span const &copy);
		Span &operator=(Span const &rhs);
		~Span();

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();


		template<typename Input>
		void addNumber(Input first_iter, Input last_iter);

        void print_Array();		

};

template<typename Input>
void Span::addNumber(Input first_iter, Input last_iter) {
    if (_vector.size() + std::distance(first_iter, last_iter) > _N) {
        throw std::out_of_range("Span is full, cannot add more elements");
    }
    _vector.insert(_vector.end(), first_iter, last_iter);
}

#endif