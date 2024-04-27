#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vcclr.h>
#include <map>


struct eilerastis {
	std::wstring eil;
	size_t kiekraidziu = 0;
	std::map<wchar_t, int> raides;
};

void skaitytiDuomenis(eilerastis &m) {
	wchar_t c;
	int i = 0;
	while (i != m.eil.length()) {
		c = m.eil[i];
		if (c == L'a' || c == L'A') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'a');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'a'] = 1;
			}
		}
		else if (c == L'b' || c == L'B') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'b');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'b'] = 1;
			}
		}
		else if (c == L'à' || c == L'À') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'à');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'à'] = 1;
			}
		}
		else if (c == L'c' || c == L'C') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'c');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'c'] = 1;
			}
		}
		else if (c == L'd' || c == L'D') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'd');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'd'] = 1;
			}
		}
		else if (c == L'e' || c == L'E') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'e');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'e'] = 1;
			}
		}
		else if (c == L'è' || c == L'È') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'è');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'è'] = 1;
			}
		}
		else if (c == L'æ' || c == L'Æ') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'æ');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'æ'] = 1;
			}
		}
		else if (c == L'ë' || c == L'Ë') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'ë');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'ë'] = 1;
			}
		}
		else if (c == L'f' || c == L'F') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'f');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'f'] = 1;
			}
		}
		else if (c == L'h' || c == L'H') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'h');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'h'] = 1;
			}

		}
		else if (c == L'i' || c == L'I') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'i');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'i'] = 1;
			}

		}
		else if (c == L'á' || c == L'Á') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'á');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'á'] = 1;
			}

			}
		else if (c == L'y' || c == L'Y') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'y');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'y'] = 1;
			}

			}
		else if (c == L'j' || c == L'J') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'j');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'j'] = 1;
			}

			}
		else if (c == L'k' || c == L'K') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'k');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'k'] = 1;
			}

			}
		else if (c == L'l' || c == L'L') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'l');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'l'] = 1;
			}

			}
		else if (c == L'm' || c == L'M') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'm');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'm'] = 1;
			}

			}
		else if (c == L'n' || c == L'N') {
				m.kiekraidziu++;
			auto it = m.raides.find(L'n');
			if (it != m.raides.end()) {
					it->second++;
			}
			else {
				m.raides[L'n'] = 1;
			}

			}
		else if (c == L'o' || c == L'O') {
				m.kiekraidziu++;
			auto it = m.raides.find(L'o');
			if (it != m.raides.end()) {
				it->second++;
			}
		    else {
				m.raides[L'o'] = 1;
			}

		    }
		else if (c == L'p' || c == L'P') {
				m.kiekraidziu++;
			auto it = m.raides.find(L'p');
			if (it != m.raides.end()) {
			it->second++;
			}
			else {
				m.raides[L'p'] = 1;
				}

			}

		else if (c == L'r' || c == L'R') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'r');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'r'] = 1;
			}

			}
		else if (c == L's' || c == L'S') {
			m.kiekraidziu++;
			auto it = m.raides.find(L's');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L's'] = 1;
			}

			}
		else if (c == L'ð' || c == L'Ð') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'ð');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'ð'] = 1;
			}

			}
		else if (c == L't' || c == L'T') {
			m.kiekraidziu++;
			auto it = m.raides.find(L't');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L't'] = 1;
			}

			}
		else if (c == L'u' || c == L'U') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'u');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'u'] = 1;
			}

			}
		else if (c == L'ø' || c == L'Ø') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'ø');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'ø'] = 1;
			}

			}
		else if (c == L'û' || c == L'Û') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'û');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'û'] = 1;
			}

			}
		else if (c == L'v' || c == L'V') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'v');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'v'] = 1;
			}

			}
		else if (c == L'z' || c == L'Z') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'z');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'z'] = 1;
			}

			}
		else if (c == L'þ' || c == L'Þ') {
				m.kiekraidziu++;
			auto it = m.raides.find(L'þ');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'þ'] = 1;
			}

			}
	}
}