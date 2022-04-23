#include "vector_ops.hpp"

double mean(std::vector<double> &data) {
  double sum = 0;
  for (int ii = 0; ii <= data.size(); ++ii) {

    sum += data[ii];
  }

  return sum / data.size();
}
