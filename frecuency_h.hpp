#ifndef FRECUENCY_H
#define FRECUENCY_H
#include<iostream>
#include "adc_h.hpp"
using namespace std;

//SUBCLASE DE ADC
class Frecuency: public ADC{
  private:

  public:
    Frecuency(int, int, float, float, int, int, int,int,double);
    Frecuency();
   void Captura();
};
#endif
