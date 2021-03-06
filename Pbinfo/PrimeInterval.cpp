#include <iostream>

using namespace std;

bool prim(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3; d*d<=n; d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main(){

    int a, b, k=0;

    cin>>a>>b;
    if(a>b) swap(a,b);

    for(int i=a; i<=b; i++)
        if(prim(i)) k++;

    cout<<k;

    return 0;
}