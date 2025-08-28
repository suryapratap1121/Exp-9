#include <iostream> 
using namespace std;
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a; // Pointer to the first element of the array

    cout << "Value pointed to by p: " << *p << endl;

    // Incrementing the pointer
    for (int i=0;i<5;i++){

    cout << "Value pointed to by p after increment: " << *p << endl;
        p++;}
    return 0;
}
