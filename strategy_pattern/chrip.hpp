#pragma once
#include <iostream>

class ChripBehavior {
public:
  virtual void chrip() {}
};

class ChirpAble : public ChripBehavior {
public:
  void chrip() {
    std::cout << "I can chrip" << std::endl;
  }
};

class ChirpDisabled : public ChripBehavior {
public:
  void chrip() {
    std::cout << "I can not chrip" << std::endl;
  }
};