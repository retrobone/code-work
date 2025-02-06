// My first java program :) - 6.2.2025

public class SumArray{
    public static void main(String[]args){
        int[] arr={13,14,11,14,15,20};
        int sum=0, i; // Make a variable 'sum' for the sum of the array
        for(i=0;i<6;i++){ // Loop to add all the 6 elements in the array
            sum+=arr[i]; // sum =sum+arr[i]
        }
        System.out.println("The sum of the array elements is " + sum); // Prints the total sum of the array
    }
}
