#include <bits/stdc++.h>
using namespace std;

void Firstdigit(int a){
    int x=a;
    while (1){
    x=x/10;
    if (x<10){
        cout<<x;
        break;
    }
    }

}

int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    Firstdigit(a);
    return 0;
}