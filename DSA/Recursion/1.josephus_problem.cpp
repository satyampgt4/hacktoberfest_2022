#include <bits/stdc++.h>
using namespace std;
#define ll long long

///////////////////////////----SKIP_THIS------/////////

////////////////////---READ_FROM_HERE--------//////////////////////
ll josephus(ll n, ll k)
{
  if (n == 1)
    return 0;

  return (josephus(n - 1, k) + k) % n;
}
/////////////////--Solve----/////////////////////////
void cptime()
{

  ll n, k;
  cin >> n >> k;
  cout << josephus(n, k) + 1;
  cout << "\n";
  ////////--return-////////////
  return;
}
//////////////////////////////////////------Main--------///////////////////////////////////////////////
int main()
{

///////////input output non terminal/////////
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
       ///////////////////////

  ///////fast-io///////
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ////////////

  int t;
  cin >> t;
  while (t--)
  {
    cptime();
  }
}

return 0;
}
/*
2
14 2
5 3


13
4

*/