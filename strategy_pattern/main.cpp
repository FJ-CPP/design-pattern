#include <iostream>
#include "bird.hpp"

int main() {
  std::shared_ptr<Bird> bird;
  bird = std::make_shared<Parrot>();
  std::cout << "Parrot says : " << std::endl;
  bird->chirp();
  bird->fly();
  std::cout << "--------------" << std::endl;

  bird = std::make_shared<Sparrow>();
  std::cout << "Sparrow says : " << std::endl;
  bird->chirp();
  bird->fly();
  std::cout << "--------------" << std::endl;

  bird = std::make_shared<ToyBird>();
  std::cout << "ToyBird says : " << std::endl;
  bird->chirp();
  bird->fly();
  std::cout << "--------------" << std::endl;
  
  return 0;
}