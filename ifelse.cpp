#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int savings;
    cin>>savings;

    if(savings>5000){
        cout<<"A\n";
    }
    else if(savings<5000){
        cout<<"B\n";
    }
    else{
        cout<<"C\n";
    }
    return 0;

}