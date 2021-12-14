#include <bits/stdc++.h>

using namespace std;

void primefactor(int b)
{
    int x;
    x = b;
    for (int i = 2; i < b;)
    {

        if (x % i == 0)
        {
            x = x / i;
            cout << i;
            i = 2;
            continue;
        }
        if (x == 1)
        {
            break;
        }i
        i++;
    }
}

int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    primefactor(a);
    return 0;
}
