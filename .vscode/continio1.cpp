// 1  2  3  4  5  6  7  8   9 10   11  12   13  14 15 not print 5 and 13.
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=15;i++)
    {
        if(i==5||i==13)
        {
            continue;
        }
        cout << i <<"\t";
}
}