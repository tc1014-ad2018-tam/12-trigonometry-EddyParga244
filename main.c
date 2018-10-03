/*
 * Este programa fue realizado como la tarea#12 el 2 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es dar los valores de seno, coseno, tangente
 * secante, cosecante y cotangente.
 *
 * Fecha: 2 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>
#include <math.h> //Biblioteca usada para funciones trigonometricas
#define PI 3.141592654 //Se define el valor constante de Pi.

int main(void) {

    //Declaracion de variables
    int angulo;
    double rad;

    //Al usuario se le pide el valor del angulo.
    printf("Escribe el angulo\n");
    scanf("%i", &angulo);

    //Conversion de angulos a radianes.
    rad=angulo*PI/180;

    //Se imprimen los valores de todos las funciones trigonometricas.
    printf("El seno del angulo es %lf\n", sin(rad));
    printf("El coseno del angulo es %lf\n", cos(rad));
    printf("La tangente del angulo es %lf\n", tan(rad));
    printf("La secante del angulo es %lf\n",1/cos(rad));
    printf("La cosecante del angulo es %lf\n", 1/sin(rad));
    printf("La cotangente del angulo es %lf\n", 1/tan(rad));

    return 0;
}