#include <iostream>
using namespace std;    
int main(){
    int a=123;
    int *p=&a; // Pointer to integer
    cout << *p << endl;
    *p = 456; // Changing the value pointed to by p
    cout << "New value of a: " << a << endl;
    int array[5] = {1, 2, 3, 4, 5};
    cout<< *array<<endl;
    return 0;
}
