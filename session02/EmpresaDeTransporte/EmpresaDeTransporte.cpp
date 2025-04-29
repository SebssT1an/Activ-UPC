#include <iostream>
#include <string>

using namespace std;

int main() {
	//definimos variables
	int codigo;
	string departamento, paradas;

	//pedimos el ingreso de el codigo
	cout << "Ingrese el codigo de salida de 4 digitos: "; cin >> codigo;

	//validamos el codigo
	if (codigo < 1000 || codigo > 3293){
		cout << "\nCodigo invalido" << endl;
		cout << "Ingrese un codigo valido: "; cin >> codigo;
	}

	//extraemos lo valores de el codigo
	int departamentoCodigo = codigo / 1000;		//lugar de destino
	int hora = (codigo / 10) % 100;		//hora de salida
	int paradasCodigo = codigo % 10;		//¿hay paradas?

	//determinamos el departamento de destino
	if (departamentoCodigo == 1){
		departamento = "Tumbes";
	} else if (departamentoCodigo == 2){
		departamento = "Arequipa";
	} else if (departamentoCodigo == 3){
		departamento = "Puno";
	} else{
		departamento = "Desconocido";
	}

	//determinamos si habra paradas
	if (paradasCodigo == 1){
		paradas = "No";
	}else if (paradasCodigo == 2){
		paradas = "Si";
	}else{
		paradas = "Desconocido";
	}

	//mostramos los resultados
	cout << "Departamento de destino: " << departamento << endl;
	cout << "Hora de salida: " << hora << endl;
	cout << "Realizan paradas: " << paradas << endl;

	return 0;
}