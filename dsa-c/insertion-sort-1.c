// my first sorting program :) - 5.2.25

#include <stdio.h>

void insert_sort(int arr[], int);
void printarray(int arr[], int);

void insert_sort(int array[], int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key=array[i]; // copies array value to key
        j=i-1; //j being element before i
        while(j>=0 && array[j]>key) // loop will only work if j>=0 and j-th element is greater than key
        {
            array[j+1]=array[j]; // Shifts elements to the left
            j--; // To check with the next left element, j is decreased
        }
        arra[j+1]=key; // Inserts key after the current loop is sorted
    }
}

void printarray(int d[], int s){
    int i;
    for(i=0;i<s;i++){
        printf("\n %d", d[i]); // prints the array
    }
}

int main(){
    int key, sort[6]={10,13,14,9,55,6};
    insert_sort(sort,6); // calls the sorting function
    printarray(sort,6); // prints the sorted array
    return 0;
}
