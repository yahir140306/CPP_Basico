#include <iostream>
using namespace std;

int suma (int a, int b) {
    return a + b ;
}

int multiplicar (int a, int b = 2) {
    return a * b;
}

int main () {
    cout << multiplicar (200) << endl;
    cout << suma (5 , 5) << endl;
    cout << multiplicar (200 , 6) << endl;
}
