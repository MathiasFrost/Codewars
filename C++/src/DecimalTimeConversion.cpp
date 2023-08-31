#include "DecimalTimeConversion.hpp"

#include <cmath>

double DecimalTimeConversion::toIndustrial(int time){
  long seconds = time * 60;
  return Number((seconds / 36 / 100).toFixed(2));
}

double DecimalTimeConversion::toIndustrial(std::string time){
  return 0.0;
}

std::string DecimalTimeConversion::toNormal(double time){
  return "";
}