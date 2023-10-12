//How to pass a 2D array as a parameter in C?
//2) When only second dimension is available globally (either as a macro or as a global constant). 

#include <stdio.h>
const int N=3;
void print(int arr[][N],int m)
{
    int i, j;
    for(i=0;i<m;i++)
    for(j=0;j<N;j++)
    printf("%d ",arr[i][j]);
}
int main()
{
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    print(arr,3);
    return 0;
}