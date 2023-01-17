#pragma once

class Operator {
public:
  virtual double get_result() {};

  virtual void set_operands(double x, double y) {};
};

class OperatorAdd : public Operator {
public:
  double get_result() override {
    return x_ + y_;
  }

  void set_operands(double x, double y) {
    x_ = x;
    y_ = y;
  }
private:
  double x_;
  double y_;
};

class OperatorSub : public Operator {
public:
  double get_result() override {
    return x_ - y_;
  }

  void set_operands(double x, double y) {
    x_ = x;
    y_ = y;
  }
private:
  double x_;
  double y_;
};

class OperatorMul : public Operator {
public:
  double get_result() override {
    return x_ * y_;
  }

  void set_operands(double x, double y) {
    x_ = x;
    y_ = y;
  }
private:
  double x_;
  double y_;
};

class OperatorDiv : public Operator {
public:
  double get_result() override {
    return x_ / y_;
  }

  void set_operands(double x, double y) {
    x_ = x;
    y_ = y;
  }
private:
  double x_;
  double y_;
};