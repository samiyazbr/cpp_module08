#include "Span.hpp"

int main()
{
    std::cout << "****REGULAR TEST*****" << std::endl;
	std::cout << "                      " << std::endl;
	try{
        Span sp = Span(8);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(6);
        sp.addNumber(-2);
        sp.addNumber(-1);
        sp.print_Array();
        std::cout << "Shortest Span: " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "*********TEST TO CHECK FULL SPAN EXCEPTION********" << std::endl;
	std::cout << "                      " << std::endl;
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "*********TEST TO CHECK EMPTY SPAN EXCEPTION********" << std::endl;
	std::cout << "                      " << std::endl;
    try{
        Span sp = Span(3);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "********TEST TO CHECK ONLY ONE SPAN EXCEPTION*********" << std::endl;
	std::cout << "                      " << std::endl;
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "********TEST TO CHECK MULTIPLE NUMBERS********" << std::endl;
	std::cout << "                      " << std::endl;
    try{
        std::vector<int> myVector;
        Span sp(10000);

        for (int i = 0; i < 10000; i++) {
            myVector.push_back(i);
        }
        sp.addNumber(myVector.begin(), myVector.end());
        std::cout << "Shortest Span: " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
        sp.addNumber(50);

    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}


