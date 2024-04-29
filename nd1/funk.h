#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
#include <vcclr.h>
#include <codecvt>
#include <map>

const wchar_t visosraides[] = { L'a', L'ą', L'b', L'c', L'č', L'd', L'e', L'ę', L'ė', L'f', L'g', L'h', L'i',
L'į', L'y', L'j', L'k', L'l', L'm', L'n', L'o', L'p', L'r', L's', L'š', L't', L'u', L'ų', L'ū', L'v', L'z', L'ž' };

struct eilerastis {
	std::wstring eil;
	size_t kiekraidziu = 0;
	std::map<wchar_t, int> raides;
};

struct duomeilerastis {
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
		else if (c == L'ą' || c == L'Ą') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'ą');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'ą'] = 1;
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
		else if (c == L'č' || c == L'Č') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'č');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'č'] = 1;
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
		else if (c == L'ę' || c == L'Ę') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'ę');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'ę'] = 1;
			}
		}
		else if (c == L'ė' || c == L'Ė') {
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
		else if (c == L'g' || c == L'G') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'g');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'g'] = 1;
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
		else if (c == L'į' || c == L'Į') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'į');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'į'] = 1;
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
		else if (c == L'š' || c == L'Š') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'š');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'š'] = 1;
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
		else if (c == L'ų' || c == L'Ų') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'ų');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'ų'] = 1;
			}

			}
		else if (c == L'ū' || c == L'Ū') {
			m.kiekraidziu++;
			auto it = m.raides.find(L'ū');
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[L'ū'] = 1;
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
		else if (c == L'ž' || c == L'Ž') {
				m.kiekraidziu++;
				auto it = m.raides.find(L'ž');
				if (it != m.raides.end()) {
					it->second++;
				}
				else {
					m.raides[L'ž'] = 1;
				}

				}
			i++;
	}
}
void artaspats(eilerastis m, duomeilerastis n[]) {
	std::wifstream duom("duom.txt");
	int i = 0;

	
		while (!duom.eof()) {
			std::wstring buf = L"";
			duom >> n[i].kiekraidziu;
			if (n[i].kiekraidziu != 0) {
				while (buf != L"#endEil") {
					n[i].eil += buf;
					std::getline(duom, buf);
				}
				wchar_t raid;
				int kiekis;
				int j = 0;
				while (j != 31) {
					duom >> raid >> kiekis;
					m.raides[raid] = kiekis;
					j++;
				}
				i++;
			}
		}
	
}
void initmap(std::map<wchar_t, int> &raides) {
	for (auto raide : visosraides)
		raides.insert(std::pair<wchar_t, int>(raide, 0));
}
void rastiarciausia(duomeilerastis n[], int dydis, eilerastis m, duomeilerastis arciausi[]) {
	if (n[0].kiekraidziu == 0) {
		std::locale::global(std::locale("lt_LT.UTF-8"));
		std::wofstream rez("duom.txt", std::ios::app);
		rez << m.kiekraidziu << std::endl;
		rez << m.eil << std::endl;
		rez << "#endEil" << std::endl;
		for (auto raide : visosraides)
		rez << raide << " " << m.raides[raide] << " ";
		rez << std::endl;
	}
	else {
		int skaicius = m.kiekraidziu;
		bool taspats = false;
		for (size_t i = 0; i < 3; ++i) {
			arciausi[i].eil = L"";
			arciausi[i].kiekraidziu = 0;
			arciausi[i].raides.clear();
		}

		// Ieskokime arciausiu
		for (int i = 0; i < dydis; ++i) {
			if (m.eil == n[i].eil) {
				taspats = true;
			}
			// Jei norimo skaiciaus nepasiekiame, arba turimas elementas jau yra tarp arciausiu, tesiame cikla
			if (n[i].kiekraidziu >= skaicius || n[i].eil == L"" || n[i].raides.empty()) {
				continue;
			}

			// Tikriname, ar si eilute yra arciausioje
			int arciausioIndeksas = -1;
			for (int j = 0; j < 3; ++j) {
				if (arciausioIndeksas == -1 || arciausi[j].kiekraidziu > arciausi[arciausioIndeksas].kiekraidziu) {
					arciausioIndeksas = j;
				}
			}

			// Jei esama eilute turi maziau raidziu nei arciausiai, ja idedame
			if (n[i].kiekraidziu > arciausi[arciausioIndeksas].kiekraidziu) {
				arciausi[arciausioIndeksas] = n[i];
			}
		}

		if (taspats != true) {
			std::wofstream rez("duom.txt", std::ios::app);
			rez << m.kiekraidziu << std::endl;
			rez << m.eil << std::endl;
			rez << "#endEil" << std::endl;
			for (auto raide : visosraides)
				rez << raide << " " << m.raides[raide] << " ";
			rez << std::endl;
		}
	}
	
}
