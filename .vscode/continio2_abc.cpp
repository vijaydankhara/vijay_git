// A B C D E ...X Y Z PRINT USING CONTINUE 
// F  or   K not print
#include<iostream>
using namespace std;
int main()
{
    for(char i=65;i<=90;i++)
    {
        if(i==70||i==75)
        {
            continue;
        }
        cout << i <<"\t";
}
}