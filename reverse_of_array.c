#include<stdio.h>
int main(){
int n,i;
    int c;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("ENTER THE ELEMENTS");
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
       printf("%d\n",arr[i]);
    }
 return 0; 
}