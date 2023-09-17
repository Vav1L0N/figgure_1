#include "include.h"

int main()
{
    setlocale(LC_ALL, "rus");
    
    double a, b, c,d,e,r;
    cout << "Введите стороны треугольника: "<<endl;
    cin >> a >> b >> c;
    triangle x(a, b, c);
    cout << "trinagle square: " << x.square() << endl << "triangle perimetr: " << x.perimetr() << endl << endl;
    cout << "Введите стороны прямоугольника: " << endl;
    cin >> d >> e;
    rectangle y(d, e);
    cout << "rectangle square: " << y.square() << endl << "rectangle perimetr: " << y.perimetr() << endl << endl;
    cout << "Введите радиус окружности: " << endl;
    cin >> r ;
    circle z(r);
    cout << "circle square: " << z.square() << endl << "circle perimetr: " << z.perimetr() << endl << endl;
    if (x == y)
        cout << "Площадь треугольника равна площади прямоугольника: Square = " << x.square() << endl;
    else
        cout << "Площадь треугольника не равна площади прямоугольника"  << endl;
   
}

