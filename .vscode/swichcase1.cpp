#include <iostream>
using namespace std;
int main()
{
    int j,k,ans;
    char i;
    cin >> i >> j >> k;
    switch (i)
    {
        case '+':
        ans=j+k;
        cout << ans;
        break;
        case '-':
        ans=j-k;
        cout << ans;
        break;
        case '*':
        ans=j*k;
        cout << ans;
        break;
        case '/':
        ans=j/k;
        cout << ans;
        break;
        case '%':
        ans=j%k;
        cout << ans;
        break;
    }
}