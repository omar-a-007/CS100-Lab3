#ifndef __POW_HPP__
#define __POW_HPP__

#include <math.h>

class Pow : public Base {

	private:
		Base* x;
		Base* y;
	public:
		Pow(Base* x, Base* y) : Base(), x(x), y(y) { }
		virtual double evaluate() { return pow(x->evaluate(), y->evaluate()); }
		virtual std::string stringify() { return "(" + x->stringify() + " ** " + y->stringify() + ")"; }
};

#endif // __POW_HPP__
