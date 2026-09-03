#include<stdio.h>
int main(){
    int n, a[100];
    int i;
    int ele, pos;
    int found = -1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Search element: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i] == ele){
        found = 1;
        pos = i;}
}
    if (found == 1)
    printf("Element found in position %d",pos);
    else 
    printf("Element not found");
    return 0;
}
