#include <stdio.h>

//#ifdef LOCAL
    #define dbg(x) fprintf(stderr, #x " = %d\n", x)
//#else
    #define dbg(x) // Debugging disabled for submission
//#endif

int main() {
//#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#endif

    int t;
    scanf("%d", &t);  // Number of test cases
    while (t--) {
        int n;
        scanf("%d", &n);  // Input
        printf("%d\n", n * n);  // Example output
        dbg(n);  // Debug statement
    }

    return 0;
}
