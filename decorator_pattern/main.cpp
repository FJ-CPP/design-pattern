#include "breakfast.hpp"
#include "ingredient.hpp"
#include <iostream>
#include <memory>
#include <exception>

int main() {
  try {
    std::shared_ptr<Breakfast> breakfast = std::make_shared<Pancake>();
    std::shared_ptr<Breakfast> add_1_ingredient = std::make_shared<Ham>(breakfast.get());
    std::shared_ptr<Breakfast> add_2_ingredient  = std::make_shared<Tenderloin>(add_1_ingredient.get());
    std::shared_ptr<Breakfast> add_3_ingredient  = std::make_shared<PorkFloss>(add_2_ingredient.get());
    std::shared_ptr<Breakfast> add_4_ingredient  = std::make_shared<PorkFloss>(add_3_ingredient.get());

    std::cout << "配料: \n" << add_4_ingredient->get_description() << std::endl;
    std::cout << "总价: " << add_4_ingredient->get_price() << "元" << std::endl << std::endl;

    breakfast = std::make_shared<SteamedDumpling>();
    std::cout << "配料: \n" << breakfast->get_description() << std::endl;
    std::cout << "总价: " << breakfast->get_price() << "元" << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}