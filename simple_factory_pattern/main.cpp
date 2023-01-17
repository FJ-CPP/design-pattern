#include <iostream>
#include <memory>
#include "calculator_factory.hpp"

class Calculator {
public:
  static double get_result(double x, double y, char opt) {
    double res = 0;
    switch (opt) {
      case '+':
        res = x + y;
        break;
      case '-':
        res = x - y;
        break;
      case '*':
        res = x * y;
        break;
      case '/':
        if (y == 0) {
          std::cout << "invalid dividend!" << std::endl;
        } else {
          res = x / y;
        }
        break;
      default:
        std::cout << "invalid operator!" << std::endl;
        break;
    }
  }
};

int main() {
  double x = 0, y = 0;
  std::cout << "please enter two operands" << std::endl;
  std::cin >> x >> y;

  char opt = '+';
  std::cout << "please enter the operator(+-*/)" << std::endl;
  std::cin >> opt;

  // 简单计算器
  // double res = 0;
  // switch (opt) {
  //   case '+':
  //     res = x + y;
  //     break;
  //   case '-':
  //     res = x - y;
  //     break;
  //   case '*':
  //     res = x * y;
  //     break;
  //   case '/':
  //     if (y == 0) {
  //       std::cout << "invalid dividend!" << std::endl;
  //     } else {
  //       res = x / y;
  //     }
  //     break;
  //   default:
  //     std::cout << "invalid operator!" << std::endl;
  //     break;
  // }
  // std::cout << "res = " << res << std::endl;

  // 简单工厂模式
  std::shared_ptr<Operator> opt_obj = std::shared_ptr<Operator>
                                      (CalculatorFactory::get_calculator(opt));
  opt_obj->set_operands(x, y);
  std::cout << opt_obj->get_result() << std::endl;
  
  return 0;
}
