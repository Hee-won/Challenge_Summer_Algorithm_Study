#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;
int a[2001];
int main() {
    int i, n, k, p = 0, tot = 0, cnt = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        tot == a[i];
    }
    scanf("%d", &k);
 
    if (k >= tot) {
        printf("-1");
        return 0;
    }
      while(1){
          p++;
          if (p > n) p = 1;
          if (a[p] == 0) continue;
          a[p]--;
          cnt++;
          if (cnt == k) break;
       }
      while (1) {
          p++;
          if (p > n) p = 1;
          if (a[p] != 0) break;
      }
      printf("%d", p);
    return 0;
}
//46
