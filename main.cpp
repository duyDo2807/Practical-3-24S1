#include <iostream>

#include "Truckloads.h"

int main() {
  int crates;
  int loads;
  std::cin >> crates;
  std::cin >> loads;
  Truckloads truckLoads;
  std::cout << "Returns: " << truckLoads.numTrucks(crates, loads) << std::endl;
}