/*POJ:3069*/
#include <iostream>
#include <algorithm>
using namespace std;
int R, N;
int point[1001];

int main()
{
    cin >> R >> N;
    while (R != -1 && N != -1)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> point[i];
        }
        int res = 0, i = 0;
        sort(point, point + N);
        while (i < N)
        {
            int s = point[i++];
            while (i < N && point[i] <= s + R)
                i++;

            int p = point[i - 1];
            while (i < N && point[i] <= p + R)
                i++;
            res++;
        }
        cout << res << endl;
        cin >> R >> N;
    }
}