# Condicionales en C++

En C++, los condicionales son estructuras de control que permiten que el flujo de ejecución de un programa cambie
dependiendo de ciertas condiciones. El más común es el condicional `if`, pero también existen otros como `else`, `else if`, y `switch`.
Los condicionales son esenciales para la toma de decisiones dentro de un programa.

## Estructuras condicionales

# 1. `if'

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

# 2. 'else'

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

# 3. `else if'

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

# 4. `switch`
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
# Conclusión:
Los condicionales son una herramienta fundamental en C++ que permiten a los programas tomar decisiones basadas en ciertas condiciones. Al comprender y utilizar correctamente estructuras como if, else, else if, y switch, se pueden controlar los flujos de ejecución de manera efectiva y lógica en cualquier programa.





