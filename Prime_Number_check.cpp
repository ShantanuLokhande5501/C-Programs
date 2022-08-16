#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    std::cout<<"Enter the number to check : " << std::endl;
    std::cin>> n ;
    
    bool isPrime = 1;
    
    for(int i=2; i<n; i++)
    {
        if(n%i == 0) {
            isPrime = 0;
            break;
            
        }
        
    }
    
    if(isPrime) { std::cout<<"The given number is Prime number"<<std::endl; }
    else { std::cout<<"The given number is not a Prime number"<<std::endl; }
    
    return 0;
}
