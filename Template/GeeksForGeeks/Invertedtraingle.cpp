#include <bits/stdc++.h>

using namespace std;

void Invertedtraingle(int b){
    int i=1 ;
    int j=1;
    while (i<b){
        while (j<b-i){
            cout<<".";
            j++;
            }
        while (j<=b){
            cout<<"*";
            j++;
        }
        i=i+1;

    
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    int a;
    a=5;
    Invertedtraingle(a);
    return 0;
}
