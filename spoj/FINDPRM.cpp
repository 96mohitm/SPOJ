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
vi a(10000001,1);
vi p(10000001,0);
void seive(){
	int i,j;
	a[0]=0;a[1]=0;
	for(i=4;i<10000001;i=i+2) a[i]=0;
	for(i=3;i<3163;i++){
		if(a[i])
			for(j=i*i;j<10000001;j=j+(2*i))
				a[j]=0;
	}
	rep(i,1,10000001){
		p[i]=p[i-1]+a[i];
	}
}
int main(void){
	fast();
	seive();
	int t;
	get(t);
	while(t--){
		int n,m;
		get(n);
		m=n/2;
		int r= p[n]-p[m];
		pln(r);
	}
}
