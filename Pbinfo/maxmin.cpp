#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),c)-min(min(a,b),c);
    return 0;
}
