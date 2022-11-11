#include <iostream>
using namespace std;

class Fraction
{
private:
    int a, b; 
public:
    Fraction();
    Fraction(int _a, int _b);
    Fraction Sum(Fraction newfraction);
    Fraction Difference(Fraction newfraction);
    Fraction Product(Fraction newfraction);
    Fraction Division(Fraction newfraction);
    void print();
};


    Fraction::Fraction()
    {
        a = 1;
        b = 1;
    }
    Fraction::Fraction(int _a, int _b)
    {
        a = _a;
        if (_b==0) 
        {
            cout << "No se puede dividir por cero" << endl;
            exit(0); 
        }
        else
            b = _b;
    }
    Fraction Fraction::Sum(Fraction newfraction)
    {
        int _a = a*newfraction.b+newfraction.a*b;
        int _b = b*newfraction.b;

        return Fraction(_a,_b);
    }
    Fraction Fraction::Difference(Fraction newfraction)
    {
        int _a = a*newfraction.b-newfraction.a*b;
        int _b = b*newfraction.b;
        return Fraction(_a,_b);
    }
    Fraction Fraction::Product(Fraction newfraction)
    {
        int _a = a*newfraction.a;
        int _b = b*newfraction.b;

        return Fraction(_a,_b);
    }
    Fraction Fraction::Division(Fraction newfraction)
    {
        int _a = a*newfraction.b;
        int _b = b*newfraction.a;
        return Fraction(_a,_b);
    }

    void Fraction::print()
    {
        if (b == 1) 
            cout << a << endl;
        else
            cout << a << "/" << b << endl;
    }


int main()
{
    Fraction f1(8,9);
    Fraction f2(10,4);
    Fraction f3;

    f3 = f1.Sum(f2); // Result: 3/4
    f3.print();

    //f3 = f1.Difference(f2); // Result: 1/4
    //f3.print();

    f3 = f1.Product(f2); // Result: 1/8
    f3.print();

    //f3 = f1.Division(f2); // Result: 2
    //f3.print();

    return 0;
}