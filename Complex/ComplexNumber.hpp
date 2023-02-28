//
// Created by Mishach on 28.02.2023.
//

#pragma once

namespace cn {
    class ComplexNumber {
    public:
        ComplexNumber(int a, int b);
        ComplexNumber(ComplexNumber& temp);
        ~ComplexNumber() = default;

    private:
        int a;
        int b;
    };

}

