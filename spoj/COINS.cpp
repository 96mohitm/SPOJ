#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef unsigned long long int ul;

#define MOD 1000000007
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define vget(v) rep(i, 0, v.z) get(v[i]);
#define vsort(v) sort(v.begin(), v.end())
#define get(x) cin >> x
#define put(x) cout << x
#define pls(x) cout << x << ' '
#define pln(x) cout << x << "\n"
#define vget(v) rep(i, 0, v.z) get(v[i]);
#define rep(i, begin, end) \
  for (__typeof(end) i = (begin) - ((begin) > (end)); \
       i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define watch(x) cout << (#x) << " is " << (x) << endl
void fast() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
ll dp[10000001];
void coins(){
	int i,a,b,c;
	rep(i,0,12) dp[i]=i;
	rep(i,12,10000001){
		a=i/2;b=i/3;c=i/4;
		dp[i]=dp[a]+dp[b]+dp[c];
	}
}
ll maxcoins(ll n){
	if(n<10000001) return dp[n];
	int a=n/2,b=n/3,c=n/4;
	return maxcoins(a)+maxcoins(b)+maxcoins(c);
}
int main(void){
	// fast();
	coins();
	ll n,i;
	// rep(i,0,51) printf("%d->%lld\n",i ,dp[i]);
	while(scanf("%lld",&n)!=EOF){
		printf("%lld\n",maxcoins(n) );
	}
}