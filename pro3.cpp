#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
// start 
// user input 
// convert to the currencies
// sort in value or number w/ bubble sort
// display the list 
// end
using namespace std;
// declear the const length(size) of values
int const size_c = 10;
double values[size_c];
double list[size_c];

void getValues() {
    //retrieve the values of currencies from  a file and put em in values[]
    ifstream curr ;
    curr.open("currencies.txt");
     for (int k = 0; k < 10; k++) {
        curr >> values[k];
    } 

    curr.close();
}
void convert(double aZAR) {

    for (int i =0 ; i < size_c; i ++) {
        double v = aZAR / values[i];
        list[i] = v;
    }

}

void display_values(string v[], double vl[]) {
    string a = "Amount of product in: ";
    for (int j = 0; j < size_c; j++) {
            //int n = i+1;
        cout << (j+1) << ": " << a;
        cout << v[j] << vl[j] << "\n";

        }
}

void bubbleSort(int z, double l[]) {
   // sort in desired manner and print

   if (z == 1) {

        for (int j = 0; j < size_c ; j++) {
            cout << l[j]  << "\t";
        }
        cout <<"\n";
        // swap
        for (int k = 0; k < size_c; k++) {
            // if list[i > (i+1) swap
            // container
            int r = k+1;
            double v;
            int s = 0;

            for (int i = 0; i < size_c; i ++) {
                double a = l[i], b = l[i+1];
                
                // calculate the current pos of change / tab = 8 spaces / + 1(space of values)
                if (!(i == 0)) {
                    s = (8 * (i)) + 1;
                }
            // cout << "\ns: " << s << "\ti:" << i << endl;
            
                if (l[i] < l[i+1]) {
                    //swap
                    v = l[i];
                    double v2 = l[i+1];
                    l[i+1] = l[i];
                    l[i] = b;
                    
                    cout << setw(s) << "^";
                    cout << "\n\n";
                    
                    cout << "run " << r << ": switching: " << v << " w/: " << v2 << endl;
                    cout << "\n\n";

                    for (int j = 0; j < size_c ; j++) {
                        cout << l[j]  << "\t";
                    }
                        cout <<"\n";
                }
            } 
        }
   } else {

        for (int j = 0; j < size_c ; j++) {
            cout << l[j]  << "\t";
        }
        cout <<"\n";
        // swap
        for (int k = 0; k < size_c; k++) {
            // if list[i > (i+1) swap
            // container
            int r = k+1;
            double v;
            int s = 0;

            for (int i = 0; i < size_c - 1; i ++) {
                double a = l[i], b = l[i+1];
                
                // calculate the current pos of change / tab = 8 spaces / + 1(space of values)
                if (!(i == 0)) {
                    s = (8 * (i)) + 1;
                }
            // cout << "\ns: " << s << "\ti:" << i << endl;
            
                if (l[i] > l[i+1]) {
                    //swap
                    v = l[i];
                    double v2 = l[i+1];
                    l[i+1] = l[i];
                    l[i] = b;
                    
                    cout << setw(s) << "^";
                    cout << "\n\n";
                    
                    cout << "run " << r << ": switching: " << v << " w/: " << v2 << endl;
                    cout << "\n\n";

                    for (int j = 0; j < size_c ; j++) {
                        cout << l[j]  << "\t";
                    }
                        cout <<"\n";
                }
            } 
        
        }
    }
}

int main () {

    double values[size_c], ZAR = 0;
    string as[10] = {"USD :", "Euro :", "GBP :", "Indian Ruppe :", "Australian Dollar: ", "Canadian Dollar: ", "Singapore Dollar: ", "Swiss Franc: ", "Malaysian Ringgit: ", "Japanesse Yen: "};
    getValues();

    cout << "\n\n\n";
    cout << "Enter amount of a product in South African ZAR: ";
    cin >> ZAR;
    convert(ZAR);
    display_values(as, list);
        
    int sort;
    cout << "\n\n\n";
    
    do {
        cout << "Sort the currencies in Value(1) or Number(2): "; 
        cin >> sort;
        //sort ++;
        cout << "sort: "<< sort << endl;
    } 
    while (!(sort == 1 || sort == 2));

    bubbleSort(sort, list);

}