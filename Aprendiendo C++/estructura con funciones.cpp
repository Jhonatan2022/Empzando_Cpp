#include <iostream>
#include <conio.h>

using namespace std;

struct datos
{
    int largo;
    int ancho;
    int area() { return (ancho * largo); }
};

main()
{
    datos r1;
    cout << "Largo: ";
    cin >> r1.largo;
    cout << "Ancho: ";
    cin >> r1.ancho;
    cout << "Area = " << r1.area();
    getch();
}