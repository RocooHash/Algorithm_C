/*POJ: 3617*/
#include <iostream>
using namespace std;

int n;
char str[6001];

void solve()
{
    int a = 0, b = n - 1;
    int putNum = 0;
    while (a <= b)
    {
        bool left = false;
        for (int i = 0; a + i < b; i++)
        {
            if (str[a + i] < str[b - i])
            {
                left = true;
                break;
            }
            if (str[a + i] > str[b - i])
            {
                left = false;
                break;
            }
        }
        if (left)
            putchar(str[a++]);
        else
            putchar(str[b--]);
        putNum++;
        if(putNum == 80){
            cout<<endl;
            putNum = 0;
        }
    }
    cout<<endl;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    solve();
}