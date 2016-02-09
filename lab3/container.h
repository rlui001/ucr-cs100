#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
#include "sort.h"
#include "lab3.h"
#include <vector>
using namespace std;

class Sort;


class Container {
   protected:
      Sort* sort_function;

   public:
      Container() : sort_function(NUM){};
      Container(Sort* function) : sort_function(function){};

      void set_sort_function(Sort* sort_function);

      virtual void add_element(Base* element) = 0;
      virtual void print() = 0;
      virtual void sort() = 0;
      virtual void swap(int i, int j) = 0;
      virtual Base* at(int i) = 0;
      virtual int size() = 0;
     
};

class vec_Container: public Container {
   vector<Base*> vec;

   public:
      void add_element(Base* element) {
         vec.push_back(element);
      }
      void print() {
         cout << "Outputting all values: " << endl;
         for (int i = 0; i < vec.size(); ++i) {
              cout << vec.at(i)->evaluate() << ' ';
         } 
         cout << endl;
      }
      void sort() {
         sort_function->sort(this); 
      }
      void swap(int i, int j) {
         Base* temp = vec.at(i);
         vec.at(i) = vec.at(j);
         vec.at(j) = temp;
      }
      Base* at(int i) {
        return vec.at(i); 
      }

      int size() {
         return vec.size();
      }
};



class list_Container: public Container {
   list<Base* > vec;

   public:
      void add_element(Base* element) {
         vec.push_back(element);
      }
      void print() {
         cout << "Outputting all values: " << endl;
         for (list<Base*>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
              cout << itr->evaluate() << ' ';
              }
         cout << endl;

      }
      void sort() {
         sort_function->sort(this);
      }
      void swap(int i, int j) {
         list<Base*>::iterator temp;
      }


         










#endif
