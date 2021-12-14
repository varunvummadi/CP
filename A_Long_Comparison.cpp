#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;
    float cond = log10((float)a / c) + b - d;
    if(cond == 0) cout << "=" << endl;
    else if(cond < 0) cout << "<" << endl;
    else cout << ">" << endl;
    return;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
