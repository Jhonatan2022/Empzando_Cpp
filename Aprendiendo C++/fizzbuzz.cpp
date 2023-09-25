#include <iostream>

using namespace std;

int i;

int main(int argc, char const *argv[])
{
    
    // Imprime los numeros del 1 al 100
    for (i = 1; i <= 100; i++){

        // Si el numero es divisible entre 3 y 5 imprime FizzBuzz
        if (i % 3 == 0 && i % 5 == 0){

            cout << i << "  FizzBuzz" << endl;
        }

        // Si el numero es divisible entre 3 imprime Fizz
        else if (i % 3 == 0){

            cout << i <<  "  Fizz" << endl;
        }

        // Si el numero es divisible entre 5 imprime Buzz
        else if (i % 5 == 0){

            cout << i << "  Buzz" << endl;
        }

        // Si no es divisible entre 3 o 5 imprime el numero
        else{

            cout << i << endl;
        }
    }
}