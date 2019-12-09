#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define REP1(i,n) for(long long i=1;i<=(n);i++)
#define REP2D(i,j,h,w) for(long long i=0;i<(h);i++) for(long long j=0;j<(w);j++)
#define REP2D1(i,j,h,w) for(long long i=1;i<=(h);i++) for(long long j=1;j<=(w);j++)
#define PER(i,n) for(long long i=((n)-1);i>=0;i--)
#define PER1(i,n) for(long long i=(n);i>0;i--)
#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define FORE(i,a,b) for(long long i=(a);i<=(b);i++)
#define ITE(arr) for(auto ite=(arr).begin();ite!=(arr).end();++ite)
#define ALL(a) ((a).begin()),((a).end())
#define RANGE(a) (a),((a)+sizeof(a))
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
#define YNPRT(b) cout<<((b)?"Yes":"No")<<endl
#define ENTER printf("\n")
#define REV(arr) reverse(ALL(arr))
#define PRT(a) cout<<(a)<<endl
#ifdef DEBUG
#define DBPRT(a) cout << "[Debug] - " << #a << " : " << (a) << endl
#define DBSTART if(1){
#define DBEND }
#else
#define DBPRT(a) do{}while(0)
#define DBSTART if(0){
#define DBEND }
#endif
#define PRTLST(arr,num) REP(_i,num) cout<<_i<<" - "<<arr[_i]<<endl;
#define PRTLST2(arr2,d1,d2) REP(_i,d1) REP(_j,d2) cout<<_i<<","<<_j<<" : "<<arr2[_i][_j]<<endl;
#define PRTLST2D(arr2,d1,d2) do{cout<<"L\t";REP(_i,d2) cout<<_i<<"\t"; cout<<endl; REP(_i,d1){cout<<_i<<"\t";REP(_j,d2){cout<<arr2[_i][_j]<<"\t";}cout<<endl;}}while(0);

#define TOSUM(arr,sum,n) {sum[0]=arr[0];REP1(i,n-1) sum[i]=sum[i-1]+arr[i];}

#define MIN(target,v1) (target)=min(target,v1)
#define MAX(target,v1) (target)=max(target,v1) 
#define P1 first
#define P2 second
#define PB push_back
#define UB upper_bound
#define LB lower_bound
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int INF_INT = 2147483647;
const ll INF_LL = 9223372036854775807LL;
const ull INF_ULL = 18446744073709551615Ull;
const ll P = 92540646808111039LL;
const int Move[4][2] = {-1,0,0,1,1,0,0,-1};
const int Move_[8][2] = {-1,0,-1,-1,0,1,1,1,1,0,1,-1,0,-1,-1,-1};
template<typename T1,typename T2>
ostream& operator<<(ostream& os,const pair<T1,T2>& p) {os<<"( "<<p.P1<<" , "<<p.P2<<" )";return os;}
template<typename T>
ostream& operator<<(ostream& os,const vector<T>& v) {ITE(v) os << (ite-v.begin()) << " : " << *ite <<endl;return os;}
template<typename T>
ostream& operator<<(ostream& os,const set<T>& v) {os<<" { ";ITE(v) {os<<*ite;if(ite!=--v.end()){os<<" , ";}} os<<" } ";return os;}
template<typename T1,typename T2>
ostream& operator<<(ostream& os,const map<T1,T2>& m) {ITE(m) {os<<ite->P1<<"\t\t|->\t\t"<<ite->P2<<endl;} return os;}

//---------------------
#define MAXN 305
#define INF 300000000900
//---------------------

ll n,m,l,q;
ll s[MAXN*MAXN];
ll t[MAXN*MAXN];

ll G[MAXN][MAXN];
ll F[MAXN][MAXN];

int main(){
	cin >> n >> m >> l;
	REP2D1(i,j,n,n) G[i][j] = INF;
	REP(i,m){
		ll a,b,c;
		cin >> a >> b >> c;
		G[a][b] = G[b][a] = c;
		DBPRT(a);DBPRT(b);DBPRT(c);DBPRT(G[a][b]);
	}
	DBSTART
	PRTLST2D(G,n+1,n+1);
	DBEND

	REP1(i,n) G[i][i] = 0;
	cin >> q;
	REP(i,q) cin >> s[i] >> t[i];

	DBSTART
	PRTLST2D(G,n+1,n+1);
	DBEND
	//Floyd
	REP1(k,n) REP2D1(i,j,n,n)
		G[i][j] = min(G[i][j],G[i][k]+G[k][j]);

	


	REP2D1(i,j,n,n) if(G[i][j]<=l) F[i][j] = 1; else F[i][j] = INF;

	DBSTART
	ENTER;
	PRTLST2D(G,n+1,n+1);
	ENTER;
	PRTLST2D(F,n+1,n+1);
	ENTER;
	DBEND

	//Floyd
	REP1(k,n) REP2D1(i,j,n,n)
		F[i][j] = min(F[i][j],F[i][k]+F[k][j]);


	REP(i,q) PRT(F[s[i]][t[i]]>=INF?-1:F[s[i]][t[i]]-1);

	return 0;
}







