/*
*DAR 2024
*
*
*/
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
    char continuar;
    //VARIABLES DEL SISTEMA
	//numero de repeticiones que se ejecuta el ejercicio de sumar.
	int repeticiones=10;
	int num1=0;
    int num2=0;
    int resta = 0;
    int mayor=0;
    int menor=0;

	//inicia el ciclo 
	do{
	cout<<"################## EJERCITADOR DE RESTAS ##################"<<endl;
	sleep(2);
	system("clear");
	//inicia el ciclo de sumas
	for(int j=1;j<=repeticiones;j++)
	{
        //establecemos el rango para los numeros
        //toma el tiempo del sistema para inicializar numeros aleatorios.
	    srand(time(NULL));
        //creamos los valores aleatorios para los numeros
        num1=1+rand()%(11 - 1);
        num2=1+rand()%(11 - 1);

        //ordenamos los numeros
        if(num1==num2){
            mayor=num1;
            menor=num2;
            }else if(num1>num2){
                mayor=num1;
                menor=num2;
                }else if(num1<num2){
                    mayor=num2;
                    menor=num1;
                }   

		//muestra los numeros individualmente durante 2 segundo.
        cout<<"Repeticion "<<j<<"\n\n";
		cout<<"mayor "<<mayor<<"\n";
        sleep(2);
        system("clear");
        cout<<"Repeticion "<<j<<"\n\n";
        cout<<"menor "<<menor<<"\n";
        sleep(2);
		system("clear");

		// resta los valores
        resta=mayor-menor;
    	//muestra el resultado de la resta
	    cout<<"Repeticion "<<j<<"\n\n";
		cout<<"resta "<<resta<<"\n";
		sleep(2);
		system("clear");
        resta=0;
	}
	cout<<"Precione cualquier tecla para realizar otro repaso o digite 0 para salir de la aplicacion: ";
	cin>>continuar;
	}while(continuar!='0');
}

