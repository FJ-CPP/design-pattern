#pragma once
#include "breakfast.hpp"

class Ingredient : public Breakfast {
protected:
  Breakfast *breakfast_;
};

class Ham : public Ingredient {
public:
  Ham(Breakfast *breakfast) {
    breakfast_ = breakfast;
    description_ = "火腿, 单价1元";
    price_ = 1.0;
  }

  std::string get_description() {
    return breakfast_->get_description() + description_ + "\n";
  }

  double get_price() {
    return breakfast_->get_price() + price_;
  }
};

class Tenderloin : public Ingredient {
public:
  Tenderloin(Breakfast *breakfast) {
    breakfast_ = breakfast;
    description_ = "里脊肉, 单价2元";
    price_ = 2.0;
  }

  std::string get_description() {
    return breakfast_->get_description() + description_ + "\n";
  }

  double get_price() {
    return breakfast_->get_price() + price_;
  }
};

class PorkFloss : public Ingredient {
public:
  PorkFloss(Breakfast *breakfast) {
    breakfast_ = breakfast;
    description_ = "肉松, 单价1.5元";
    price_ = 1.5;
  }

  std::string get_description() {
    return breakfast_->get_description() + description_ + "\n";
  }

  double get_price() {
    return breakfast_->get_price() + price_;
  }
};