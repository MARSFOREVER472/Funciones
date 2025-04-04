# **_Funciones_**

## **_Declaración y definición de funciones_**

- **_La declaración y definición en funciones separadas permiten modularizar y organizar tu código de manera mucho más efectiva._**
  
- **_Las declaraciones adelantan al compilador sobre la existencia y firma de las funciones, lo que permite llamarlas antes de su definición real en el código._**

### **_Ejemplo:_**

```
#include <iostream>
 
using namespace std;
 
// Declaración de función
int sumar(int a, int b);
 
// Declaración de función con valores predeterminados
double calcularPromedio(double a, double b = 0.0);
 
int main() {
    int num1 = 10, num2 = 20;
    int resultado = sumar(num1, num2);
    cout << "La suma es: " << resultado << endl;
 
    double nota1 = 85.5, nota2 = 92.0;
    double promedio = calcularPromedio(nota1, nota2);
    cout << "El promedio es: " << promedio << endl;
 
    return 0;
}
 
// Definición de función
int sumar(int a, int b) {
    return a + b;
}
 
// Definición de función
double calcularPromedio(double a, double b) {
    return (a + b) / 2;
}
```

- **_Declaración de función: Antes del ```main()```, hemos declarado dos funciones, ```sumar()``` y ```calcularPromedio()```, indicando su firma (nombre, parámetros y tipos de retorno). La declaración permite al compilador conocer la existencia de estas funciones antes de su uso._**
  
- **_Definición de función: Después del ```main()```, hemos definido las funciones ```sumar()``` y ```calcularPromedio()```, proporcionando el cuerpo de la función y la implementación real._**
  
- **_Llamadas a funciones: Dentro del ```main()```, hemos llamado a las funciones declaradas y definidas previamente, pasando los argumentos requeridos._**
