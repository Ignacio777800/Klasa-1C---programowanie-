// VariableConsoleApplication.cpp 

#include <iostream>
/*
* Wykładzina do pokoju
Wczytaj długość i szerokość prostokątnego pokoju w metrach oraz cenę metra kwadratowego wykładziny. Oblicz powierzchnię podłogi oraz koszt wykładziny potrzebnej do jej pokrycia. Pomiń zapas i odpady przy docinaniu.

* Podlewanie trawnika
Zraszacz podlewa obszar w kształcie koła. Wczytaj jego zasięg w metrach, czyli odległość od zraszacza do najdalszego podlewanego punktu. Oblicz powierzchnię podlewanego trawnika.

* Koszt podróży samochodem
Wczytaj długość trasy w kilometrach, średnie spalanie samochodu w litrach na 100 km oraz cenę litra paliwa. Oblicz ilość paliwa potrzebną do przejechania trasy oraz koszt tego paliwa.

* Zakup z rabatem
Wczytaj cenę towaru przed obniżką oraz wysokość rabatu w procentach. Oblicz cenę po obniżce oraz zaoszczędzoną kwotę.

* Koszt zużycia energii
Wczytaj moc urządzenia w watach, czas jego pracy w godzinach oraz cenę jednej kilowatogodziny energii elektrycznej. Oblicz zużycie energii w kilowatogodzinach oraz koszt pracy urządzenia. Przyjmij, że urządzenie przez cały ten czas pracuje z podaną mocą.

* Rachunek za zakupy
Klient kupuje trzy rodzaje produktów. Dla każdego rodzaju wczytaj cenę jednej sztuki oraz liczbę kupowanych sztuk. Oblicz koszt zakupu każdego rodzaju produktu oraz łączną kwotę do zapłaty.

* Średnia ważona ocen
Wczytaj trzy oceny ucznia oraz wagę każdej z nich. Przyjmij, że wszystkie wagi są dodatnie. Oblicz średnią ważoną ocen.

* Wymiary do dokumentacji
Wczytaj długość elementu w metrach. Do dokumentacji warsztatowej potrzebny jest ten sam wymiar w centymetrach i milimetrach. Oblicz i wyświetl obie wartości.

* Wymiana waluty przed wyjazdem
Wczytaj kwotę w złotych przeznaczoną na wymianę oraz kurs euro wyrażony jako cena jednego euro w złotych. Oblicz, ile euro można otrzymać za podaną kwotę. Pomiń prowizję kantoru.

* Podział kosztów wyjazdu
Grupa znajomych dzieli po równo koszty wspólnego wyjazdu. Wczytaj łączny koszt transportu, cenę jednego noclegu dla jednej osoby, liczbę noclegów oraz liczbę uczestników. Oblicz całkowity koszt wyjazdu i kwotę przypadającą na jedną osobę.
*/

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

//Program pokazujący współpracę zmiannych
void task3()
{
	int firstNumber = 10;
	int secondNumber = firstNumber;

	firstNumber = 20;

	std::cout << firstNumber << ' ' << secondNumber << '\n';
}

//Zamiana wartości dwóch zmiennych
void task4()
{
	// Wczytanie dwóch liczb
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe:\n";
	std::cin >> secondNumber;

	// Wyświetlenie wartości przed zamianą
	std::cout << "Przed zamiana: " << firstNumber << ' '
		<< secondNumber << '\n';

	// Zamiana wartości
	//   Zachowanie pierwszej wartości w zmiennej pomocniczej
	int temporaryNumber = firstNumber;
	//   Zastąpienie pierwszej wartości drugą
	firstNumber = secondNumber;
	//   Zapisanie zachowanej wartości w drugiej zmiennej
	secondNumber = temporaryNumber;

	// Wyświetlenie wartości po zamianie
	std::cout << "Po zamianie: " << firstNumber << ' ' << secondNumber << '\n';
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task4
	
	
	();
}