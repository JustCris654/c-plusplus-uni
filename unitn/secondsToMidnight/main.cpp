#include <iostream>

/*
	Scrivere un programma che, dati tre input da tastiera (ore,
	minuti e secondi), li memorizzi in tre variabili distinte e
	calcoli i secondi a mezzanotte.
	(mezzanotte => 0; 23:59:59 => 86399)
*/

const unsigned int MIDNIGHT_SECONDS = (24 * 60 * 60)-1;

int processSecondsToMidnight(unsigned int s, unsigned int m, unsigned int h) {
	return MIDNIGHT_SECONDS - (s + (m * 60) + (h * 60 * 60)); 
}

int main() {
	unsigned int seconds, minutes, hours;
	std::cout << "Insert how many hours be left from midnight: ";
	std::cin >> hours;

	std::cout << "Insert how many minutes be left from midnight: ";
	std::cin >> minutes;

	std::cout << "Insert how many seconds be left from midnight: ";
	std::cin >> seconds;

	std::cout << "Seconds to midnight: " << processSecondsToMidnight(seconds, minutes, hours) << "\n";
}
