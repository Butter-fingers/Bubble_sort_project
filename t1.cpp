#include <iostream>
#include <iomanip>

using namespace std;

void ChangeX() {
    int x;
    // extern int x = 2;
     x = x * 2;
    //cout << x << " A: " << a <<  endl;
}

int main() {
    cout << setw(20) << "hello world\n";
    cout   << "\thello world\n";

    //int x = 2; x = x * 2; cout << x << endl;
    for (int i =0; i < 3; i++) {
        //int a  =0;
        ChangeX();
    }

}