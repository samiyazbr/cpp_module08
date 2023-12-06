#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "MutantStack Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "MutantStack Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
	// MutantStack<type>::iterator - iterator is a nested type within the template container of type MutantStack
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "MutantStack Iteration: ";
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << "std::list Top: " << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << "std::list Size: " << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    //[...]
    lstack.push_back(0);
    std::list<int>::iterator lit = lstack.begin();
    std::list<int>::iterator lite = lstack.end();
    std::cout << "std::list Iteration: ";
    while (lit != lite) {
        std::cout << *lit << " ";
        ++lit;
    }

    std::stack<int, std::list<int> > s(lstack);
    return 0;
}
