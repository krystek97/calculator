#include <iostream>
#include<math.h>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std ;
float suma , roznica , iloczyn , dzielenie , modulo , los; 
int main(int argc, char** argv) 
{
	int a = 0 ;
	cout<<"Autor :\t\t\tKrystian Kozlowski"<<endl ; 
	cout<<"Data :\t\t\t09.07.2018"<<endl ; 
	cout<<"Projekt :\t\t\tOsobisty kalkulator"<<endl ; 
	cout<<"Witaj w swoim osobistym kalkulatorze. Jaka operacje chcesz wykonac :\n\n" ; 
	cout<<"1.Suma dwoch liczb"<<endl ; 
	cout<<"2.Odejmowanie dwoch liczb"<<endl ; 
	cout<<"3.Monozenie dwoch liczb"<<endl ; 
	cout<<"4.Dzielenie dwoch liczb"<<endl ; 
	cout<<"5.Dzialanie modulo na dwoch liczbach"<<endl ; 
	cout<<"6.Chce wylosowac dowolna liczbe do kumulacji w totolotka"<<endl ; 
	cout<<"Z powyzszego menu wybierz jedna z opcji"<<endl ; 
	cin>>a ; 
	if(a == 1)
	{
		float d , e ;
		cout<<"Wybrales sumowanie dwoch liczb"<<endl ;  
		cout<<"Podaj pierwsza liczbe"<<endl ; 
		cin>>d ; 
		cout<<"Podaj druga liczbe"<<endl ; 
		cin>>e ; 
		suma = d + e ;
		cout<<"Suma twoich liczb wynosi "<<suma ; 
	}
	if(a == 2)
	{
		float d , e ; 
		cout<<"Wybrales odejmowanie dwoch liczb"<<endl ; 
		cout<<"Podaj pierwsza liczbe"<<endl ; 
		cin>>d ; 
		cout<<"Podaj druga liczbe"<<endl ; 
		cin>>e ; 
		roznica = d - e ; 
		cout<<"Roznica tych liczb wynosi "<<roznica<<endl ; 
	}
	if(a == 3)
	{
		float d , e ;
		cout<<"Wybrales mnozenie"<<endl ;  
		cout<<"Podaj pierwsza liczbe"<<endl ; 
		cin>>d ; 
		cout<<"Podaj druga liczbe"<<endl ; 
		cin>>e ; 
		iloczyn = d * e ;
		cout<<"Wynik iloczynu tych dwoch liczb wynosi "<<iloczyn<<endl ; 
	}
	if(a == 4)
	{
		float d , e ;
		cout<<"Wybrales dzielenie"<<endl ; 
		cout<<"Podaj pierwsza liczbe"<<endl ; 
		cin>>d ; 
		cout<<"Podaj druga liczbe"<<endl ; 
		cin>>e ; 
		dzielenie = d/e ;
		cout<<"Wynik dzielenia tych dwoch liczb wynosi "<<dzielenie<<endl ; 
	}
	if(a == 5)
	{
		int d , e ; 
		cout<<"Wybrales dzialanie modulo"<<endl ; 
		cout<<"Podaj pierwsza liczbe"<<endl ; 
		cin>>d ; 
		cout<<"Podaj druga liczbe"<<endl ; 
		cin>>e ;
		modulo = d % e ; 
		cout<<"Wynik dzialania modulo na tych dwoch liczbach wynosi "<<modulo<<endl ; 
	}
	if(a == 6)
	{
		cout<<"Wybrales wylosowanie liczby"<<endl ; 
		los = (rand() % 50 ) + 0 ; 
		cout<<"Twoja szczesliwa liczba to "<<los<<endl ; 
	}
	else 
	{
		cout<<"Koniec programu"<<endl ; 
	}
	return 0;
}
