#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <vector>
#include "container.h"
#include "lab3.h"

using namespace std;

class Container;

class Sort {
   public:
      Sort();

      virtual void sort(Container* container) = 0;


};

class Bubble : public Sort {
   Container* a;

   public:
      Bubble(Container* a) {
         this->a = a;
      }
      void sort(Container* container) {
         for (int i = 0; i < container->vec.size(); ++i) {
               for (int j = 0; j < container->vec.size() - i - 1; ++j) {
	                     if (container->vec.at(j)->evaluate() < container->vec.at(j+1)->evaluate()) {
			                     swap(i, j);
					             }
						   }
				 }
		  };
};


class Select : public Sort {
   Container* a;

   public:
      Select(Container* a) {
         this->a = a;
      }
      void sort(Container* container) {
         int i, j, first;
         int numLength = container->vec.size();
         for (i = numLength - 1; i > 0; --i) {
              first = 0;
              for (j = 1; j <= i; ++j) {
                   if (container->vec.at(j) < container->vec.at(first)) {
                       first = j;
                   }
              }
              swap(first, i);
         }
      }
};




#endif
