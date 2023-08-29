#include<iostream>
using namespace std;
class  batsman{
    int bcode,innings,notout,runs;
    char bname [20];
    float batavg;
    
    float calcavg() 
 {
    return batavg=runs/(innings-notout);

 }  

 public:
 void readdata(){
 cout << "Enter  batsman  4 Digit Code Number. : ";
 cin >> bcode;
 cout << "Enter  batsman  name. : ";
 cin >> bname   ;
cout << "Enter batsman  innings : ";
 cin >> innings;
cout << "Enter  batsman  notout : ";
 cin >>  notout;
 cout << "Enter batsman  runs : ";
 cin >> runs ;
batavg = calcavg() ;
}

void displaydata()
{
    cout << "\nbatsman  4 Digit Code Number Is : " << bcode;
    cout << "\nbatsman  name is : " << bname;
    cout << "\ninnings\t notout\truns \tbatavg";
    cout << "\n" << innings << "\t" <<  notout << "\t" << runs  << "\t" << batavg;
}
};

int main ()
{
   batsman bat; // bat is a batsman class object
     bat.readdata();
     bat.displaydata() ;
    return 0;
}

/*
Enter  batsman  4 Digit Code Number. : 1234
Enter  batsman  name. : virat
Enter  batsman innings : 350
Enter  batsman  notout : 19
Enter  batsman  runs : 20598

Basment 4 Digit Code Number Is : 1234
 batsman name is : virat
innings  notout runs    batavg        
350     19      20598   62
*/
