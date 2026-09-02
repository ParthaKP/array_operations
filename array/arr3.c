#include<stdio.h>
int main(){
    int n, a[100];
    int i;
    int ele, pos;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be inserted: ");
    scanf("%d",&ele);
    printf("Enter position of insertion: ");
    scanf("%d",&pos);
    for(i=n;i>pos;i--){
        a[i] = a[i-1];
    }
    a[pos] = ele;
    n = n+1;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}