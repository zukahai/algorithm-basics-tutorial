#include <iostream>

using namespace std;
long long n;
int main()
{
    freopen("NUMBERGAME.INP","r",stdin);
    freopen("NUMBERGAME.OUT","w",stdout);
    cin>>n;
    if(n%2==0)
    cout << "Hai";
    else
    if(n%2!=0)
    cout <<"Linh";
    return 0;
}
