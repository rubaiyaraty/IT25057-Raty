#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum[100001] = {0};

    for (int i = 1; i <= 50000; i++)
    {
        for (int j = i * 2; j <= 100000; j += i)
        {
            sum[j] += i;
        }
    }

    int L, R;

    while (cin >> L >> R)
    {
        if (L == 0 && R == 0)
            break;

        int count = 0;

        for (int i = L; i <= R; i++)
        {
            int b = sum[i];

            if (b > i && b <= R && b <= 100000)
            {
                if (sum[b] == i)
                    count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}