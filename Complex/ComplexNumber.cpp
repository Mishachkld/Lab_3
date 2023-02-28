#include <algorithm>
#include "ComplexNumber.hpp"

namespace cn {


    ComplexNumber::ComplexNumber(int a, int b) {
        this->a = a;
        this->b = b;
    }

    ComplexNumber::ComplexNumber(ComplexNumber &temp){
        (*this) = temp;
    }

}