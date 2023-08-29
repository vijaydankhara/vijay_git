#include<iostream>
using namespace std;
class Student {
  private:
    int adno;
    char name[21];
    float marks[5];
    float average;

    float GETAVG() {
      float sum = 0;
      for(int i = 0; i < 5; i++) {
        sum += marks[i];
      }
      return sum / 5;
    }

  public:
    void READINFO() {
      cout << "Enter Admission Number: ";
      cin >> adno;
      cout << "Enter Name: ";
      cin.ignore();
      cin.getline(name, 21);
      cout << "Enter Marks for 5 Subjects: ";
      for(int i = 0; i < 5; i++) {
        cin >> marks[i];
      }
      average = GETAVG();
    }

    void DISPLAYINFO() {
      cout << "Admission Number: " << adno << endl;
      cout << "Name: " << name << endl;
      cout << "Marks: ";
      for(int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
      }
      cout << endl;
      cout << "Average: " << average << endl;
    }
};
int main ()
{
    Student stu; // stu is a student class object
    stu.READINFO();
    stu.DISPLAYINFO();
    return 0;
}

/*
Enter Admission Number: 3193
Enter Name: vijay_dankhara
Enter Marks for 5 Subjects: 98
99
96
97
100
Admission Number: 3193   
Name: vijay_dankhara     
Marks: 98 99 96 97 100   
Average: 98
*/