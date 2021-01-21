#ifndef __ADD_HPP__
#define __ADD_HPP__

class Add : public Base {

	private:
		Base* x;
		Base* y;
	public:
		Add(Base* x, Base* y) : Base(), x(x), y(y) { }
		virtual double evaluate() { return x->evaluate() + y->evaluate(); }
		virtual std::string stringify() { return "(" + x->stringify() + " + " + y->stringify() + ")"; }
};

#endif // __ADD_HPP__
