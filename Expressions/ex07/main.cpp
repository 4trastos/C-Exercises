#include <iostream>
#include <cmath>  // Para usar la función sqrt()

using namespace std;

int main()
{
    float a, b, c;
    float discriminant, root1, root2;

    // Solicitar al usuario los valores de a, b y c
    cout << "Ingresa el coeficiente a (a ≠ 0): "; cin >> a;
    cout << "Ingresa el coeficiente b: "; cin >> b;
    cout << "Ingresa el coeficiente c: "; cin >> c;

    // Calcular el discriminante (b^2 - 4ac)
    discriminant = b * b - 4 * a * c;

    // Comprobar el valor del discriminante y calcular las soluciones
    if (discriminant > 0)
    {
        // Dos soluciones reales y distintas
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Las soluciones son reales y diferentes." << endl;
        cout << "Solución 1: " << root1 << endl;
        cout << "Solución 2: " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        // Una solución real
        root1 = -b / (2 * a);
        cout << "Las soluciones son reales e iguales." << endl;
        cout << "Solución única: " << root1 << endl;
    }
    else
    {
        // Soluciones complejas
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Las soluciones son complejas y diferentes." << endl;
        cout << "Solución 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Solución 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
