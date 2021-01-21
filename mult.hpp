#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    private:
	Base* x;
	Base* y;
    public:
        Mult(Base* x, Base* y) : Base(), x(x), y(y) { }
        virtual double evaluate() { return x->evaluate() * y->evaluate(); }
        virtual std::string stringify() { return "(" + x->stringify() + " * " + y->stringify() + ")"; }
};

#endif //__MULT_HPP__
