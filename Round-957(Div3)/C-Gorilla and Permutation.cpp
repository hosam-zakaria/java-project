#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
//وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main() {
  fast
  int t; cin>>t; 
  while (t--)
  {
    int n,m,k; cin>>n>>m>>k;
    for(int i=n ; i>m ; i--){
      cout << i << " ";
    }
    for(int i=1 ; i<m+1 ; i++){
      cout << i << " ";
    }
    cout<<endl;
  }
    return 0;
}
