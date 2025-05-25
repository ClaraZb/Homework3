#include <iostream>
#include "clases.h"
#include <vector>
#include <string>
using namespace std;

int main(){
    Generador<string> s;
    s.agregar("hola");
    string vs = s.get_vector_string();
    cout << "String" << vs << endl;

    Generador<double> d;
    d.agregar(1.5);
    d.agregar(2.7);
    d.agregar(3.14);
    string vd = d.get_vector_string();
    cout << "Double: " << vd << endl;

    Generador<vector<int>> i; 
    i.agregar(vector<int>{1, 2, 3});
    i.agregar(vector<int>{4, 5});
    string vi = i.get_vector_string();
    cout << "Vector<int>: " << vi << endl;

    return 0;
}
