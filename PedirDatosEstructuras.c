/*Crear un programa que pida datos al usuario, usando estructuras y funciones gets() y puts(), puede ser tambien usando la variante scanf() y consultar fflush()
gets: Función que se encarga de leer y almacenar una cadena de caracteres introducida mediante el teclado. La variable es guardada hasta que haya un salto de línea (“\n”)
puts: Función que se encarga de mostrar (Dato de salida) una cadena de caracteres especifica.
fflush: realiza la limpieza del buffer de entrada*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Para usar gets y puts
int main(){
    struct alumno{
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;
    }a1 = {"Mathias", "Cotacachi", "Software", 18, 9.1};

    for(int i=0; i<5;i++){
        printf("Por favor ingrese los datos del %d alumno \n", i+1);

        gets(a1.nombre);
        gets(a1.direccion);
        gets(a1.carrera);
        scanf("%d", &a1.edad);
        scanf("%f", &a1.promedio);

        printf("\nLos datos ingresados son los siguientes: \n");

        puts(a1.nombre);
        puts(a1.direccion);
        puts(a1.carrera);
        printf("%d\n%f\n",a1.edad, a1.promedio);

        fflush(stdin);
    }

    return 0;
}