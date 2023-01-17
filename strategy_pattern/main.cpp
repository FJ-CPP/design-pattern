#include <iostream>
#include "bird.hpp"

int main() {
  Parrot parrot;
  std::cout << "Parrot says : " << std::endl;
  parrot.chirp();
  parrot.fly();
  std::cout << "--------------" << std::endl;

  Sparrow sparrow;
  std::cout << "Sparrow says : " << std::endl;
  sparrow.chirp();
  sparrow.fly();
  std::cout << "--------------" << std::endl;

  ToyBird toy_bird;
  std::cout << "ToyBird says : " << std::endl;
  toy_bird.chirp();
  toy_bird.fly();
  std::cout << "--------------" << std::endl;
  
  return 0;
}