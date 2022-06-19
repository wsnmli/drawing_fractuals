class Complex { public:
    double a, b;
    Complex(double a_, double b_) :a{a_}, b{b_} {}

    Complex operator + (Complex const& obj) {
        return Complex(a+obj.a, b+obj.b);
    }
};