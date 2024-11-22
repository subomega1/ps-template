#include <bits/stdc++.h>
using namespace std;
 using ll = long long;
#define endl "\n"

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// Function to redirect input and output to/from files
void localFile(string filename) {
    // Redirecting standard input to filename.in
    if (!freopen((filename + ".in").c_str(), "r", stdin)) {
        cerr << "Error opening input file!" << endl;
        exit(1);  // Exit if file can't be opened
    }
    // Redirecting standard output to filename.out
    if (!freopen((filename + ".out").c_str(), "w", stdout)) {
        cerr << "Error opening output file!" << endl;
        exit(1);  // Exit if file can't be opened
    }
}

void solve() {
    int t;
    cin >> t;  // Number of test cases

        while (t--) {
        
        
        }
       


  
        
        
    }

int main() {
    // Uncomment and replace "filename" with your actual file name if needed
    //localFile("filename");

    solve();

    return 0;
}