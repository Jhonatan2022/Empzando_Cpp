#include <iostream>
#include <conio.h>

using namespace std;

class rectangulo
{
private:
    int largo;
    int ancho;

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

    cout << "Largo: ";
    cin >> l;
    cout << "Ancho: ";
    cin >> a;

    r1.asignar(l, a);

    cout << "Area = " << r1.area();
    
    getch();
}