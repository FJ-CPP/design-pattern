#pragma once
#include "operator.hpp"

class CalculatorFactory {
public:
  static Operator *get_calculator(char opt) {
    switch (opt) {
      case '+':
        return new OperatorAdd;
      case '-':
        return new OperatorSub;
      case '*':
        return new OperatorMul;
      case '/':
        return new OperatorDiv;
    }
  }
};