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

int main(void){
	fast();
	int n,m,i;
	get(n);get(m);
	int a[m];
	rep(i,0,m) get(a[i]);
	sort(a,a+m);
	int min=10000;
	// rep(i,0,m) pls(a[i]);
	// pln("");
	for(i=0;i<m-n+1;i++){
		if(min>a[i+n-1]-a[i])
			min = a[i+n-1]-a[i];
		// pln(min);
	}
	pln(min);
}
