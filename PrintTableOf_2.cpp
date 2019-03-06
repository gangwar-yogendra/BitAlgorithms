// Print table of 2 using bit operation
#include <iostream>

int main()
{
  std::cout<<"Table of 2: \n"; 
  // left and right shift by is multiply 
  // and divided by 2 respectively 
  for(int i = 1; i<11; i++)
  {
      std::cout<<(i << 1) <<" ";
  }
  
  return 0;
}
