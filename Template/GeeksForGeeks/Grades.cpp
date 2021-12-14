#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n ; i++){
        int M,F, R;
        cin >> M >> F >> R;
        if(M == -1 || F == -1){
            cout << "F" << endl;
            continue;
        }
        if(M+F>=80){
            cout << "A" << endl;
            continue;
        }
        if(M+F>=65){
            cout << "B" << endl;
            continue;
        }
        if(M+F>=50){
            cout << "C" << endl;
            continue;
        }
        if(M+F>=30){
            if(R>=50) cout << "C" << endl;
            else cout << "D" << endl;
            continue;
        }
        cout << "F" << endl;
        
    }
    
}