#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pl;
typedef pair<double,double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvl;
typedef vector<vector<pl> > vvpl;
typedef vector<pl> vpl;
typedef vector<pii> vpi;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
 ll n,a,b;
 cin>>n>>a>>b;
 ll mid = n/2;
 ll count_a;
 ll count_b;
 ll last;
 int flag =0;
 if(a<b){
     count_a = n-a -1; //3
     count_b = b-2;  //3
 }
 else{
     count_a = n-a;
    count_b = b-1;
 }
     if(count_a>=mid-1 && count_b>=mid-1){
          vector<bool> v(n+1,false);
        ll temp = mid-1;  //2
        ll i = n;     //6
    while(temp--){
        
        if(i!=b){
        v[i]=true;
        i--;
        }
        else{
            temp++;
            i--;
        }
        
    }
    v[a] = true;
    
        for(int i=1;i<=n;i++){
        if(v[i]==true){
            cout<<i<<" ";
        }
    }

     for(int i=1;i<=n;i++){
        if(v[i]==false){
            cout<<i<<" ";
        }
    }
    
    cout<<endl;
    
    
    
    
     
    }
    else{
          cout<<-1<<endl;
      }  
    
 

        
      
        
 
        
 
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}