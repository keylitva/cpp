#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
#include <vcclr.h>
#include <codecvt>
#include <map>

const wchar_t visosraides[] = { L'a', 261, L'b', L'c', 269, L'd', L'e', 281, 279, L'f', L'g', L'h', L'i',
303, L'y', L'j', L'k', L'l', L'm', L'n', L'o', L'p', L'r', L's', 352, L't', L'u', 371, 363, L'v', L'z', 382};

class eilerastis {
public: std::wstring eil;
	size_t kiekraidziu = 0;
	std::map<wchar_t, int> raides;
};

struct duomeilerastis {
	std::wstring eil;
	size_t kiekraidziu = 0;
	std::map<wchar_t, int> raides;
	size_t diffrence = 99999;
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
		else if (c == 261 || c == 260) {
			m.kiekraidziu++;
			auto it = m.raides.find(261);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[261] = 1;
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
		else if (c == 269 || c == 268) {
			m.kiekraidziu++;
			auto it = m.raides.find(269);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[269] = 1;
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
		else if (c == 281 || c == 280) {
			m.kiekraidziu++;
			auto it = m.raides.find(281);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[281] = 1;
			}
		}
		else if (c == 279 || c == 278) {
			m.kiekraidziu++;
			auto it = m.raides.find(279);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[279] = 1;
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
		else if (c == 303 || c == 302) {
			m.kiekraidziu++;
			auto it = m.raides.find(303);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[303] = 1;
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
		else if (c == 353 || c == 352) {
			m.kiekraidziu++;
			auto it = m.raides.find(353);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[353] = 1;
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
		else if (c == 371 || c == 370) {
			m.kiekraidziu++;
			auto it = m.raides.find(371);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[371] = 1;
			}

			}
		else if (c == 363 || c == 362) {
			m.kiekraidziu++;
			auto it = m.raides.find(363);
			if (it != m.raides.end()) {
				it->second++;
			}
			else {
				m.raides[363] = 1;
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
		else if (c == 382 || c == 381) {
				m.kiekraidziu++;
				auto it = m.raides.find(382);
				if (it != m.raides.end()) {
					it->second++;
				}
				else {
					m.raides[382] = 1;
				}

				}
			i++;
	}
}
void artaspats(eilerastis m, duomeilerastis n[]) {
	std::locale::global(std::locale("lt_LT.UTF-8"));
	std::wifstream duom("duom.txt");
	int i = 0;
		while (!duom.eof()) {
			std::wstring buf = L"";
			duom >> n[i].kiekraidziu;
			if (n[i].kiekraidziu != 0) {
				while (buf != L"#endEil") {
					n[i].eil += (buf + L'\n');
					std::getline(duom, buf);
				}
				int kiekis;
				int j = 0;
				for (auto raide : visosraides){
					duom >> kiekis;
					n[i].raides[raide] = kiekis;
				}
				i++;
			}
		}
	
}
void initmap(std::map<wchar_t, int> &raides) {
	for (auto raide : visosraides)
		raides.insert(std::pair<wchar_t, int>(raide, 0));
}
void rastiarciausia(duomeilerastis n[], int dydis, eilerastis m, duomeilerastis arciausias[]) {
	if (n[2].kiekraidziu == 0) {
		std::locale::global(std::locale("lt_LT.UTF-8"));
		std::wofstream rez("duom.txt", std::ios::app);
		rez << m.kiekraidziu << std::endl;
		rez << m.eil << std::endl;
		rez << "#endEil" << std::endl;
		for (auto raide : visosraides)
			rez << m.raides[raide] << " ";
		rez << std::endl;
	}
	else {
		bool taspats = false;

		for (size_t i = 0; i < 3; ++i) {
			arciausias[i].eil = L"";
			arciausias[i].kiekraidziu = 0;
			arciausias[i].raides.clear();
			arciausias[i].diffrence = 999999;
		}

		for (int i = 0; i < dydis; ++i) {
			int tmp = int(m.kiekraidziu - n[i].kiekraidziu);
			int temp = abs(tmp);

			if (m.raides == n[i].raides) {
				taspats = true;
			}

			for (int j = 0; j < 3; ++j) {
				if (temp < arciausias[j].diffrence) {
					arciausias[j] = n[i];
					arciausias[j].diffrence = temp;
					break;
				}
			}
		}

		if (!taspats) {
			std::locale::global(std::locale("lt_LT.UTF-8"));
			std::wofstream rez("duom.txt", std::ios::app);
			rez << m.kiekraidziu << std::endl;
			rez << m.eil << std::endl;
			rez << "#endEil" << std::endl;
			for (auto raide : visosraides)
				rez << m.raides[raide] << " ";
			rez << std::endl;
		}
	}
}
void raiddiff(duomeilerastis arciausias[], eilerastis m, int& maznr) {
	int temp[3];
	temp[0] = 0;
	temp[1] = 0;
	temp[2] = 0;
	for (auto raide : visosraides) {
		temp[0] += abs(arciausias[0].raides[raide] - m.raides[raide]);
		temp[1] += abs(arciausias[1].raides[raide] - m.raides[raide]);
		temp[2] += abs(arciausias[2].raides[raide] - m.raides[raide]);
	}
	int i = 0;
	int tempid = 0;
	while (i != 3) {
		if (tempid == 0) {
			tempid = temp[i];
			maznr = i;
		}
		else if (temp[i] < tempid) {
			tempid = temp[i];
			maznr = i;
		}
		i++;
	}
}
void duomrodimas(duomeilerastis arciausias[], int& maznr, std::wstring &ruodmenis, eilerastis m, std::wstring &ruodmenismain) {
	ruodmenis = L"Iš viso raidžių: " + std::to_wstring(arciausias[maznr].kiekraidziu) + L'\n' + L"Raidžių pasiskirstimas: " + L'\n';
	ruodmenismain = L"Iš viso raidžių: " + std::to_wstring(m.kiekraidziu) + L'\n' + L"Raidžių pasiskirstimas: " + L'\n';
	int i = 0;
	for (auto raide : visosraides) {
		ruodmenis += raide;
		ruodmenis += L" ";
		ruodmenis += std::to_wstring(arciausias[maznr].raides[raide]);
		ruodmenis += L" ";
		ruodmenismain += raide;
		ruodmenismain += L" ";
		ruodmenismain += std::to_wstring(m.raides[raide]);
		ruodmenismain += L" ";
		i++;
		if (i % 5 == 0) {
			ruodmenis += L'\n';
			ruodmenismain += L'\n';
		}
	}
}
