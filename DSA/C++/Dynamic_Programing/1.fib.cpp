#include <bits/stdc++.h>
using namespace std;
#define ll long long

///////////////////////////----SKIP_THIS------/////////

////////////////////---READ_FROM_HERE--------//////////////////////
ll fabo(ll n, vector<ll> v) {
  if (n == 1 || n == 0)
    return 1;
  else if (v[n] == -1) {
    v[n] = fabo(n - 1, v) + fabo(n - 2, v);
  }
  return v[n];
}
/////////////////--Solve----/////////////////////////
void cptime() {

  int n;
  cin >> n;

  vector<ll> v(n + 1, -1);
  cout << fabo(n, v)<<"\n";
  ////////--return-////////////
  return;
}
//////////////////////////////////////------Main--------///////////////////////////////////////////////
int main() {

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

  return 0;
}
/*

*/