//cyclic swap in ARRAY
//1,2,5,6,4 --> 4,1,2,5,6

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int last=arr[n-1];
    for (int i = 1; i < n; i++)
    {
        arr[n-i]=arr[n-i-1];
    }
    arr[0]=last;
    printf("After cycling array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
