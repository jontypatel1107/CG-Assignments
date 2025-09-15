#include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    int j;
    char count='A';
    for(int i=0;i<=n;i++){
        for(j=count;j<count+i;j++){
            printf("%c ",j);
        }
        count=j;
        printf("\n");
    }
   return 0;
}