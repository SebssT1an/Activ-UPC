#include <iostream>

using namespace std;

int main(){
	//creacion de variables
	int puntaje = 0, p1 = 0, p2 = 0, a�osDetrabajo;
	string nivelDestudios;
	//datos de a�os de laburo
	cout << "Ingrese la cantidad de a�os de trabajo: "; cin >> a�osDetrabajo;
	//datos de estudios
	cout << "\nIngrese su grado de estudios culminados en minusculas: "; cin >> nivelDestudios;
	//puntaje de los a�os de laburo
	if (a�osDetrabajo < 5){
		p1 = 5;
	} else if (a�osDetrabajo >= 5){
		p1 = 10;
	}
	//puntaje de grados de estudios
	if (nivelDestudios == "primarios"){
		p2 = 5;
	} else if (nivelDestudios == "secundarios"){
		p2 = 10;
	} else if (nivelDestudios == "universitarios"){
		p2 = 20;
	} else if (nivelDestudios == "posgrado"){
		p2 = 30;
	} else{
		//tomamos en cuenta un valor desconocido
		cerr << "valor de estudios desconocido" << endl;
	}

	//calculamos el puntaje total
	puntaje = p1 + p2;
	//puntaje total
	cout << "\nSu puntaje obtenido es: " << puntaje;
	return 0;
}