#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    system("cls");
    // REVIEWS ARE STORES IN .CSV FILE WHICH EVER ITEM YOU SELECT
    string cars[4] = {"*****", "****", "***", "**"};
     ofstream MyFile("REVIEW.csv");

    int n,m;
    do
    {
      
    
   cout<<"\n\t\t\t=======================\n";
    cout<<"\n\t\t\t       FLIPKART     \n";
    cout<<"\n\t\t\t=======================\n";
    cout<<"\n\t\t\t     ::MAIN MENU::    \n";
    cout<<"\n\t\t\t1.T.V \n";
    cout<<"\n\t\t\t2.LAPTOP\n";
   
    cout<<"\n\t\t\t press (1--2)";
    cin>>n;

            system("cls");


   if (n==1)
   {
    cout<<"\n\t\t\tSelect Brand"<<endl;
    cout<<"\n\t\t\t1. SAMSUNG"<<endl;
    cout<<"\n\t\t\t2. L.G"<<endl;
    cout<<"\n\t\t\t3. SONY"<<endl;
    cout<<"\n\t\t\t4. ONEPLUS"<<endl;
    cout<<"\n\t\t\tpress (1--4):: ";
    cin>>n;

    if (n==1)
    {
        system("cls");
        cout<<"\n\t\t\tSamsung"<<endl;
        cout<<"\n\t\t\tprice:-100000"<<endl;
        cout<<"\n\t\t\tspecification"<<" "<<"BLUETOOTH "<<"SCREEN TOUCH"<<endl;
        cout<<"\n\t\t\tReview:: ";
        cout<<cars[0]<<endl;
        MyFile << cars[0];
    }else if (n==2)
    {
       system("cls");
        cout<<"\n\t\t\tL.G"<<endl;
        cout<<"\n\t\t\tprice:-900000"<<endl;
        cout<<"\n\t\t\tspecification"<<" "<<"BLUETOOTH "<<"SCREEN TOUCH"<<endl;
        cout<<"\n\t\t\tReview:: ";
        cout<<cars[1]<<endl;
        MyFile << cars[1];
    }else if(n==3){
        system("cls");
            cout<<"\n\t\t\tSONY BRAVIA 8K"<<endl;
                    cout<<"\n\t\t\tprice:-700000"<<endl;
                    cout<<"\n\t\t\tspecification"<<" "<<"BLUETOOTH "<<" "<<"WIFI"<<endl;
                    cout<<"\n\t\t\tReview:: ";
                    cout<<cars[3]<<endl;
        MyFile << cars[3];
    }else if(n==4){
        system("cls");
        cout<<"\n\t\t\tONEPLUS"<<endl;
        cout<<"\n\t\t\tprice:-1000000"<<endl;
        cout<<"\n\t\t\tspecification"<<" "<<"BLUETOOTH "<<"SCREEN TOUCH"<<endl;
        cout<<"\n\t\t\tReview:: ";
        cout<<cars[1]<<endl;
        MyFile << cars[1];
    }
    
    
   }else if(n==2){
    cout<<"\n\t\t\tSelect brand"<<endl;
        cout<<"\n\t\t\t1. ACER"<<endl;
        cout<<"\n\t\t\t2. HP"<<endl;
        
        cout<<"\n\t\t\tPRESS (1--3)::        ";
        cin>>n;
    if (n==1)
    {
        system("cls");
        
        cout<<"\n\t\t\tACER"<<"-"<<"NITRO 5"<<endl;
             cout<<"\n\t\t\tprice:-60000"<<endl;
             cout<<"\n\t\t\tspecification"<<" "<<"8GB RAM "<<" "<<"512GB SSD"<<" "<<"GTX 1650"<<endl;
             cout<<"\n\t\t\tReview:: ";
             cout<<cars[1]<<endl;
        MyFile<<cars[1];

    }else if(n==2){
        system("cls");
        cout<<"1)"<<endl;
       cout<<"\n\t\t\tHP"<<"-"<<"PAVILLION"<<endl;
             cout<<"\n\t\t\tprice:-79000"<<endl;
             cout<<"\n\t\t\tspecification"<<" "<<"8GB RAM "<<" "<<"512GB SSD"<<" "<<"GTX 1650"<<endl;
             cout<<"\n\t\t\tReview:: ";
             cout<<cars[2]<<endl;
             
         cout<<"2)"<<endl;
          cout<<"\n\t\t\tHP"<<"-"<<"VICTOUS"<<endl;
             cout<<"\n\t\t\tprice:-89000"<<endl;
             cout<<"\n\t\t\tspecification"<<" "<<"16GB RAM "<<" "<<"1TB SSD"<<" "<<"RTX 3050"<<endl;
             cout<<"\n\t\t\tReview:: ";
             cout<<cars[0]<<endl;

          cout<<"3)"<<endl;
                cout<<"\n\t\t\tHP"<<"-"<<"INTEL CORE"<<endl;
             cout<<"\n\t\t\tprice:-34000"<<endl;
             cout<<"\n\t\t\tspecification"<<" "<<"4GB RAM "<<" "<<"1TB HDD"<<" "<<"INTEL IRIS"<<endl;
             cout<<"\n\t\t\tReview:: ";
             cout<<cars[3]<<endl;



        MyFile<<cars[2]<<"  " <<cars[0]<<"  "<<cars[3];
    }

    
   }
  
   
   

 MyFile.close();
    system("pause");
    cout<<"Press 0 to exit: ";
      cin>>m;
      system("cls");
    } while (m==0);
    return 0;
}