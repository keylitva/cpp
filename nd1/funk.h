#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
void skaitytiDuomenis(int Z[][8], int& n) {
	std::ifstream duom("duom.txt");

	duom >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			duom >> Z[i][j];
		}
	}

	duom.close();
}


void pertvarkytiMasyva(int Z[][8], int n) {
	int istri = 0;
	int temp = 0;
	int biggest = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j != istri + 1; ++j) {
			if (temp < Z[i][j])
				temp = Z[i][j];
		}
		istri++;
	}
	biggest = temp;
	istri = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0 + istri; j < n; ++j) {
			if (0 > Z[i][j])
				Z[i][j] = biggest;
		}
		istri++;
	}
}


void isvestiRezultatus(int Z[][8], int n) {
	std::ofstream rez("rez.txt");

	// Iðvedame galutiná masyvà
	rez << std::endl << "Galutinis masyvas:" << std::endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			rez << std::setw(5) << Z[i][j];
		}
		rez << std::endl;

	}

	rez.close();
}
