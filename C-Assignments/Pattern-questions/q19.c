 #include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    int j;
    int count=1;
    for(int i=0;i<=n;i++){
        for(j=count;j<count+i;j++){
            printf("%d ",j);
        }
        count=j;
        printf("\n");
    }
   return 0;
}
