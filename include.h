#pragma once
#include <iostream>
using namespace std;
#include <locale.h>
#include <cmath>
class figure {
public:
	virtual double perimetr() const = 0;
	virtual double square() const = 0;
	bool operator==(const figure& f) const;
};

class triangle : public figure {
private:
	double a, b, c;

public:
	triangle();
	triangle(double _a , double _b , double _c );
	double perimetr() const override;
	double square()const override;
};

class rectangle : public figure {
private: 
	double a, b;
public:
	rectangle();
	rectangle(double _a, double _b);
	double perimetr() const override;
	double square()const override;

};

class circle : public figure {
private:
	double r;
public:
	circle();
	circle(double _r);
	double perimetr() const override;
	double square()const override;
};
double const pi = 2 * acos(0.0);
