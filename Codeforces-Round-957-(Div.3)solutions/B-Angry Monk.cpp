#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
//وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
using namespace std;
#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t; cin>>t; 
  while (t--)
  {
    int n,k; cin>>n>>k;
    int v[k];
    for(int i=0 ; i<k ; i++){
      cin>>v[i];
    }
    sort(v , v+k);
    int ans=0;
    for(int i=0 ; i<k-1 ; i++){
      ans += (2*v[i]) - 1;
    }
    cout << ans << endl;
  }
    return 0;
}
