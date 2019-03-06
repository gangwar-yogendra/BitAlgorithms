// Find missing number in a array
#include <iostream>

int missingNumber(int arr[], int n)
{
    /**
     * 1. XOR for all element of array
     * 2. Then XOR from 1 to number of element in array + 1
     * 3. Then XOR of x1 and x2 will get missing element
     * 0 ^ A = A
     * A ^ A = 0
    **/
    
    int x1 = arr[0];
    int x2 = 1;
    
    for(int i = 1; i<n; i++)
    {
        x1 = x1^arr[i];
    }
    
    for(int i=2; i<=n+1; i++)
    {
        x2 = x2^i;
    }
    
    int num = x1^x2;
    
    return num;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    std::cout<<"Missing Number in Array: ";  
    int result = missingNumber(arr, size);
    
    std::cout<<result<<"\n";
  
    return 0;
}
