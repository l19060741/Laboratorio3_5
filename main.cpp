/*********************************************************************************
//LAB 3.4. PARADIGMA ORIENTADO A OBJETOS.
//Anahí González Holguín 19060741

// FileName:        main.cpp
// Program version: Dev-C++ 5.11
// Company:         TECNM - ITCH
// Description:     LAB3.4_ARQ_PROG_HW.
// Authors:         ANAHI GONZALEZ HOLGUIN
// Updated:         04/10/2022
*/
#include <iostream>
#include <string>
#include <stdlib.h>

#include "adc_h.hpp"
#include "frecuency_h.hpp"

using namespace std;
//MAIN
int main(int argc, char** argv) {
	
	//PORTADA
	cout<<"ARQUITECTURA DE PROGRAMACIÓN PARA HARDWARE"<<endl;
	cout<<"LABORATORIO 3"<<endl;
	cout<<"ANAHI GONZALEZ HOLGUIN"<<endl;
	cout<<"CONFIGURACION DEL ADC"<<endl;
	
	//INICIO DEL PROGRAMA
	
	int i;	//Iterador
	
	//Ingresar numero de canales
	int numeroCanales; 
	val2:
	cout<<"Introduzca el numero de canales (Opciones: 1-32)"<<endl;
    cin>>numeroCanales;
    if(numeroCanales>32||numeroCanales<1)
	{
        cout<<"Error. Ingresa un numero de canales valido"<<std::endl;
      	goto val2;
    }
    
    //Se crean los objetos de la subclase con base al numero de canales
    cout<<"Se activaron "<<numeroCanales<<" canales"<<endl;	
	Frecuency *adc1 = new Frecuency[numeroCanales];
	
	//CAPTURA DE LOS DATOS
	for (i=0;i<numeroCanales;i++)
	{
		cout<<"Canal numero "<<i+1<<endl;
		adc1[i].Captura();
	}
	  
	//SALIDA DE LOS DATOS  
	  for (int i=0;i<numeroCanales;i++)
	{	
		cout<<"Canal numero "<<i+1<<endl;
		adc1[i].MostrarDatos();
    }
	
	//Se libera la memoria reservada para adc1
	delete [] adc1;	
	
	return 0;
}

