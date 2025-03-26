// Funciones_Declaracion_Definicion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

// DECLARACIÓN DE UNA FUNCIÓN...

int suma(int a, int b);

// DECLARACIÓN DE UNA FUNCIÓN CON VALORES PREDETERMINADOS...

double calcularPromedio(double a, double b = 0.0);

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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
