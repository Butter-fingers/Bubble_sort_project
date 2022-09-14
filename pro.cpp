#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void print(string value) {
    cout << value << endl;
}

int main () {
    // bubble sort 
    // for loop length == size of list
    // the largest number will bubble to the top of the list w/ each iteration
    int a_size = 10;
    int l[a_size] ;
    ifstream values ;
    cout << "sizeof: " << sizeof(l) << endl;
    values.open("values.txt");
     for (int k = 0; k < 11; k++) {
        values >> l[k];
        } 
    //inf.close();
    //int a ;
    //inf.ignore(1,'\n') >> a;
    //inf >> a;
    //cout << "inf: " << a << endl;
    //
    //int n_list[sizeof(list)] = list();
    //cout << "size: " << c << endl;
    cout << "\n\n\n";
    //cout << "\t*\n";
    for (int j = 0; j < a_size ; j++) {
        cout << l[j]  << "\t";
        }
        cout <<"\n";
    // swap
    for (int k = 0; k < a_size; k++) {
        // if list[i > (i+1) swap
        // container
        int r = k+1;
        int v;
        int s = 0;
        for (int i = 0; i < a_size; i ++) {
            int a = l[i], b = l[i+1];
            
            // calculate the current pos of change / tab = 8 spaces / + 1(space of values)
            if (!(i == 0)) {
                s = (8 * (i)) + 1;
            }
           // cout << "\ns: " << s << "\ti:" << i << endl;
        
            if (l[i] < l[i+1]) {
                //swap
                v = l[i];
                int v2 = l[i+1];
                l[i+1] = l[i];
                l[i] = b;
                
                cout << setw(s) << "^";
                cout << "\n\n";
                
                cout << "run " << r << ": switching: " << v << " w/: " << v2 << endl;
                cout << "\n\n";

                for (int j = 0; j < a_size ; j++) {
                    cout << l[j]  << "\t";
                    }
                    cout <<"\n";
                    
            } else {
                //cout << setw(s) << "*";
                //cout << "\n\n";
            }
        }
        
    }

    


}