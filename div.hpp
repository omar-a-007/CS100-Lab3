#ifndef __DIV_HPP__
#define __DIV_HPP__

class Div : public Base {

	private:
		Base* x;
		Base* y;
	public:
		Div(Base* x, Base* y) : Base(), x(x), y(y) { }
		virtual double evaluate() { return x->evaluate() / y->evaluate(); }
		virtual std::string stringify() { return "(" + x->stringify() + " / " + y->stringify() + ")"; }
};

#endif // __DIV_HPP__
