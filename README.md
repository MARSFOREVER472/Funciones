# **_Funciones_**

## **_Declaración y definición de funciones_**

- **_La declaración y definición separadas permiten modularizar y organizar tu código de manera más efectiva._**
  
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

Declar
