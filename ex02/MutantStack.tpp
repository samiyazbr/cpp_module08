#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP
# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &copy) {
	*this = copy;
}

//this->c is the underlying container of type T
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &rhs) {
	if (this != &rhs) {
		this->c = rhs.c;
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

// MutantStack<T>::iterator - this iterator is the one we defined in the MutantStack class
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

#endif