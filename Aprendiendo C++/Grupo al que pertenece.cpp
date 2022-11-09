#include <iostream>
 
using namespace std;

string nombre;
int edad;
 
int main(int argc, char const *argv[]){

    cout<<"Digite el nombre de la persona: ";
    cin>>nombre;
 
    cout<<"Digite la edad de la persona: ";
    cin>>edad;
 
    if (edad>=0 && edad<=6) {
    	cout<<nombre +"\tEs un infante."<<endl;
	}
 
	if (edad>=7 && edad<=12)	{
		cout<<nombre + "\tEs un joven."<<endl;
	}

	if (edad>=13 && edad<=18)	{
		cout<<nombre + "\tPertenece a los adolecentes."<<endl;
	}

    if (edad>=19 && edad<=30) {
        cout<<nombre + "\tLargo de aca anciano. >:y"<<endl;
    }

    else{
        cout<<nombre + "\tEste ya esta muerto"<<endl;
        }

	system("pause");
    return EXIT_SUCCESS;
}