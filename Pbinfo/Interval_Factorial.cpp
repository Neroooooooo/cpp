#include <iostream>

using namespace std;

void interval(int n,int &a,int &b){
    int f=1;
    for(int i=2; i<n; i++) f=f*i;

    a=f+1;
    b=f*n*(n+1)-1;
}

int main(){

    return 0;
}