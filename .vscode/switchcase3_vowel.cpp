#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << "ENTER THE ANY ALPHABET : ";
    cin >> alphabet;
    switch(alphabet)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
          cout << " is vowel : ";
           break;
         default:
        cout << " is not vowel : ";
           break;
          
        }
}