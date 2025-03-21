// c program for binary search
#include<stdio.h>
int binarysearch(int a[],int l,int r,int k){
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(k<a[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    int n,k;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the key:");
    scanf("%d",&k);
    int res=binarysearch(a,0,n-1,k);
    if(res==-1){
        printf("element not found");
    }
    else{
        printf("element found at index %d.",res);
    }
    return 0;
}
