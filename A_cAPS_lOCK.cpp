#include <bits/stdc++.h>  
 
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
 string s;
 cin>>s;
 if(s[0]>=97 &&s[0]<=122){ //small
     int flag =0;
     for(int i=1;i<s.size();i++){
         if(s[i]>=97 &&s[i]<=122) {
             flag =1;
             break;
         }
        
     }
     if(flag ==1) cout<<s<<endl;
     else{
        forn(i,s.size()){
            if(s[i]>=97 &&s[i]<=122){
                s[i] -= 32;
            }
            else{
                s[i] = s[i]+32;
            }
        }
        cout<<s<<endl;
     }
     
 }
 else {
     int flag2 =0;
     for(int i=1;i<s.size();i++){
         if(s[i]>=97 &&s[i]<=122) {
             flag2 =1;
             break;
         }
        
     }
     if(flag2 ==0){
         forn(i,s.size()){
             s[i]= s[i]+32;
         }
         cout<<s<<endl;
     }
     else{
         cout<<s<<endl;
     }
 }
}
int main()
{
    fast_cin();
    ll t=1;
    
    while(t--) {
        solve();
    }
    return 0;
}