#include <iostream>
using namespace std;
class MarkSheet
{
    int sci,math,eng,total;
    double per;
    string name;
    public:

    MarkSheet()
    {
        cout << endl;
        cout << "ENTER STUDENT DETAIL  " << endl;
        cout << "****************************************" << endl;
        cout << "Enter Student Name :- ";
        cin >> name;    
        cout << "Enter Student Sci Mark :- ";
        cin >> sci;
        cout << "Enter Student Math Mark :- ";
        cin >> math;
        cout << "Enter Student Eng Mark :- ";
        cin >> eng;

        total = sci + math + eng ;
        per = total / 3 ;
    }
         void getResult()
         {
            cout << name << "\t" << sci << "\t" << math << "\t" << eng << "\t" << total << "\t" << per << endl;

         }
    
};

int main ()
{
    MarkSheet markSheet[4];
    cout << endl << "name\t" << "sci\t" << "math\t" << "eng\t" << "total\t" << "per\t" <<endl;
    for(int i=0;i<4;i++)
    {
        markSheet[i].getResult();
    }
}