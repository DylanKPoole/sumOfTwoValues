#include <iostream>

using namespace std;

//Given an array of integers and a value, determine if there are any two integers in the array whose sum is equal to the given value.

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9}; //given array *editedable*
    int val = 5; //given value *editable*

    int arrLen = sizeof(arr)/4; //get the length of given array

    for(int i=0;i<arrLen;i++){ //choose one value from the array
        for(int j=0;j<arrLen-1;j++){ //choose another value to add to the first value chosen
            if(j==i){ //skips over comparison of the same value in the array 
                continue;
            }
            if(arr[i]+arr[j]==val){ //add the two selcted values together an test if its equal to the given value
                cout << "values " << arr[i] << " and " << arr[j] << " are equal to the given val: " << val; //display the correct results
                exit(0);
            }
        }
    }
    cout << "No two Values in the array add together to the value of " << val; //displays if no two values added together are equal to the given value
}