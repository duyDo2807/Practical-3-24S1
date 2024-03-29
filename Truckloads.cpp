#include "Truckloads.h"

Truckloads::Truckloads(){};

int Truckloads::numTrucks(int numCrates, int loadSize) {
  if (numCrates <= loadSize) {
    return 1;
  } else {
    int left = numCrates / 2;
    int right = numCrates - left;
    return numTrucks(left, loadSize) + numTrucks(right, loadSize);
  }
}