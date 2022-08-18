#include <iostream>

int main() {
  std::cout<<"Enter the size of rows {one integer only} : "<<std::endl;
  int n;
  std::cin>>n;
  
  for(int i=0; i<n; i++ ){
    for(int i=0; i<n; i++ ){
      std::cout<<"*";
    }
    std::cout<<std::endl;
    
  }

  return 0;
  
}
