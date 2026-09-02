#include<stdio.h>
int main(){
    int n, a[100];
    int i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        printf("a[%d] = %d",i,a[i]);
        printf("\n");
    }
    return 0;
}