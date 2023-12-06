#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int n): _N(n), _vector() { _vector.reserve(n); }

Span::Span(Span const &copy) : _N(copy._N), _vector(copy._vector) {}

Span & Span::operator=(Span const &rhs){
    if (this != &rhs){
        _N = rhs._N;
        _vector = rhs._vector;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (_vector.size() == _N) {
        throw std::out_of_range("Span is full, cannot add more elements");
    }
    _vector.push_back(number);
}

int Span::shortestSpan(){
    if (_vector.size() < 2){
        throw std::out_of_range("No Span can be found");
    }
    std::vector<int> sorted_nums(_vector);
    std::sort(sorted_nums.begin(), sorted_nums.end());

    int min_distance = INT_MAX;
    for(size_t i = 1; i < sorted_nums.size(); ++i){
        int diff = sorted_nums[i] - sorted_nums[i - 1];
        if (diff < min_distance)
            min_distance = diff;
    }
    return min_distance;
}

int Span::longestSpan() {
    if (_vector.size() < 2) {
        throw std::out_of_range("No Span can be found");
    }

    int min_element = *std::min_element(_vector.begin(), _vector.end());
    int max_element = *std::max_element(_vector.begin(), _vector.end());
    return (max_element - min_element);
}

void Span::print_Array(){
    std::cout << "Array Numbers: ";
     for (unsigned int i = 0; i < _vector.size(); i++){
            std::cout << _vector[i] << " ";
        }
        std::cout << std::endl;
}