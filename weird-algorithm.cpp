#include <bits/stdc++.h>
using std::cin;
using std::cout;

int main()
{
    long long num = 0;
    cin >> num;
    cout << num << " ";
    while (num != 1)
    {
        if (num % 2 == 1)
            num = num * 3 + 1;
        else if (num % 2 == 0)
            num = num / 2;
        cout << num << " ";
    }
    return 0;
}
