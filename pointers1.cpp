#include <iostream>
using namespace std;
int main() {
    int a=146;
    int *p=&a; // Pointer to integer
    cout << "Value of a: " << a << endl;    
    cout << "Address of a: " << &a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;
    return 0;
}
