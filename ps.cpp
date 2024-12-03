#include <bits/stdc++.h>
using namespace std;

// Typedefs
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;

// Constants
const int INF = 1e9 + 7;
const ll MOD = 1e9 + 7;

// Macros
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

// Debugging
#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

// File Redirection
void localFile(const string& filename) {
    if (!freopen((filename + ".in").c_str(), "r", stdin)) {
        cerr << "Error opening input file!" << endl;
        exit(1);
    }
    if (!freopen((filename + ".out").c_str(), "w", stdout)) {
        cerr << "Error opening output file!" << endl;
        exit(1);
    }
}

// Utility Functions
template <typename T>
void print(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << endl;
}

// Solver Function
void solve() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        // Your solution logic goes here
        // dbg(t); // Example debugging
    }
}

// Main Function
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    localFile("filename"); // Replace "filename" with actual file name
    #endif

    solve();

    return 0;
}
