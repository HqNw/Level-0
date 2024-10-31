#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

void testAlgorithm() {
  srand(time(0));
  int randomTime = rand() % 5 + 1; // Random time between 1 and 5 seconds
  std::cout << "Algorithm will take " << randomTime << " seconds." << std::endl;
  sleep(randomTime);
  std::cout << "Algorithm completed." << std::endl;
}

int main() {
  testAlgorithm();
}