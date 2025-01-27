#include<stdio.h>
int main(){
    int n,t;
    printf("Enter array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to search : ");
    scanf("%d",&t);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i +1; j < n; j++)
        {
           if (arr[i] + arr[j] == t)
           {
                printf("[ %d , %d ]\n",i,j);
                break;
           }
           
        }
        
    }

    
    return 0;    
}