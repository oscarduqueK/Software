#include <iostream>
#include <fstream>
#include <string>

//Ex1: estructuras de personajes con sus estadísticas
class Player1 { //por defecto las clases son privadas

	std::string name;
	int vida;
	int ataque;
	int defensa;

public: 
	//uso de un constructor
	Player1(std::string n, int v, int a, int d)
		: name(n), vida(v), ataque(a), defensa(d) {}

	//método provisional para enseñar la información
	void ShowPers()
	{
		std::cout << "Nombre: " << name << std::endl; 
		std::cout << "Vida: " << vida << std::endl; 
		std::cout << "Ataque: " << ataque << std::endl; 
		std::cout << "Defensa: " << defensa << std::endl; 
	}

	Player1() : name(""), vida(0), ataque(0), defensa(0) {}

	void PedirDatos()
	{
		std::cout << "Nombre: " << std::endl;
		std::cin >> name;
		std::cout << "Vida: " << std::endl;
		std::cin >> vida;
		std::cout << "Ataque: " << std::endl;
		std::cin >> ataque;
		std::cout << "Defensa: " << std::endl;
		std::cin >> defensa;

		std::cout << "2o Nombre: " << name << std::endl; 
		std::cout << "2o vida: " << vida << std::endl;
		std::cout << "2o ataque 2: " << ataque << std::endl; 
		std::cout << "2o defesna 2: " << defensa << std::endl;
	}
};


void main()
{
	//Ejercicio 1
	Player1 p1("Paco", 10, 3, 2); 
	p1.ShowPers();

	//con la pedida de Datos
	Player1 p2;
	p2.PedirDatos();
}