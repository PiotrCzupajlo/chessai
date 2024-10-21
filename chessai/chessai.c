
#include <stdio.h>

/*
White:
1-Rook
2-knight
3-bishop
4-queen
5-king
6-pawn
7-shadowpawn

Black:
101-rook
102-knight
103-bishop
104-queen
105-king
106-pawn
107-shadowpawn

0-empty
*/

/* Moves
*	Rook k∈Z;			i-k;		i+k;		j-k;		j+k;
*	Knight				i-2 j-1;		 j-2 i-1;		 i-2 j+1;		j+2 i-1;		i+1 j-2;		i+1 j+2;		i+2 j-1;		 i+2 j+1;
	Bishop k∈Z ;		i+k			j+-k;		i-k			j+-k; 
*	Queen k∈Z ;			i-k j-k;		i-k 0		i-k j+k			0 j-k			0 j+k		i+k j-k			i+k 0		
*	King ;				i-1 j-1		i-1 0		i-1 j+1			0 j-1		0 j+1		i+1 j-1			i+1 0			i+1 j+1			
	Pawn				if(i==2)  i+ 1?2;  if(i+1 j-+1 != 0) i+1 j-+1
*/


int main()
{
	 char chessboard[8][8] = { {101,102,103,104,105,103,102,101},	{106,106,106,106,106,106,106,106}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0},  {0,0,0,0,0,0,0,0},  {0,0,0,0,0,0,0,0}, {6,6,6,6,6,6,6,6}, {1,2,3,4,5,3,2,1} };

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%d\t",chessboard[i][j]);
		}
		
		printf("\n");
	}







	return 0;

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
