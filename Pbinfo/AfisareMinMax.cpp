#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int a[10001], n, maxim=INT_MIN, minim=INT_MAX, iMax=0, iMin=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]<=minim){ minim=a[i]; iMin = i;}
        else if(a[i]>=maxim){ maxim=a[i]; iMax=i;}
    }
    if(iMin>iMax) swap(iMin, iMax);
    for(int i=iMin; i<=iMax; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
