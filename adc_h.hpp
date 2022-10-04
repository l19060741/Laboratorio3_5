#ifndef ADC_H
#define ADC_H
#include<iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Clase madre ADC
class ADC{
	private:
  
		int _num;		
		int _resolution; 
		float _lectura;	// Lectura ya hecha la conversión
		float _lectura_v; //Lectura de entrada en Volts
		
	public:
		int _canal;
		int _numeroCanales;
		int _opcion; //variable para la seleccion de la frecuencia
		int _ack;
		double _Fs;

		ADC(int, int, float, float, int, int, int,int,double);	// CONSTRUCTOR1
		ADC();										// CONSTRUCTOR2
				
		//METODOS
		
		void MostrarDatos();	
		virtual	void Captura();	//POLIMORFISMO		
};
#endif
