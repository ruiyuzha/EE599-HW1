#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<double> inputs = {1, 2, 3, 4};
  std::cout << "inputs: {1, 2, 3, 4}, output: " << solution.FindMedian(inputs)
            << std::endl;

  inputs={1, 2, 3, 4, -1};
  std::cout << "inputs: {1, 2, 3, 4, -1}, output: " << solution.FindMedian(inputs)
            << std::endl;

  inputs={2};
  std::cout << "inputs: {2}, output: " << solution.FindMedian(inputs)
            << std::endl;
  
  inputs = {};
  std::cout << "inputs: {}, output: " << solution.FindMedian(inputs) << std::endl;

  return 0;
}