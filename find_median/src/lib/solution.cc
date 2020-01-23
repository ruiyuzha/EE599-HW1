#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<double> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  std::sort(inputs.begin(),inputs.end()); //sort input
  double result=0;
  if (inputs.size()%2==1){
    result=inputs[inputs.size()/2];
  }
  else{
    int index=inputs.size()/2;
    result=(inputs[index-1] + inputs[index])/2;
  }

  return result;
}
