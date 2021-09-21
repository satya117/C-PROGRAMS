#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,34,52,20,45,33};
    //to get the sizeof arr
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Size of an array:%d",n);
    return 0;
}
