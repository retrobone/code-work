// Created 9.2.2025, not yet completed

#include <stdio.h>
#include <stdlib.h>

int avg(int*,int);
int maximum(int*,int);
int minimum(int*,int);
int mode(int*,int);
int count(int*,int);

int avg(int *arr,int size){
    int d, avg,sum=0;
    for(d=0;d<size;d++){
        sum+=arr[d];
    }
    avg=sum/size;
    printf("\n Average is %d", avg);
}

int maximum(int *arr,int size){
    int d, max;
    for(d=0;d<size;d++){
        if(arr[d]>arr[d+1]){
            max=arr[d];
        }
    }
    printf("\n Maximum is %d", max);
}

int minimum(int *arr,int size){
    int d, min;
    for(d=0;d<size;d++){
        if(arr[d]<arr[d+1]){
            min=arr[d];
        }
    }
    printf("\n Minimum is %d", min);
}
int mode(int *arr,int size){
    int d,e, mode,mode1,mode1count,count,max;
    for (d=0;d<size;++d){
       count=0;
        for(e=0;e<size;++e){
            if(arr[d]==arr[e])
            count++;
        }

        if(count>max)
            max=count;
            mode=arr[d];

    }
    printf("\n Mode is %d", mode);
}

int count(int *arr,int size){
    int d, odd, even;
    odd=0;
    even=0;
    for(d=0;d<size;d++){
        if(arr[d]%2==0)
            even++;
        else
            odd++;
    }
    printf("\n Odd numbers -  %d", odd);
    printf("\n Even numbers - %d", even);
}

int main(){
    int i, size;
    printf("\n Enter no. of elements needed : ");
    scanf("\n%d",&size);
    int* array=(int*)malloc(size*10 * sizeof(int)); /* Allocate memory acc. to the no. of elements (incresed further memory by 10 times 
                                                    because the program couldn't work ahead if entering a 3 digit number ) */

    for(i=0;i<size;i++){
            printf("\n Enter element no. %d : ", i);
            scanf("%d", &array[i]);
    }
            avg(array,size); // Find Average
            maximum(array,size); // Find the biggest number
            minimum(array,size); // Find the smallest number
            mode(array,size); // Find the mode
            count(array,size); // Find number of odd and even numbers

            free(array); // Free memory after the program ends

    return 0;
}
