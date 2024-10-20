# Condicionales en C++ 🇪🇸

En C++, los condicionales son estructuras de control que permiten que el flujo de ejecución de un programa cambie
dependiendo de ciertas condiciones. El más común es el condicional `if`, pero también existen otros como `else`, `else if`, y `switch`.
Los condicionales son esenciales para la toma de decisiones dentro de un programa.

## Estructuras condicionales

## 1. `if`

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

## 2. 'else`

La sentencia else se utiliza para especificar un bloque de código que se ejecutará si la condición del if es falsa.
```
if (condición)
{
    // Código si la condición es verdadera
}
else
{
    // Código si la condición es falsa
}
```
Ejemplo:
```
int edad = 16;

if (edad >= 18)
{
    std::cout << "Eres mayor de edad." << std::endl;
}
else
{
    std::cout << "Eres menor de edad." << std::endl;
}
```

## 3. `else if`

La sentencia else if permite verificar varias condiciones en secuencia. Si una de las condiciones es verdadera, el bloque
de código correspondiente se ejecutará y las demás condiciones serán ignoradas.
```
if (condición1)
{
    // Código si condición1 es verdadera
}
else if (condición2)
{
    // Código si condición2 es verdadera
}
else
{
    // Código si ninguna de las condiciones anteriores es verdadera
}
```
Ejemplo:
```
int nota = 75;

if (nota >= 90) {
    std::cout << "Sobresaliente." << std::endl;
} else if (nota >= 70) {
    std::cout << "Notable." << std::endl;
} else {
    std::cout << "Aprobado." << std::endl;
}
```

## 4. `switch`
La estructura switch permite seleccionar entre varias opciones basadas en el valor de una expresión. Es especialmente útil cuando se tiene un número finito de opciones que se desean evaluar.
```
switch (expresión) {
    case valor1:
        // Código si expresión es igual a valor1
        break;
    case valor2:
        // Código si expresión es igual a valor2
        break;
    default:
        // Código si expresión no coincide con ningún valor
}
```
Ejemplo:
```
int dia = 3;

switch (dia) {
    case 1:
        std::cout << "Lunes" << std::endl;
        break;
    case 2:
        std::cout << "Martes" << std::endl;
        break;
    case 3:
        std::cout << "Miércoles" << std::endl;
        break;
    default:
        std::cout << "Día no válido" << std::endl;
}
```
## Conclusión:
Los condicionales son una herramienta fundamental en C++ que permiten a los programas tomar decisiones basadas en ciertas condiciones. Al comprender y utilizar correctamente estructuras como if, else, else if, y switch, se pueden controlar los flujos de ejecución de manera efectiva y lógica en cualquier programa.


# Conditionals in C++ 🇬🇧

In C++, conditionals are control structures that allow the execution flow of a program to change
depending on certain conditions. The most common is the `if` conditional, but there are also others such as `else`, `else if`, and `switch`.
Conditionals are essential for decision making within a program.

## Conditional Structures

## 1. `if`

The if statement evaluates a condition. If the condition is true, it executes the associated code block.
```
if (condition)
{
// Code to execute if the condition is true
}
```
Example:
```
int age = 18;

if (age >= 18)
{
std::cout << "You are of legal age." << std::endl;
}
```

## 2. 'else`

The else statement is used to specify a block of code that will be executed if the if condition is false.
```
if (condition)
{
// Code if condition is true
}
else
{
// Code if condition is false
}
```
Example:
```
int age = 16;

if (age >= 18)
{
std::cout << "You are of legal age." << std::endl;
}
else
{
std::cout << "You are a minor." << std::endl;
}
```

## 3. `else if`

The else if statement allows you to check multiple conditions in sequence. If one of the conditions is true, the corresponding block of code will be executed and the other conditions will be ignored.
```
if (condition1)
{
// Code if condition1 is true
}
else if (condition2)
{
// Code if condition2 is true
}
else
{
// Code if none of the above conditions are true
}
```
Example:
```
int grade = 75;

if (grade >= 90) {
std::cout << "Outstanding." << std::endl;
} else if (grade >= 70) {
std::cout << "Notable." << std::endl;
} else {
std::cout << "Approved." << std::endl;
}
```

## 4. `switch`
The switch structure allows you to select between several options based on the value of an expression. It is especially useful when you have a finite number of options that you want to evaluate.
``` switch (expression) { case value1: // Code if expression equals value1 break;
 case value2: // Code if expression equals value2 break;
 default: // Code if expression does not match any value } ``` Example: ``` int day = 3;

switch (day) { case 1: std::cout << "Monday" << std::endl;
 break;
 case 2: std::cout << "Tuesday" << std::endl;
 break;
 case 3: std::cout << "Wednesday" << std::endl;
 break;
 default: std::cout << "Invalid day" << std::endl;
}
```
## Conclusion:
Conditionals are a fundamental tool in C++ that allow programs to make decisions based on certain conditions. By properly understanding and using structures such as if, else, else if, and switch, one can effectively and logically control execution flows in any program.
