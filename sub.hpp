#ifndef __SUB_HPP__
#define __SUB_HPP__

class Sub : public Base {

        private:
                Base* x;
                Base* y;
        public:
                Sub(Base* x, Base* y) : Base(), x(x), y(y) { }
                virtual double evaluate() { return x->evaluate() - y->evaluate(); }
                virtual std::string stringify() { return "(" + x->stringify() + " - " + y->stringify() + ")"; }
};

#endif // __SUB_HPP__

