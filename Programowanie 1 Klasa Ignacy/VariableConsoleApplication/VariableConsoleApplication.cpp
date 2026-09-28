// VariableConsoleApplication.cpp 

#include <iostream>

/*
*. Program obliczający pole prostokąta.
*. Program obliczający objętość stożka.
*. Program obliczający pole koła.
*. Program obliczający wartość wyrażenia a^2 + b^2
*. Program obliczający pole trójkąta o podstawie b i wysokości h
*. Program obliczający objętość kuli o promieniu r
*. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
*. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
*. Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
*/


//Napisz program który wczyta liczbę od użytkownika 
// i ją wyświetli na konsoli
void task1()
{
	//wczytanie liczby od użytkownika
	//	informacja co chcemy
	std::cout << "Podaj liczbę:\n";
	//  pobieramy daną
	//     deklaracja zmiennej
	int numberFromUser;
	//     zapamiętanie danej
	std::cin >> numberFromUser;
	//wyświetlenie na konsoli
	std::cout << "Użytkownik podał: " << numberFromUser << "\n";
}

//Program obliczający średnią arytmetyczną dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbę:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drugą liczbę:\n";
	std::cin >> secondNumber;

	float average;
	average = (firstNumber + secondNumber) / 2.0;

	std::cout << "Średnia to: " << average << "\n";
}



int main()
{
	setlocale(LC_CTYPE, "polish");

	task2();
}
