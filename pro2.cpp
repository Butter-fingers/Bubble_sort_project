#include <iostream>
#define MAX_SIZE 100
#include <string>
using namespace std;

int main()
{
  /*
        Top 10 Sep 07, 2022 09:04 UTC
        
        South African Rand 	1,000.00 ZAR 	inv. 1.00 ZAR
        US Dollar 	        57.622790 	    17.354245
        Euro 	            58.139699 	    17.199951
        British Pound 	    50.112407 	    19.955138
        Indian Rupee 	    4603.330039     0.217234
        Australian Dollar 	85.664137 	    11.673496
        Canadian Dollar 	75.907451 	    13.173937
        Singapore Dollar 	81.086020 	    12.332582
        Swiss Franc 	    56.622935 	    17.660688
        Malaysian Ringgit 	259.345626 	    3.855858
        Japanese Yen 	    8301.049388 	0.120467

 */
        double  invUSDoller = 17.354245;
        double  invEuro =   17.199951;
        double  invBritishPound = 19.955138;
        double  invIndianRupee = 0.217234;
        double  invAustralianDollar = 11.673496;
        double  invCanadianDollar = 13.173937;
        double  invSingaporeDollar = 12.332582;
        double  invSwissFranc = 17.660688;
        double  invMalaysianRinggit =  3.855858;
        double  invJapaneseYen = 0.120467 ;
        
        double ZAR ;
        
        cout<<"Enter amount in South African ZAR :";
        cin >> ZAR;
        
        
        string A = "Amount in ";
        string as[10] = {"USD :", "Euro :", "GBP :", "Indian Ruppe :", "Australian Dollar: ", "Canadian Dollar: ", "Singapore Dollar: ", "Swiss Franc: ", "Malaysian Ringgit: ", "Japanesse Yen: "};
        double values[4];
        double defaultValues[4] = {17.354245,  17.199951, 19.955138, 17.660688, };
        //cout << "Sizeof: " << sizeof(as) << "\n";
        for (int i =0 ; i < 4; i ++) {
            double v = ZAR / defaultValues[i];
            values[i] = v;
        }
        for (int j = 0; j < 4; j++) {
            //int n = i+1;
        cout << (j+1) << ": " << A;

            cout << as[j] << values[j] << "\n";

        }
        int c = 0;

            cout << "Do you want the amount sorted in Value(1) or Number(2): ";
            cin >> c;
            if (c == 1) {
                // sort in value (desc)
            } else if (c == 2) {
                // sort in number asc
            }
        /*for (int k =0; k < 4; k ++) {
            cout << "Enter a number representing the exchanged amount: ";
        cin >> c ;
        c -= 1;
        cout << "Amount: " << as[c] << values[c] << "\n\n" ;
        }*/
        


       
        /*
        // 1) AMOUNT IN USD
        
        double USDoller = invUSDoller * ZAR;
        
        cout<<" Amount in USDolllar :"<< USDoller <<endl;
        
        // 2) AMOUNT IN Euro...
        
        double Euro = invEuro * ZAR;
        
        cout<<" Amount in Euro :"<< Euro <<endl;

        // 3) AMOUNT IN BritishPound...
        
        double BritishPound = invBritishPound * ZAR;
        
        cout<<" Amount in British Pounds :"<< BritishPound <<endl;

        // 4) AMOUNT IN IndianRupee...
        
        double IndianRupee = invIndianRupee * ZAR;
        
        cout<<" Amount in Indian Rupee : "<< IndianRupee <<endl;

        // 5) AMOUNT IN Australian Dollar...
        
        double AustralianDollar = invAustralianDollar  * ZAR;
        
        cout<<" Amount in Australina Dollar : "<< AustralianDollar <<endl;
  
      
        // 6) AMOUNT IN Canadian Dollar...
        
        double CanadianDollar = invCanadianDollar  * ZAR;
        
        cout<<" Amount in Canadian Dollar : "<< CanadianDollar <<endl;

        // 7) AMOUNT IN  Singapore Dollar...
        
        double  SingaporeDollar = invSingaporeDollar  * ZAR;
        
        cout<<" Amount in  Singapore Dollar : "<<  SingaporeDollar <<endl;

        // 8) AMOUNT IN   Swiss Franc...
        
        double   SwissFranc = invSwissFranc  * ZAR;
        
        cout<<" Amount in   Swiss Franc : "<<   SwissFranc <<endl;

        // 9) AMOUNT IN   Malaysian Ringgit...
        
        double   MalaysianRinggit = invMalaysianRinggit  * ZAR;
        
        cout<<" Amount in  Malaysian Ringgit : "<<   MalaysianRinggit <<endl;
        

        // 10) AMOUNT IN  Japanese Yen ...
        
        double   JapaneseYen  = invJapaneseYen   * ZAR;
        
        cout<<" Amount in  Japanese Yen  : "<<  JapaneseYen  <<endl;
        
      // allocating array...

  int Num;
  int num1 = 1;
  int num2 = 2;
  int num3 = 3;
  int num4 = 4;
  int num5 = 5;
  int num6 = 6;
  int num7 = 7;
  int num8 = 8;
  int num9 = 9;
  int num10 = 10;

 cout<<"\n"<<endl;
  
 
    int arr[MAX_SIZE];
    int i, Num;
 
    // Reads size and elements in array...

    cout<<"Enter size of the array: ";
    cin>>Num;

    cout<<"Enter  elements in array ... "<<endl;
  
    for(i=0; i<Num; i++)
    {

        
       cout<<"\n-Element "<< (i+1) <<" = ";
        cin>>arr[i];

    }

  */

  // Allocating array memory...

  /*
  
      cout<<"value 1:";
      cin >> Num;
   
    
      if(Num == num1){

            cout<<USDoller;
      
      } else if(Num == num2 )
      
      {

        cout<<Euro;
        
      } else if(Num == num3)
      
      {
        
          cout <<BritishPound;
        
      }else if(Num == num4)

      {

          cout<<IndianRupee;
        
      }else if(Num == num5)

      {

          cout<<AustralianDollar;
        
      }else if (Num == num6)

      {

          cout<<CanadianDollar;
        
      }else if (Num == num7)

      {

          cout<<SingaporeDollar;
        
      }else if (Num == num8)

      {

          cout<<SwissFranc;
        
      }else if (Num == num9)

      {

          cout<<MalaysianRinggit;
        
      }else if (Num == num10)

      {

          cout<<JapaneseYen;
        
      } */

    //

  
 

  
    return 0;
}