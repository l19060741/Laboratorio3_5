#include <string>
#include <stdlib.h>
#include <math.h>
#include "adc_h.hpp"

ADC::ADC(int num,int resolution,float lectura, float lectura_v, int canal, int numeroCanales, int opcion, int ack, double Fs){

	_num=num;
	_resolution=resolution;
	_lectura=lectura;
	_lectura_v=lectura_v;
	_canal=canal;
	_numeroCanales=numeroCanales;
	_opcion=opcion;
	_ack=ack;
	_Fs=Fs;	
}


ADC::ADC(){
	_canal=0;
	_resolution=0;
	_Fs=0;
}


//M�TODOS

//CAPTURAR LOS DATOS
void ADC::Captura(){
	
	cout<<endl<<"** Introduce Datos **"<<endl;
	val1:
	cout<<"Dame la resolucion (Opciones: 8, 10, 12): ";
	cin>> _resolution;
	if(_resolution!=8&&_resolution!=10&&_resolution!=12)
	{
		cout<<"Error. Ingresa una resolucion valida."<<endl;
		goto val1;
	}
	
	val3:
	cout<<"Opciones para fruencia: "<<endl;
	cout<<"1.Ingresarla manualmente"<<endl;
	cout<<"2.Calcularla mediante ack"<<endl;
	cin>> _opcion;
	if(_opcion!=1&&_opcion!=2)
	{
		cout<<"Error. Ingresa una opcion valida."<<endl;
		goto val3;
	}
	if(_opcion==1)
	{
		cout<<"Dame la frecuencia: ";
		cin>> _Fs;		
	}
	cout<<"Dame la lectura en volts: ";
	cin>> _lectura_v;	
	_lectura=_lectura_v * (pow(2,_resolution))/3.3;	 //CONVERSI�N A-D
}

//MOSTRAR LOS DATOS
void ADC::MostrarDatos(){
	std::cout<<"\n"<<"*** Imprimiendo Datos *** "<<std::endl;
	std::cout<<"Resolucion: "<<_resolution<<std::endl;
	std::cout<<"Fs: "<<_Fs<<std::endl;
	std::cout<<"Lectura en volts: "<<_lectura_v<<std::endl;
	std::cout<<"Lectura: "<<_lectura<<std::endl;
}



