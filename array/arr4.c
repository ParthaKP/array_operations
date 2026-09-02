#include<stdio.h>
int main(){
    int n, a[100];
    int i;
    int pos;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter position of deletion: ");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
        a[i] = a[i+1];
    }
    
    n = n-1;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}