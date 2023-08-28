#include <iostream>
#include <string.h>
using namespace std;
class TEST {
  private:
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;

  public:
    int CALCNTR() {
      return NoCandidate /(100 + 1);
    }

    void SCHEDULE() {
      cout << "Enter Test Code: ";
      cin >> TestCode;
      cout << "Enter Description: ";
      cin >> Description;
      cout << "Enter Number of Candidates: ";
      cin >> NoCandidate;
      CenterReqd = CALCNTR();
    }

    void DISPTEST() {
      cout << "Test Code: " << TestCode << endl;
      cout << "Description: " << Description << endl;
      cout << "Number of Candidates: " << NoCandidate << endl;
      cout << "Number of Centers Required: " << CenterReqd << endl;
    }
};
int main ()
{
     TEST stu; // stu is a test class object
     stu.CALCNTR();
     stu.SCHEDULE();
     stu.DISPTEST();
    return 0;
}
/*
// Enter Test Code: 234
Enter Description: devlopment
Enter Number of Candidates: 35
Test Code: 234
Description: devlopment      
Number of Candidates: 35     
Number of Centers Required: 0
*/