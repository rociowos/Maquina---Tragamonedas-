// Alumnos: Rocio Woscoff, Daniel Cordoba
// Fecha de entrega: 29/6
// Primer año
// Profesor: Ricardo Coppo 

#include <iostream>
#include <ctime>
#include <stdio.h>
#include <Windows.h>
using namespace std;

void tragamonedas(int a, int b, int c) // funcion void para los encabezados (dibujo de los numeros de los slots) 
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 5);
	switch (a)
	{
	case 0:
	{
		cout << " 000000" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << " 000000" << endl;
		cout << " " << endl;
	}
	break;
	case 1:
	{
		cout << "  111    " << endl;
		cout << " 1111    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << " 111111  " << endl;
		cout << " " << endl;
	}
	break;
	case 2:

	{
		cout << "  22222  " << endl;
		cout << " 22   22 " << endl;
		cout << "     22  " << endl;
		cout << "   22    " << endl;
		cout << "  22      " << endl;
		cout << " 22      " << endl;
		cout << " 2222222 " << endl;
		cout << " " << endl;
	}
	break;
	case 3:
	{
		cout << "  333333  " << endl;
		cout << "      33 " << endl;
		cout << "      33 " << endl;
		cout << "   33333 " << endl;
		cout << "      33  " << endl;
		cout << "      33 " << endl;
		cout << "  333333 " << endl;
		cout << " " << endl;
	}
	break;
	case 4:
	{
		cout << "44    44  " << endl;
		cout << "44    44 " << endl;
		cout << "44    44 " << endl;
		cout << "44444444 " << endl;
		cout << "      44  " << endl;
		cout << "      44 " << endl;
		cout << "      44 " << endl;
		cout << " " << endl;
	}
	break;
	case 5:
	{
		cout << "  55555555   " << endl;
		cout << " 55          " << endl;
		cout << "  555555     " << endl;
		cout << "        55   " << endl;
		cout << "         55  " << endl;
		cout << " 55      55   " << endl;
		cout << "  55555555   " << endl;
		cout << " " << endl;
	}
	break;
	case 6:
	{
		cout << "   66666      " << endl;
		cout << " 66           " << endl;
		cout << "66            " << endl;
		cout << "66 6666666    " << endl;
		cout << "66        66  " << endl;
		cout << " 66      66   " << endl;
		cout << "   666666     " << endl;
		cout << " " << endl;
	}
	break;
	case 7:
	{
		cout << "   777777777     " << endl;
		cout << "         77      " << endl;
		cout << "        77       " << endl;
		cout << "       77        " << endl;
		cout << "      77         " << endl;
		cout << "     77          " << endl;
		cout << "    77           " << endl;
		cout << " " << endl;
	}
	break;
	case 8:
	{
		cout << "     8888      " << endl;
		cout << "  88     88    " << endl;
		cout << "  88     88    " << endl;
		cout << "    88888      " << endl;
		cout << "  88     88    " << endl;
		cout << "  88     88    " << endl;
		cout << "    88888      " << endl;
		cout << " " << endl;
	}
	break;
	case 9:
	{
		cout << "    99999     " << endl;
		cout << "  99     99   " << endl;
		cout << "  99     99   " << endl;
		cout << "   9999999    " << endl;
		cout << "        99    " << endl;
		cout << "       99     " << endl;
		cout << "      99      " << endl;
		cout << " " << endl;
	}
	}

	switch (b)
	{

	case 0:
	{
		cout << " 000000" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << " 000000" << endl;
		cout << " " << endl;
	}
	break;
	case 1:
	{
		cout << "  111    " << endl;
		cout << " 1111    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << " 111111  " << endl;
		cout << " " << endl;
	}
	break;
	case 2:

	{
		cout << "  22222  " << endl;
		cout << " 22   22 " << endl;
		cout << "     22  " << endl;
		cout << "   22    " << endl;
		cout << "  22      " << endl;
		cout << " 22      " << endl;
		cout << " 2222222 " << endl;
		cout << " " << endl;
	}
	break;
	case 3:
	{
		cout << "  333333  " << endl;
		cout << "      33 " << endl;
		cout << "      33 " << endl;
		cout << "   33333 " << endl;
		cout << "      33  " << endl;
		cout << "      33 " << endl;
		cout << "  333333 " << endl;
		cout << " " << endl;
	}
	break;
	case 4:
	{
		cout << "44    44  " << endl;
		cout << "44    44 " << endl;
		cout << "44    44 " << endl;
		cout << "44444444 " << endl;
		cout << "      44  " << endl;
		cout << "      44 " << endl;
		cout << "      44 " << endl;
		cout << " " << endl;
	}
	break;
	case 5:
	{
		cout << "  55555555   " << endl;
		cout << " 55          " << endl;
		cout << "  555555     " << endl;
		cout << "        55   " << endl;
		cout << "         55  " << endl;
		cout << " 55      55   " << endl;
		cout << "  55555555   " << endl;
		cout << " " << endl;
	}
	break;
	case 6:
	{
		cout << "   66666      " << endl;
		cout << " 66           " << endl;
		cout << "66            " << endl;
		cout << "66 6666666    " << endl;
		cout << "66        66  " << endl;
		cout << " 66      66   " << endl;
		cout << "   666666     " << endl;
		cout << " " << endl;
	}
	break;
	case 7:
	{
		cout << "   777777777     " << endl;
		cout << "         77      " << endl;
		cout << "        77       " << endl;
		cout << "       77        " << endl;
		cout << "      77         " << endl;
		cout << "     77          " << endl;
		cout << "    77           " << endl;
		cout << " " << endl;
	}
	break;
	case 8:
	{
		cout << "     8888      " << endl;
		cout << "  88     88    " << endl;
		cout << "  88     88    " << endl;
		cout << "    88888      " << endl;
		cout << "  88     88    " << endl;
		cout << "  88     88    " << endl;
		cout << "    88888      " << endl;
		cout << " " << endl;
	}
	break;
	case 9:
	{
		cout << "    99999     " << endl;
		cout << "  99     99   " << endl;
		cout << "  99     99   " << endl;
		cout << "   9999999    " << endl;
		cout << "        99    " << endl;
		cout << "       99     " << endl;
		cout << "      99      " << endl;
		cout << " " << endl;
	}
	}

	switch (c)
	{

	case 0:
	{
		cout << " 000000" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << "0      0" << endl;
		cout << " 000000" << endl;

	}
	break;
	case 1:
	{
		cout << "  111    " << endl;
		cout << " 1111    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << "   11    " << endl;
		cout << " 111111  " << endl;

	}
	break;
	case 2:

	{
		cout << "  22222  " << endl;
		cout << " 22   22 " << endl;
		cout << "     22  " << endl;
		cout << "   22    " << endl;
		cout << "  22      " << endl;
		cout << " 22      " << endl;
		cout << " 2222222 " << endl;

	}
	break;
	case 3:
	{
		cout << "  333333  " << endl;
		cout << "      33 " << endl;
		cout << "      33 " << endl;
		cout << "   33333 " << endl;
		cout << "      33  " << endl;
		cout << "      33 " << endl;
		cout << "  333333 " << endl;

	}
	break;
	case 4:
	{
		cout << "44    44  " << endl;
		cout << "44    44 " << endl;
		cout << "44    44 " << endl;
		cout << "44444444 " << endl;
		cout << "      44  " << endl;
		cout << "      44 " << endl;
		cout << "      44 " << endl;

	}
	break;
	case 5:
	{
		cout << "  55555555   " << endl;
		cout << " 55          " << endl;
		cout << "  555555     " << endl;
		cout << "        55   " << endl;
		cout << "         55  " << endl;
		cout << " 55      55   " << endl;
		cout << "  55555555   " << endl;

	}
	break;
	case 6:
	{
		cout << "   66666      " << endl;
		cout << " 66           " << endl;
		cout << "66            " << endl;
		cout << "66 6666666    " << endl;
		cout << "66        66  " << endl;
		cout << " 66      66   " << endl;
		cout << "   666666     " << endl;

	}
	break;
	case 7:
	{
		cout << "   777777777     " << endl;
		cout << "         77      " << endl;
		cout << "        77       " << endl;
		cout << "       77        " << endl;
		cout << "      77         " << endl;
		cout << "     77          " << endl;
		cout << "    77           " << endl;

	}
	break;
	case 8:
	{
		cout << "     8888      " << endl;
		cout << "  88     88    " << endl;
		cout << "  88     88    " << endl;
		cout << "    88888      " << endl;
		cout << "  88     88    " << endl;
		cout << "  88     88    " << endl;
		cout << "    88888      " << endl;

	}
	break;
	case 9:
	{
		cout << "    99999     " << endl;
		cout << "  99     99   " << endl;
		cout << "  99     99   " << endl;
		cout << "   9999999    " << endl;
		cout << "        99    " << endl;
		cout << "       99     " << endl;
		cout << "      99      " << endl;

	}
	}
}
int main()
{
	int A, B, C;
	double n; //Ingreso del dinero del participante 
	double resultado;


	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 3);


	srand(time(NULL));
	do {
		system("cls");
		cout << endl;
		// Reglas
		cout << " ---             JUEGO TRAGA MONEDAS            ---" << endl;
		cout << "___________________________________________________" << endl;
		cout << "!                                                 !" << endl;
		cout << "!  3 numeros distintos pierdes tu dinero          !" << endl;
		cout << "!  2 numeros iguales tu dinero se multiplica X0,50!" << endl;
		cout << "!  3 numeros iguales tu dinero se multiplica X10  !" << endl;
		cout << "!_________________________________________________!" << endl;
		cout << endl;

		cout << "\\\\\\\\                EMPIEZA EL JUEGO                   ////" << endl;
		cout << "	Minimo para jugar $200" << endl;
		cout << "	Si quiere dejar de jugar presione 0 " << endl;
		cout << "	Ingrese dinero $: ";

		cin >> n;

		if (n >= 200) //minimo de ingreso $200
		{
			A = rand() % 9 + 0;  // 3 numeros random (A,B,C) para simular los 3 resultados de un tragamonedas
			B = rand() % 9 + 0;
			C = rand() % 9 + 0;

			tragamonedas(A, B, C);

			if (A == B && A == C)
			{
				resultado = n * 10; // Bonus por 3 resultados iguales
				cout << " " << endl;
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 2);
				cout << " _______________ " << endl;
				cout << "!               !" << endl;
				cout << "!  GANASTE X10  !     $" << resultado << endl;
				cout << "!_______________!" << endl;
				SetConsoleTextAttribute(hConsole, 3);

			}
			else if (A == B || B == C || A == C) // Bonus por 2 resultados iguales
			{
				resultado = n * 0.5;
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 6);
				cout << " ________________" << endl;
				cout << "!                !" << endl;
				cout << "! Dinero X 0,50  !      $" << resultado << endl;
				cout << "!________________!" << endl;
				SetConsoleTextAttribute(hConsole, 3);
			}

			else
			{

				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 4);
				cout << "____________________________" << endl;
				cout << "!                          !" << endl;
				cout << "! Perdiste tu dinero  $ 0  !" << endl; // Resultados distintos pierde el dinero
				cout << "!__________________________!" << endl;
				SetConsoleTextAttribute(hConsole, 3);


			}
		}
		else
		{
			if (n == 0) // Finaliza el juego cuando la persona ingresa un 0 (cero)
				cout << ("Nos vemos luego!");

			else { // Si la persona ingresa menos de $200
				cout << ("Dinero insuficiente, Minimo $200") << endl;
			}
		}
		system("pause");
	} while (n != 0);
	return 0;
}