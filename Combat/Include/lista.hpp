#pragma once
#include <iostream>
#include <cstdint>
template<typename type>

class list
  {
    public:
    int size1 = 0;
      struct element
      {
       type data;
        element *next;
        element()
        {
         next = 0;
         }
       };
     element *first;
     void pushBack(type input)
      {
        element *NewElement = new element;
        NewElement -> data = input;
        if(first == 0)
        {
          first = NewElement;
        }
        else
        {
          element *temppoint = first;

          while(temppoint -> next)
          {

            temppoint = temppoint -> next;
          }
          temppoint -> next = NewElement;
          NewElement -> next = 0;
        }

      }
     void print()
     {
        element *temp = first;
        while(temp)
        {
          std::cout<<temp -> data;
          temp = temp -> next;
        }

     }
     int size()
     {
        element *countp = first;
        while(countp)
        {
          size1++;
          countp = countp -> next;
        }
        std::cout<<std::endl;
        std::cout <<size1<< std::endl;
        return size1;
     }

     list()
     {
      first = 0;
     };
  };
