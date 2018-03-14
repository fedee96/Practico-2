// TP2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string>
#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_String.h"
#include "Operaciones_binarias.h"
#include "Operaciones_logicas.h"
using namespace std;


int main()
{
	Operaciones_matematicas* operaciones_matematicas = NULL;
	operaciones_matematicas = new Operaciones_matematicas();

	Operaciones_preprocesador* operaciones_preprocesador = NULL;
	operaciones_preprocesador = new Operaciones_preprocesador();

	Operaciones_String* operaciones_string = NULL;
	operaciones_string = new Operaciones_String();

	Operaciones_binarias* operaciones_binarias = NULL;
	operaciones_binarias = new Operaciones_binarias();

	Operaciones_logicas* operaciones_logicas = NULL;
	operaciones_logicas = new Operaciones_logicas();


	int respuesta = 1;
	float a = 0, b = 0, c=0;
	char var3[30];
	char var1[] = { "a" };
	char var2[] = { "b" };
	char cad[100];
	do {
		cout << "\n Menu \n";
		cout << "1.To square \n";
		cout << "2.Sum \n";
		cout << "3.Circumference \n";
		cout << "4.Max \n";
		cout << "5.Variables concatenation \n";
		cout << "6.Text printing \n";
		cout << "7.String comparison \n";
		cout << "8.Binary operations \n";
		cout << "9.Variables swaping \n";
		cout << "0.Exit \n";
		cout << "-----------------------------";
		cout << "\n Select an option \n";

		cin >> respuesta;

		switch (respuesta) {
		case 1:
			system("cls");

			cout << "Type your number \n";
			cin >> a;
			cout << operaciones_matematicas->cuadrado(a);
			break;
		case 2:
			system("cls");

			cout << "Type the first number \n";
			cin >> a;
			cout << "Type the second number \n";
			cin >> b;
			cout << operaciones_matematicas->sum(a, b);
			break;
		case 3:
			system("cls");

			double r;
			cout << "Type the radius \n";
			cin >> r;
			cout << operaciones_matematicas->aCirc(r);
			break;
		case 4:
			system("cls");

			cout << "Type the first number \n";
			cin >> a;
			cout << "Type the second number \n";
			cin >> b;
			cout << operaciones_matematicas->max(a,b);
			break;
		case 5:
		{
			system("cls");

			float d;
			float e;
			float de = 22;
			cout << concat(d, e) << endl;
			break;
		}
		case 6:
			system("cls");
		
			char cad[10];
			cout << "Type your text \n";
			cin >> cad;
			cout << cad;
			break;
		
		case 7:
		{
			system("cls");

			string strng1;
			string strng2;
			cout << "First word input." << endl;
			cin >> strng1;
			cout << "Second word imput." << endl;
			cin >> strng2;
			if (operaciones_string->same(strng1, strng2) == true) {
				cout << "Words match" << endl;
			}
			else {
				cout << "words doesn't match." << endl;
			}
			}
			break;
		
		case 8:
		{
			system("cls");

			int subm = 0;
			cout << "\n Menu \n";
			cout << "1.AND \n";
			cout << "2.OR \n";
			cout << "3.Move 2 bits to the right \n";
			cout << "4.Move 2 bits to the left \n";
			cout << "0.Exit \n";
			cout << "------------------------------";
			cout << "\n Select an option \n";
			cin >> subm;
			int x = 0;
			int y = 0;
			unsigned long z = 0;

			switch (subm) {
			case 1:
				cout << "Type the value of the first variable \n";
				cin >> x;
				cout << "type the value of the second variable \n";
				cin >> y;
				cout << operaciones_binarias->andBi(x, y);
				break;
			case 2:
				cout << "Type the value of the first variable \n";
				cin >> a;
				cout << "type the value of the second variable \n";
				cin >> b;
				cout << operaciones_binarias->orBi(x,y);
				break;
			case 3:
				cout << "Type the value of the variable \n";
				cin >> x;
				cout << operaciones_binarias->der(x);
				break;
			case 4:
				cout << "Type the value of the variable \n";
				cin >> z;
				cout << operaciones_binarias->izq(z);
				break;
			case 0:
				cout << "Thank you for using our software!";
				break;
			default:
				cout << "option didn't found";
				break;
			}
			break;
		}
		case 9:
		{
			system("cls");

			cout << "Type the value of the first variable \n";
			cin >> a;
			cout << "type the value of the second variable \n";
			cin >> b;
			cout << "Variable 'a' is: " << a << " and variable 'b' is: " << b << endl;
			SWAP(a, b);
			cout << "Now variable 'a' is: " << a << " and variable 'b' is: " << b << endl;
			break;
		}
		case 0:
			system("cls");

			cout << "Thank you for using our software!";
			break;
		default:
			system("cls");

			cout << "option didn't found";
			break;
		}

	} while (true);

	return 0;

}

