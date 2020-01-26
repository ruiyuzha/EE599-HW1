#include <iostream>
#include "src/lib/solution.h"

int main() {
  Solution solution;
  int a=5;
  std::cout << "inputs: 5, output(nonrecursion version): 5!= " << solution.Factorial(a)
            << std::endl;
  std::cout << "inputs: 5, output(recursion version): 5!= " << solution.FactorialRecursive(a)
            << std::endl;
  int b=0;
  std::cout << "inputs: 0, output(nonrecursion version): 0!=" << solution.Factorial(b) << std::endl;
  std::cout << "inputs: 0, output(recursion version): 0!=" << solution.FactorialRecursive(b) << std::endl;
  
  int c=-2;
  std::cout << "inpus: -2, output:" <<  solution.Factorial(c) << " Error! n could not be negative number"
            << std::endl;
  std::cout << "inpus: -2, output:" <<  solution.FactorialRecursive(c) << " Error! n could not be negative number"
            << std::endl;

  return 0;
}