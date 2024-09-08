#include <iostream>
using namespace std;
#include "fraction.cpp"

int main(){
    Fraction f1(10,3);
    Fraction f2(5, 2);
    
    (f1 += f2) += f2;

    f1.print();
    f2.print(); 

    // Fraction f3 = f1++;

    // f1.print();
    // f3.print();
    

    f1.print();
    Fraction f6 = ++(++f1);
    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    f1.print();
    f2.print();
    f3.print(); 
    f4.print();
    f6.print(); 
    // Fraction const f3;
    Fraction f5 = f1 * f2;
    f5.print();


   /*
    if (f1 == f1)
    {
        cout << "Equal" << endl;    
    }
    else {
        cout << "Not Equal" << endl;
    }
    
    cout << f3.getNumerator()<< " " << f3.getDenominator() << endl;
   */
    // f3.setNumerator(10);
    // f1.add(f2);

    // f1.print();
    // f2.print();
    // f1.multiply(f2);
    // f1.print();
}