#include "easyfind.hpp"

int main()
{
	std::vector<int> vector;

	vector.push_back(3);
	vector.push_back(6);
	vector.push_back(4);
	vector.push_back(2);
	vector.push_back(5);
	vector.push_back(1);

    int value = easyfind(vector, 30);
    if ( value == -1 ){
            std::cout << "Value not found" << std::endl;
    }
    else {
            std::cout << "Value at index: " << value << std::endl;
    }

}