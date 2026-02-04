#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char *argv[])
{
   string customerName, mobileModel;
    float mobilePrice,ammountpaid,remainingBalance,totalcost;	
int choice,quantity;

    
cout << "-------Welcome to Mobile Store!---------"<< endl;
cout<<"=========Availables Mobiles=============\n";
cout<<"1.iPhone Pro Max 16\n";
cout<<"2.Samsung ultra 20\n";
cout<<"3.Infinix GT 20\n";
cout<<"4.Real Me Q5 pro\n";
cout<<"5.Red mi 13\n";


cout<<"Please Select Mobiles(1-5)!:";
cin>>choice;

int mobile;

switch(choice){
case 1:
    cout<< "iPhone Pro Max 16!"<<endl;
    cout << "You selected iphone company." << endl;
     mobilePrice = 1200.0;
    cout<<"Your Purchase is done for iPhone Pro Max 16 Thanks You for Buying!"<<endl;
    
						
break;
case 2:
    cout<< "Samsung ultra 20!"<<endl;
     cout << "You selected samsung company." << endl;

    mobilePrice = 1000.0;
    cout<<"Your Purchase is done for Samsung ultra 20 Thanks You for Buying!"<<endl;
    

break;
case 3:
    cout<< "Infinix GT 20!"<<endl;
     cout << "You selected infinix company." << endl;
  
   mobilePrice = 400.0;
    cout<<"Your Purchase is done for Infinix GT 20 Thanks You for Buying!"<<endl;
    

break;
case 4:

cout<< "Real Me Q5 pro"<<endl;
 cout << "You selected Real me company." << endl;
 mobilePrice = 300.0;
cout<<"Your Purchase is done for Real Me Q5 pro Thanks You for Buying!"<<endl;


break;
case 5:
cout<< " Red mi 13"<<endl;
 cout << "You selected Red mi company." << endl;
              
mobilePrice = 250.0;
cout<<"Your Purchase is done for Red mi 13 Thanks You for Buying!"<<endl;

break;

}
cout << "=========Mobile Purchase Invoice=========" << endl;
 cout<<"Enter Customer Name:"<<endl;
 cin>>customerName;
cout<<"Enter Mobile Model$:"<<endl;
cin>>mobileModel;
 cout << "Enter mobile price $:"<<mobilePrice<<endl;
 
    cout << "Enter Quantity:"<<endl;
   cin >> quantity;
   cout<<"Total Cost:";
   cin>>totalcost;
    cout << "Enter Ammount Paid $:"<<endl;
   cin >> ammountpaid;
     float totalCost = mobilePrice * quantity;
    remainingBalance = totalCost - ammountpaid;
  if (remainingBalance > 0) {
        cout << "Remaining Balance:$" << remainingBalance << endl;
    } else {
        cout << "Change Due:$" << abs(remainingBalance) << endl;
    }
        cout << "Thanks You Please Come Again!" << endl;

    cout << "========================================" << endl;

    return 0;
}
  

        



