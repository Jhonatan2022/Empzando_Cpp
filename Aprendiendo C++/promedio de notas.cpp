#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctype.h>

using namespace std;

void calculonotas(int p1, int p2, int p3, int p4, int ep, int ef, float *promp, float *promf);

int main(int argc, char const *argv[])
{
    int p1, p2, p3, p4;
    float ep, ef, promp, promf;
    char rpt;

    for (;;)
    {
        cout << "\nNota 1: ";
        cin >> p1;
        cout << "\nNota 2: ";
        cin >> p2;
        cout << "\nNota 3: ";
        cin >> p3;
        cout << "\nNota 4: ";
        cin >> p4;
        cout << "\nIngrese su parcial: ";
        cin >> ep;
        cout << "\nIngrese su final: ";
        cin >> ef;

        calculonotas(p1, p2, p3, p4, ep, ef, &promp, &promf);
        cout << "\nEl promedio de practicas es: " << promp;
        cout << "\nEl promedio final es: " << promf;
        cout << "\nDesea Salir: [s] o [n]? ";
        cin >> rpt;
        rpt = toupper(rpt);
        if (rpt == 'S')
            break;
    }
}

void calculonotas(int p1, int p2, int p3, int p4, int ep, int ef, float *promp, float *promf)
{
    int n, m, menor;
    if (p3 > p4)
        n = p4;
    else
        n = p3;
    if (n > p2)
        m = p2;
    else
        m = n;
    if (m > p1)
        menor = p1;
    else
        menor = m;
    *promp = (p1 + p2 + p3 + p4 - menor) / 3.0;
    *promf = (*promp + ep + 2 * ef) / 4.0;
}