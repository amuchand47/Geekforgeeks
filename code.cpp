/*

 author - Mohammad Chand Alam
 from - Aligarh Muslim University, India.

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int                            // Choose your love and love your choice
#define rep(i,n) for(ll i=0;i<n;i++)
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define reppr(i,b,a) for(ll i=b;i>=a;i--)
#define repp(i,a,b) for(ll i=a;i<=b;i++)
#define repall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define ms(s, n) memset(s, n, sizeof(s))
#define t() int t; cin>>t; while(t--)
#define pll pair <ll,ll>
#define mb make_pair
#define pb push_back
#define pf push_front
#define vi vector <int>
#define vc vector <char>
#define vs vector <string>
#define vli vector <ll>
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcount(n)
#define all(a) (a).begin(), (a).end()
#define testcases() int test;scanf("%d",&test);while(test--)
#define arrinput(a,n) for(int i=0;i<n;i++) scanf("%d",&a[i]);
const int MOD = (int) 1e9 + 7;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
bool prime[10001];

int main(){

    fastio;
    t(){
    int n;
    cin>>n;
    int a[4][4];
    for(int i=0;i<n;i++){
        int k;
        char c;
        cin>>c>>k;
        a[c-'A'][ (k/3)%4]++;
    }

    int f1 = -1, k1=0;
    int f2 = -1, k2=0;
    int f3 = -1, k3=0;
    int f4 = -1, k4=0;

    for(int i=0;i<4;i++){
        if(f1<a[i][0])
        {
            f1=a[i][0];
        }

        if(f2<a[i][1])
        {
            f2=a[i][1];
        }

        if(f3<a[i][2])
        {
            f3=a[i][2];
        }

        if(f4<a[i][3])
        {
            f4=a[i][3];
        }

    }
    int s = 0;
    if(f1>=f2 && f2>=f3 && f3>=f4){
     for(int i=0;i<4;i++)
     {
         if(a[i][0]==f1)
         {
            k1 = i;
            break;
         }
     }
     a[k1][1]=0;
     a[k1][2]=0;
     a[k1][3]=0;
     s =  s+ 100*f1;
     f2 = max(a[0][1], max(a[1][1], max(a[2][1],a[3][1] )));
     if(f2!=0){
     for(int i=0;i<4;i++)
     {
         if(a[i][1]==f2)
         {
            k2 = i;
            break;
         }
     }

     a[k2][2]=0;
     a[k2][3]=0;
     s =  s+ 75*f2;
     }
     else
     {
         s = s-100;
     }

    f3 = max(a[0][2], max(a[1][2], max(a[2][2],a[3][2] )));
     if(f3!=0){
     for(int i=0;i<4;i++)
     {
         if(a[i][2]==f3)
         {
            k3 = i;
            break;
         }
     }

     a[k2][3]=0;
     s =  s+ 50*f3;
     }
     else
     {
         s = s-100;
     }

     f4 = max(a[0][3], max(a[1][3], max(a[2][3],a[3][3] )));
     if(f4!=0){
     s =  s+ 25*f4;
     }
     else
     {
         s = s-100;
     }
    }

    }

    return 0;
}
