// Multilevel Inheritance program 
#include <iostream>
using namespace std;

class Gujarat
{
    public:
    void Surat()
    {
        cout << " -> surat is green city \n " << endl;
    }
};

class Rajsthan : public Gujarat
{
    public:
    void Jaipur()
    {
        Surat();
        cout << " -> Jaipur is pink city \n " << endl;
    }
};

class India : public Rajsthan
{
  public:
  void Delhi
  ()
  {
    
    Jaipur ();
    cout << " -> delhi is capital city \n " << endl;
  }
};

int main()
{
    India i;
    i.Delhi();
}