#include<iostream>
using namespace std;
class BOOK {
  private:
    int BOOK_NO;
    char BOOKTITLE[21];
    float PRICE;

  public:
    float TOTAL_COST(int N) {
      return N * PRICE;
    }

    void INPUT() {
      cout << "Enter Book Number: ";
      cin >> BOOK_NO;
      cout << "Enter Book Title: ";
      cin.ignore();
      cin.getline(BOOKTITLE, 21);
      cout << "Enter Price per Copy: ";
      cin >> PRICE;
    }

    void PURCHASE() {
      int numCopies;
      cout << "Enter the number of copies to be purchased: ";
      cin >> numCopies;
      float totalCost = TOTAL_COST(numCopies);
      cout << "\nTotal cost to be paid: $" << totalCost ;
    }
};
int main ()
{
  BOOK cost; // cost is a book class object
    // cost.TOTAL_COST();
     cost.INPUT();
     cost.PURCHASE();

    return 0;


}
/*
Enter Book Number: 2
Enter Book Title: story
Enter Price per Copy: 0.70
Enter the number of copies to be purchased: 500
Total cost to be paid: $350
*/