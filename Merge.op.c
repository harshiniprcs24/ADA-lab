#include<stdio.h>
#include<time.h>
#define MAX 5000
int arr[MAX],temp[MAX];
void merge(int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
        while(i<=mid)
            temp[k++]=arr[i++];
        while(j<=high)
             temp[k++]=arr[j++];
        for(i=low;i<=high;i++)
            arr[i]=temp[i]
            void mergesort(int low,int high)
            if(low<high)
            int mid=(low+high)/2;
            mergesort(low,mid);
            mergesort(mid+1,high);
        merge(low,mid,high);
    }
}
