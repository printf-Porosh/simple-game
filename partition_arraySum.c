#include <stdio.h>
#include <stdlib.h>

int work(int arr[],int n);

int main() {
    int n,i,t;
    printf("Enter element number :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    t = work(arr,n);
    printf("Sum of array elements is : %d\n",t);


    return 0;
}

 int work(int arr[], int n){ 

    int total = 0,cnt = 0;
    int left = 0;

    for(int i=0;i<n;i++){
        total = total + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        left = left + arr[i];
        int write = total - left;

        if(write % 2 == 0){
            cnt++;
        }
    }
    return cnt;
    

 }

