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
 

int main()
{
    fast_cin();
    char arr[8][8];
    int black = 0;
    int white = 0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='q'){
                black = black+9;
            }
            else if(arr[i][j]=='Q'){
                white +=9;
            }
            if(arr[i][j]=='r'){
                black = black+5;
            }
            else if(arr[i][j]=='R'){
                white +=5;
            }
            if(arr[i][j]=='b'){
                black = black+3;
            }
            else if(arr[i][j]=='B'){
                white +=3;
            }
            if(arr[i][j]=='n'){
                black = black+3;
            }
            else if(arr[i][j]=='N'){
                white +=3;
            }
            if(arr[i][j]=='p'){
                black = black+1;
            }
            else if(arr[i][j]=='P'){
                white +=1;
            }
            
        }

    }
    if(black>white){
        cout<<"Black"<<endl;
    }
    else if(white>black){
        cout<<"White"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
        return 0;
}