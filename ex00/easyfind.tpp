#include "easyfind.hpp"

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template<typename T>
int easyfind(T & container, int value){
	//T::iterator is a nested type within the template container of type T
	//T::iterator, it usually refers to a type that represents an iterator for the container of type T.
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        return (-1);
    return (std::distance(container.begin(), it));
}

#endif