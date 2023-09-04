#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Definici�n de la estructura TDA para manejar cadenas de texto
typedef struct {
    char contenido[101];
} CadenaTexto;

// Prototipos de funciones
void leerCadena(CadenaTexto *cadena);
void MAY(CadenaTexto *cadena);
void MIN(CadenaTexto *cadena);
void P_LET(CadenaTexto *cadena);
void MAY_P(CadenaTexto *cadena);
void ALT(CadenaTexto *cadena);

int main() {
    CadenaTexto cadena;
    int opcion;

    printf("Introduce una cadena de texto (maximo 100 caracteres): ");
    leerCadena(&cadena);

printf("\n----------------------------------------\n");
    printf("Selecciona una opcion:\n");
    printf("1. Convertir a mayusculas\n");
    printf("2. Convertir a minusculas\n");
    printf("3. Primera letra mayuscula\n");
    printf("4. Mayuscula por cada palabra\n");
    printf("5. Alternar mayusculas y minusculas\n");
printf("\n----------------------------------------\n");
    printf("Opci�n: ");
    scanf("%d", &opcion);
    printf("\n----------------------------------------\n");

    switch (opcion) {
        case 1:
            MAY(&cadena);
            break;
        case 2:
            MIN(&cadena);
            break;
        case 3:
            P_LET(&cadena);
            break;
        case 4:
            MAY_P(&cadena);
            break;
        case 5:
            ALT(&cadena);
            break;
        default:
            printf("Opci�n no v�lida.\n");
            break;
    }

    printf("Texto modificado: %s\n", cadena.contenido);

    return 0;
}

// Funci�n para leer una cadena de texto de hasta 100 caracteres
void leerCadena(CadenaTexto *cadena) {
    scanf(" %[^\n]", cadena->contenido);
}

// Funci�n para convertir el texto a may�sculas
void MAY(CadenaTexto *cadena) {
    for (int i = 0; i < strlen(cadena->contenido); i++) {
        cadena->contenido[i] = toupper(cadena->contenido[i]);
    }
}

// Funci�n para convertir el texto a min�sculas
void MIN(CadenaTexto *cadena) {
    for (int i = 0; i < strlen(cadena->contenido); i++) {
        cadena->contenido[i] = tolower(cadena->contenido[i]);
    }
}

// Funci�n para capitalizar la primera letra de la cadena
void P_LET(CadenaTexto *cadena) {
    cadena->contenido[0] = toupper(cadena->contenido[0]);
    for (int i = 1; i < strlen(cadena->contenido); i++) {
        cadena->contenido[i] = tolower(cadena->contenido[i]);
    }
}

// Funci�n para poner en may�scula la primera letra de cada palabra
void MAY_P(CadenaTexto *cadena) {
    int i = 0;
    while (cadena->contenido[i]) {
        if (i == 0 || cadena->contenido[i - 1] == ' ') {
            cadena->contenido[i] = toupper(cadena->contenido[i]);
        } else {
            cadena->contenido[i] = tolower(cadena->contenido[i]);
        }
        i++;
    }
}

// Funci�n para alternar entre may�sculas y min�sculas
void ALT(CadenaTexto *cadena) {
    for (int i = 0; i < strlen(cadena->contenido); i++) {
    if (i % 2 == 0)
		{
			cadena->contenido[i] = toupper(cadena->contenido[i]);
		}
		else
		{
			cadena->contenido[i] = tolower(cadena->contenido[i]);
		}
      
    }
}


