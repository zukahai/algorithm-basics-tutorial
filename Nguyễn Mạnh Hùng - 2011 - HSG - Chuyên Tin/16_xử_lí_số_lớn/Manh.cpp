#include <bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;
ll a,b,c,s=0;
int main()
{
  a = 1000000000000000;
	b = 2000000000000000;
	c = 3000000000000000;
  s=((a%m)*(b%m))%m;
  s=(s*(c%m))%m;
  cout<<s;
}
