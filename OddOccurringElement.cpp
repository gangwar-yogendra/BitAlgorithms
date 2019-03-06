// Function to return the only odd occurring element
// in the given array
#include <iostream>

int OddOccurring(int arr[], int n)
{
    // XOR Operation
    // A ^ A = 0
    // 0 ^ A = A
    int res = 0;
    
    for(int i = 0; i<n; i++)
    {
        res = res^arr[i];
    }
    
    return res;
}

int main()
{
    int arr[] = {22,22, 12, 12, 11, 30, 30, 40, 40};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    std::cout<<"Odd occurring element is: \n";  
    int result = OddOccurring(arr, size);
    
    std::cout<<result<<"\n";
  
    return 0;
}
