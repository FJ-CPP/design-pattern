#pragma once
#include <string>

class Breakfast {
public:
  virtual std::string get_description() = 0;
  virtual double get_price() = 0;

protected:
  std::string description_;
  double price_;
};

class ShreddedCake : public Breakfast {
public:
  ShreddedCake() {
    description_ = "手抓饼, 单价3元"; 
    price_ = 3.0;
  } 

  std::string get_description() {
    return description_ + "\n";
  }

  double get_price() {
    return price_;
  }

};

class Pancake : public Breakfast {
public:
  Pancake() {
    description_ = "煎饼, 单价2元"; 
    price_ = 2.0;
  } 

  std::string get_description() {
    return description_ + "\n";
  }

  double get_price() {
    return price_;
  }

};

class SteamedDumpling : public Breakfast {
public:
  SteamedDumpling() {
    description_ = "汤包, 单价7元"; 
    price_ = 7.0;
  } 

  std::string get_description() {
    return description_ + "\n";
  }

  double get_price() {
    return price_;
  }

};