#include <iostream>
#include <stdlib.h>
#include "frecuency_h.hpp"
using namespace std;


Frecuency::Frecuency(int num,int resolution,float lectura, float lectura_v, int canal, int numeroCanales, int opcion, int ack, double Fs):
ADC(num,resolution, lectura, lectura_v, canal,numeroCanales, opcion,ack, Fs){}
Frecuency::Frecuency():ADC(){}

//MÉTODO DE LA SUBCLASE
void Frecuency::Captura(){
  ADC::Captura();
  if(_opcion==2)
  {
  	cout<<"Ingresa ACK (Opciones: 2,4,8,16,32,64)"<<endl; //INGRESAR ACK
    cin>>_ack;											  //CALCULAR FRECUENCIA
    _Fs=8000/_ack;
  }

}
