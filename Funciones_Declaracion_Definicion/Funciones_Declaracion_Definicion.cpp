// Funciones_Declaracion_Definicion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// DECLARACIÓN DE UNA FUNCIÓN...

int suma(int a, int b);

// DECLARACIÓN DE UNA FUNCIÓN CON VALORES PREDETERMINADOS...

double calcularPromedio(double a, double b = 0.0);

// DECLARACIÓN DE AQUELLAS FUNCIONES EXTRAS A MODO DE EJEMPLO...

int variable; // VARIABLE 1...

string texto; // VARIABLE 2...

char texto1[100]; // VARIABLE 3...

float first; // PRIMER VALOR CORRESPONDIENTE A LA VARIABLE 1...

float second; // SEGUNDO VALOR CORRESPONDIENTE A LA VARIABLE 2...

float resultado; // RESULTADO FINAL COMO VARIABLE A MODO DE RESPUESTA...

// FUNCIÓN PRINCIPAL A EJECUTAR...

int main()
{

    // FUNCIÓN 1: SUMAR 2 NÚMEROS CUALQUIERA...

    int numero1 = 10;
    int numero2 = 20;

    int resultado = suma(numero1, numero2);

    cout << "LA SUMA TOTAL ES: " << resultado << endl;

    // FUNCIÓN 2: CALCULAR EL PROMEDIO FINAL DE 2 CALIFICACIONES...

    double calificacion1 = 85.5;
    double calificacion2 = 92.0;

    double promedio = calcularPromedio(calificacion1, calificacion2);

    cout << "EL PROMEDIO FINAL DE ESTAS 2 CALIFICACIONES ES: " << promedio << endl;

    // FUNCIÓN 3.1: CAPTURAR Y DEVOLVER LOS MISMOS DATOS...

    /* cout << "INTRODUZCA UN NUMERO: " << endl; // PUEDE CAMBIAR EL TEXTO...

    cin >> variable;

    cout << "EL NUMERO INGRESADO FUE: " << variable << endl; */

    // FUNCIÓN 3.2: CAPTURAR TEXTO EN UNA VARIABLE "string"...

    /* cout << "INTRODUZCA CUALQUIER TEXTO: " << endl;

    getline(cin, texto);

    cout << "RESULTADO FINAL: " << texto << endl; */

    // FUNCIÓN 3.3: GUARDANDO TEXTO EN UN "char" CON UN "cin"...

    /* cout << "INTRODUZCA CUALQUIER TEXTO: " << endl;

    cin.getline(texto1, 100);

    cout << "RESULTADO FINAL: " << texto1 << endl; */

    // FUNCIÓN 4: Programa que solicita 2 números y los suma...

    cout << "***** A CONTINUACION SUMAREMOS 2 NUMEROS! *****\nINGRESA UN NUMERO: " << endl;

    cin >> first;

    cout << "INGRESE OTRO NUMERO: " << endl;

    cin >> second;

    resultado = first + second;

    cout << "EL RESULTADO FINAL ES: " << resultado << endl;

    return 0;
}

// DEFINICIÓN DE LA FUNCIÓN 1...

int suma(int a, int b)
{
    return a + b;
}

// DEFINICIÓN DE LA FUNCIÓN 2...

double calcularPromedio(double a, double b)
{
    return (a + b) / 2;
}

/* 

Cout es la función que utilizamos en C++ para imprimir por consola cualquier tipo de texto o datos contenidos dentro de una variable, 
Cin se utiliza para capturar los datos que el usuario escriba en nuestro programa y así almacenarlo en alguna variable, 
su implementación básica es simple pero existen algunas técnicas en su uso a nivel intermedio que puede tomar un poco más de tiempo entender, 
pero que son indispensables para desarrollar códigos con mayor eficiencia.

No hay mejor forma de aprender el uso de estas funciones que con ayuda de ejemplos, 
a continuación enlisto una serie de ejemplos de programas de nivel básico e intermedio combinando los usos de estas dos funciones.

*/



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
