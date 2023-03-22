#include <iostream>
#include <conio.h>

using namespace std;

class rectangulo
{
private:
    int largo;
    int ancho;

// Función miembro
public:
    void asignar(int L, int A)
    {
        largo = L;
        ancho = A;
    }
    int area() { return (ancho * largo); }
};

main()
{
    int l, a;
    rectangulo r1;

    // Pedimos los datos
    cout << "Largo: ";
    cin >> l;

    cout << "Ancho: ";
    cin >> a;
    
    r1.asignar(l, a);

    // Mostramos el resultado
    cout << "Area = " << r1.area();
    
    getch();
}