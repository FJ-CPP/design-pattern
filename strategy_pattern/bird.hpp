#pragma once
#include "fly.hpp"
#include "chrip.hpp"
#include <iostream>
#include <memory>

// class Bird {
// public: 
//   virtual void fly() {};
//   virtual void chirp() {};
// };

// class Parrot : public Bird {
// public:
//   void fly() {
//     std::cout << "I can fly slowly!" << std::endl;
//   }
//   void chirp() {
//     std::cout << "I can chirp!" << std::endl;
//   }
// };

// class Sparrow : public Bird {
// public:
//   void fly() {
//     std::cout << "I can fly fast!" << std::endl;
//   }
//   void chirp() {
//     std::cout << "I can chirp!" << std::endl;
//   }
// };

// class ToyBird : public Bird {
// public:
//   void fly() {
//     std::cout << "I can not fly!" << std::endl;
//   }
//   void chirp() {
//     std::cout << "I can not chirp!" << std::endl;
//   }
// };

class Bird {
public: 
  virtual void fly() {};
  virtual void chirp() {};

protected:
  std::shared_ptr<FlyBehavior> fly_behavior_;
  std::shared_ptr<ChripBehavior> chrip_behavior_;
};

class Parrot : public Bird {
public:
  Parrot() {
    fly_behavior_ = std::shared_ptr<FlyBehavior>(new FlySlowly);
    chrip_behavior_ = std::shared_ptr<ChripBehavior>(new ChirpAble);
  }
  void fly() {
    fly_behavior_->fly();
  }
  void chirp() {
    chrip_behavior_->chrip();
  }
};

class Sparrow : public Bird {
public:
  Sparrow() {
    fly_behavior_ = std::shared_ptr<FlyBehavior>(new FlyFast);
    chrip_behavior_ = std::shared_ptr<ChripBehavior>(new ChirpAble);
  }
  void fly() {
    fly_behavior_->fly();
  }
  void chirp() {
    chrip_behavior_->chrip();
  }
};

class ToyBird : public Bird {
public:
  ToyBird() {
    fly_behavior_ = std::shared_ptr<FlyBehavior>(new FlyDisabled);
    chrip_behavior_ = std::shared_ptr<ChripBehavior>(new ChirpDisabled);
  }
  void fly() {
    fly_behavior_->fly();
  }
  void chirp() {
    chrip_behavior_->chrip();
  }
};