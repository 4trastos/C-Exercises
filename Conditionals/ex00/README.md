# Condicionales en C++

En C++, los condicionales son estructuras de control que permiten que el flujo de ejecución de un programa cambie
dependiendo de ciertas condiciones. El más común es el condicional `if`, pero también existen otros como `else`, `else if`, y `switch`.
Los condicionales son esenciales para la toma de decisiones dentro de un programa.

## Estructuras condicionales

1. if:
La sentencia if evalúa una condición. Si la condición es verdadera, ejecuta el bloque de código asociado.
```
if (condición)
{
    // Código a ejecutar si la condición es verdadera
}
```
Ejemplo:
```
int edad = 18;

if (edad >= 18)
{
    std::cout << "Eres mayor de edad." << std::endl;
}
```
