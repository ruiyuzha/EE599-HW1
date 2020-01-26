#include "solution.h"
#include <iostream>

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Factorial(int n) {
  long long result=1;
  if (n>0) {
    for(int i = 1; i <=n; ++i){
        result *= i;
    }
    return result;
  }
  else if (n==0){
    return 1;
  }
  else{
    return -1;
  } 
}

int Solution::FactorialRecursive(int n){
  if(n>0){
    return FactorialRecursiveAux(n);
  }
  else if(n==0){
    return 1;
  }
  else{
    return -1;
  }
}

int Solution::FactorialRecursiveAux(int n) {
  if(n > 1)
        return n * FactorialRecursiveAux(n - 1);
    else
        return 1;
}