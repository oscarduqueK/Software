#include <iostream>
#include <fstream>
#include <string>

//ex1
void File1()
{
	std::ifstream file1("extres.txt"); //asi se abren los archivos con un stream para leerlos

	if (!file1) 
	{
		std::cout << "Error" << std::endl;
	}

	std::string name;
	int vida, ataque, defensa;

	//Para leer cosas se usa >> esto separa los elementos de los espacios o los saltos de línea
	file1 >> name >> vida >> ataque >> defensa;
	file1.close();

	std::cout << name <<  vida << ataque << defensa << std::endl; 
}

void File2()
{
	std::ifstream file2("extres1.txt");
	if (!file2)
	{
		std::cout << "Error" << std::endl; 
	}

	std::string name;
	int vida, ataque, defensa;

	//Lectura del archivo 
	getline(file2, name); //GetLine pilla toda la línea, en cambio los operadores >> pillan elemento a elemento, de forma que para pillar frases
	file2 >> vida; //Las pillo con el getLine pero para pillar numeros o elementos sueltos mejor recoger con los operadores
	file2 >> ataque;
	file2 >> defensa;
	
	std::cout << name << vida << ataque << defensa << std::endl; 
}

void main()
{
	//File1();
	File2();
}