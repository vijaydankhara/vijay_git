#include<iostream>
#include<string.h>
using namespace std;
struct employ{
    char name[100];
    int sallary;
    char id[100];
};
 int main()
 {
    struct employ employ1;
    strcpy(employ1.name,"vijay dankhara");
    employ1.sallary=34000;
    strcpy(employ1.id,"vijay@3193");
 cout << employ1.name << "\n" << employ1.sallary << "\n" << employ1.id;
}