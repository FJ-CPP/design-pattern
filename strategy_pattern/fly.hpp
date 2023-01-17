#pragma once
#include <iostream>

class FlyBehavior {
public:
  virtual void fly() {}
};

class FlyFast : public FlyBehavior {
public:
  void fly() {
    std::cout << "I can fly fast" << std::endl;
  }
};

class FlySlowly : public FlyBehavior {
public:
  void fly() {
    std::cout << "I can fly slowly" << std::endl;
  }
};

class FlyDisabled : public FlyBehavior {
public:
  void fly() {
    std::cout << "I can not fly" << std::endl;
  }
};