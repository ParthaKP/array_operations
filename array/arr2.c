#include<stdio.h>
int main(){
    int n, a[100];
    int i;
    int min, max;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = max = a[0];
    for(i=0;i<n;i++){
        if (a[i]> max)
        max = a[i];
    }
        for(i=0;i<n;i++){
        if (a[i]< min)
        min = a[i];
    }
    printf("Maximum = %d \n", max);
    printf("Minimum = %d", min);
    return 0;
}