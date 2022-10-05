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
  	valido4:
  	cout<<"Ingresa ACK (Opciones: 2,4,8,16,32,64)"<<endl; //INGRESAR ACK
    cin>>_ack;
	if( _ack!=2 && _ack!=4 && _ack!=8 && _ack!=16 && _ack!=32 &&_ack!=64)
	{
  		cout<<"Error. Ingresa un valor de ACK valido"<<endl;
    	goto valido4;
  	}											  //CALCULAR FRECUENCIA
    _Fs=8000/_ack;
  }
  
  

}
