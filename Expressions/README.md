# Expresiones en C++ 🇪🇸

Las **expresiones en C++** son combinaciones de variables, constantes, operadores y funciones que se evalúan
para producir un valor. Son fundamentales en la programación, ya que te permiten realizar cálculos, manipular datos y controlar
la lógica del programa. A continuación, se presenta una descripción más detallada de lo que son y cómo se utilizan.

## Componentes de una expresión

1. **Variables**: Son nombres que representan valores en la memoria. Por ejemplo, `x`, `y`, `resultado`.

2. **Constantes**: Son valores fijos que no cambian durante la ejecución del programa. Ejemplo: `5`, `3.14`, `"Hola"`.

3. **Operadores**: Son símbolos que realizan operaciones sobre las variables y constantes. Los operadores más comunes son:
   - **Aritméticos**: `+`, `-`, `*`, `/`, `%`
   - **Relacionales**: `==`, `!=`, `<`, `>`, `<=`, `>=`
   - **Lógicos**: `&&`, `||`, `!`
   - **Bit a bit**: `&`, `|`, `^`, `<<`, `>>`

4. **Funciones**: Son bloques de código que realizan tareas específicas y pueden devolver un valor. Por ejemplo, `sqrt(x)` para calcular la raíz cuadrada de `x`.

## Tipos de expresiones

1. **Expresiones aritméticas**: Realizan cálculos matemáticos. Ejemplo:
   ```cpp
   int suma = a + b; // Suma de a y b
   ```
2. **Expresiones relacionales**: Evalúan condiciones y devuelven un valor booleano (true o false). Ejemplo:
   ```cpp
   bool esMayor = (a > b); // Verifica si a es mayor que b
   ```
3. **Expresiones lógicas**: Combinan varias condiciones. Ejemplo:
   ```cpp
   bool resultado = (a > b) && (c < d); // Verifica si a es mayor que b y c es menor que d
   ```
4. **Expresiones de asignación**: Asignan un valor a una variable. Ejemplo:
   ```cpp
   x = 10; // Asigna el valor 10 a x
   ```
5. **Expresiones compuestas**: Combinan varias expresiones. Ejemplo:
   ```cpp
   int total = (a + b) * c; // Calcula el total como la suma de a y b, multiplicado por c
   ```
## Evaluación de expresiones

Cuando se evalúa una expresión, el compilador sigue un conjunto de reglas para determinar el orden en que se realizan
las operaciones. Esto incluye la precedencia de operadores (por ejemplo, multiplicación y división tienen prioridad sobre
la suma y resta) y la asociación (cómo se evalúan los operadores de igual precedencia).


# Expressions in C++

**Expressions in C++** are combinations of variables, constants, operators, and functions that are evaluated
to produce a value. They are fundamental in programming, as they allow you to perform calculations, manipulate data, and control
program logic. Below is a more detailed description of what they are and how they are used.

## Components of an expression

1. **Variables**: These are names that represent values ​​in memory. For example, `x`, `y`, `result`.

2. **Constants**: These are fixed values ​​that do not change during program execution. Example: `5`, `3.14`, `"Hello"`.

3. **Operators**: These are symbols that perform operations on variables and constants. The most common operators are:
- **Arithmetic**: `+`, `-`, `*`, `/`, `%`
- **Relational**: `==`, `!=`, `<`, `>`, `<=`, `>=`
- **Logical**: `&&`, `||`, `!`
- **Bitwise**: `&`, `|`, `^`, `<<`, `>>`

4. **Functions**: These are blocks of code that perform specific tasks and can return a value. For example, `sqrt(x)` to calculate the square root of `x`.

## Types of expressions 🇬🇧

1. **Arithmetic expressions**: These perform mathematical calculations. Example:
```cpp
int sum = a + b; // Sum of a and b
```
2. **Relational expressions**: Evaluate conditions and return a boolean value (true or false). Example:
```cpp
bool isGreater = (a > b); // Checks if a is greater than b
```
3. **Logical expressions**: Combine several conditions. Example:
```cpp
bool result = (a > b) && (c < d); // Checks if a is greater than b and c is less than d
```
4. **Assignment expressions**: Assign a value to a variable. Example:
```cpp
x = 10; // Assigns the value 10 to x
```
5. **Compound expressions**: Combine several expressions. Example:
```cpp
int total = (a + b) * c; // Computes the total as the sum of a and b, multiplied by c
```
## Evaluating Expressions

When evaluating an expression, the compiler follows a set of rules to determine the order in which operations are performed.
This includes operator precedence (for example, multiplication and division take precedence over
addition and subtraction) and association (how operators of equal precedence are evaluated).
