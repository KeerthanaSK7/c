// c program for linear search
#include <stdio.h>
int linearsearch(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return i;
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
    int res=linearsearch(a,n,k);
    if(res!=-1){
        printf("element found at index %d.",res);
    }
    else{
        printf("element is not found.");
    }
    return 0;
}
