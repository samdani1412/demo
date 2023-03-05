#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int binary_search(int arr[],int first,int last,int key){


    while(first<=last){
        
        int mid=(first+last)/2;
        if(arr[mid]==key) {
            printf("index %d\n",mid);
            break;
        }
        else if(arr[mid]>key){
            last=mid-1;  
        }
        else first=mid+1;
    }
    if(first>last) printf("not found\n");
    
}

int main()
{

    //int arr[]={1,5,7,9,13,19,100,250,6500,8000};
    int n=100;
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    
    int key;
    scanf("%d",&key);

    double end,start;
    start=(double)clock();
    binary_search(arr,0,n,key);
    end=(double)clock();

    printf("time taken %f\n",(end-start)/CLOCKS_PER_SEC);
    




    return 0;
}