
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

struct yamaha{
int code;
char nombre[30];
char tipo[30];
float price;
} inf[20];

int menu;
char buscar[30];
int reg, i, j, k;



int main (){	
int total=0;
int l=0;
FILE *pd; pd=fopen("productos.txt", "a+b");
printf("Gestor de Tiendas\n\n");

	while(menu!=6){
		printf("\nMenu\n");
		printf("1. Insertar productos\n"); //funcional
		printf("2. Modificar productos\n"); //no funcional
		printf("3. Eliminar productos\n"); //no funcionakl
		printf("4. Mostrar productos\n"); //funcional
		printf("5. Buscar productos\n"); //no funcional
		printf("6. Salir\n"); //funcional
		printf("Ingrese una opcion:");scanf("%d", &menu);
		printf("\n\n");
	
switch(menu){	
	case 1:{ //Insertar 
		printf("1. Insertar productos\n\n");
		printf("\nProductos a registrar:"); scanf("%d", &reg);
		for (int i=0; i<reg; i++){ 
		printf("\n\nRegistro de productos %d\n", i+1);
	printf("Codigo del instrumento: "); scanf("%d", &inf[i].code);
	printf("Nomnbre del instrumento: "); scanf("%s", &inf[i].nombre);
	printf("Tipo de instrumento: "); scanf("%s", &inf[i].tipo);
	printf("precio del instrumento:"); scanf("%f", &inf[i].price);
	printf("Registro completado");
	total++;
	fprintf(pd,"codigo de producto:%d	nombre:%s	tipo:%s	precio:%f \n", inf[i].code, inf[i].nombre, inf[i].tipo, inf[i].price);
								}
	break;}
total = i;
/*
case 2:{ //Modificar 
	printf("2. Modificar productos\n\n");
	
	break;}

case 3:{	//Eliminar
	printf("3. Eliminar productos\n\n");
	
	break;}
*/	
case 4:{	//Mostrar
	printf("4. Leer el archivo\n\n");
while (feof(pd)==0){  //feof es para imprimir todo un documento
	printf("%c", fgetc(pd));
				}
printf("\nEl archivo se ha extraido con exito\n");
	break;}
	
case 5:{	//Buscar
		printf("5. Buscar productos\n\n");
	printf("Ingrese el instrumento que desee buscar:");
	scanf("%s", buscar);

		if (strcmp(inf[i].nombre, buscar)){
		printf("Codigo: %d \n ", inf[total].code); 
		printf("Instrumento: %s \n", inf[i].nombre); 
		printf("Tipo : %s \n", inf[i].tipo); 
		printf("Precio: %f \n",inf[i].price); 
	}
else{
	printf("El producto no se encuentra disponible\n");
		}
		
		break;}
	
	
	
return 0;
		} //del switch
				} //del while


fclose(pd);
return 0;
}
