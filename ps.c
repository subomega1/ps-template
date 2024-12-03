#include <stdio.h>

//#ifdef LOCAL
#define dbg(x) fprintf(stderr, #x " = %d\n", x)
//#else
    //#define dbg(x) // Debugging disabled for submission
//#endif

int main() {
//#ifdef LOCAL
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
//#endif

    int t;
    scanf("%d", &t);  // Number of test cases
    while (t--) {
          int a[5];
          for (int i=0; i<5; i++) {
            scanf("%d",&a[i]);
          
          }

            for (int i=0; i<5; i++) {
            printf("%d\t",a[i]);
          }

        


        dbg(t);  // Debug statement
    }

    return 0;
}
