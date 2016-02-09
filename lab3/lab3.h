#ifndef LAB3_H
#define LAB3_H
#include <iostream>
#include "sort.h"
#include "container.h"

using namespace std;

class Base {
   public:
      Base() {};
      virtual double evaluate() = 0;
};

class Op: public Base {
   double  value;
   public:
      Op(int val) {
         value = val;
      }
      double evaluate() {
         return value;
      }
};

class Mult: public Base {
   Base* left;
   Base* right;
   public:
      Mult(Base* a, Base* b) {
         left = a;
         right = b;
      }
      double evaluate() {
         return left->evaluate() *  right-> evaluate();
      }
};

class Div: public Base {
   Base* left;
   Base* right;
   public:
      Div(Base* a, Base* b) {
         left = a;
         right = b;
      }
      double evaluate() {
         return left->evaluate() / right->evaluate();
      }
};

class Add: public Base {
   Base* left;
   Base* right;
   public:
      Add(Base* a, Base* b) {
         left = a;
         right = b;
      }
      double evaluate() {
         return left->evaluate() + right->evaluate();
      }
};

class Sub: public Base {
   Base* left;
   Base* right;
   public:
      Sub(Base* a, Base* b) {
         left = a;
         right = b;
      }
      double evaluate() {
         return left->evaluate() - right->evaluate();
      }
};

class Sqr: public Base {
   Base* single;
   public:
      Sqr(Base* a) {
         single = a; 
      }
      double evaluate() {
         return single->evaluate() * single->evaluate();
      }
};








#endif

