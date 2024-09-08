#include <iostream>
using namespace std;
#include "dynamicarray.cpp"

int main (){
    dynamicarray d1;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    dynamicarray d2(d1); // Copy constructor
    d1.add(0, 100); 

    d2.print();
}