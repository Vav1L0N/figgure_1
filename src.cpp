#include "include.h"
bool figure::operator==(const figure& f) const {
	return this->square() == f.square();
}

triangle::triangle() {
	a = 0, b = 0, c = 0;
}

triangle::triangle(double _a, double _b , double _c ) :a(_a), b(_b), c(_c) {
	if (((_a + _b > _c) && (_a + _c > _b) && (_b + _c > _a)) && ((_a > 0) && (_b > 0) && (_c > 0))) {
		a = _a;
		b = _b;
		c = _c;
	}
	else {
		a = 0; b = 0; c = 0;
		cout << "error";
	};
};

double triangle::perimetr() const {
	return a+b+c;
}
double triangle::square() const {
	double p = (a + b + c)/2;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}

rectangle::rectangle() {
	a = 0, b = 0;
}

rectangle::rectangle(double _a, double _b) :a(_a), b(_b) {
	if ((a > 0) && (b > 0)) {
		a = _a;
		b = _b;
	}
	else{
		a = 0; b = 0;
	    cout << "error" << endl;
	}
};

double rectangle::perimetr() const {
	return 2*(a + b) ;
}
double rectangle::square() const {
	
	return a*b;
}

circle::circle() {
	r = 0;
}

circle::circle(double _r) :r(_r) {
	if (_r > 0)
		r = _r;
	else{
		r = 0;
		cout<<"error"<<endl;
	}

};

double circle::perimetr() const {

	return 2*pi*r  ;
}
double circle::square() const {

	return r*r*pi;
}

