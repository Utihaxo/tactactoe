#include <bits/stdc++.h>

map<vector<int>, pair<pair<int, int>, bool>> graf_gry; //klucz to {{kogo ruch, dokad pojsc}, czy wygrana}

bool ocena(vector<int> aktl_pozycja){ //aktl pozycja to pozycja na planszy
	int aktl_suma;
	for (int i = 0; 3 > i; i++) {
		aktl_suma = 0;
		for (int j = 0; 3 > j; j++) {
			suma += aktl_pozycja[i + 3 * j]; //kolko to 1 krzyzyk to cztery i puste to 0
		}
		if (aktl_suma == 3 || aktl_suma == 12) {
			return true;
		}
	}
	for (int i = 0; 3 > i; i++) {
		aktl_suma = 0;
		for (int j = 0; 3 > j; j++) {
			suma += aktl_pozycja[i * 3 + j]; //kolko to 1 krzyzyk to cztery i puste to 0
		}
		if (aktl_suma == 3 || aktl_suma == 12) {
			return true;
		}
	}
	aktl_suma = 0;
	for (int i = 1; 3 >= i; i++) {
		aktl_suma += aktl_pozycja[(i * i) - 1];
		if (aktl_suma == 3 || aktl_suma == 12) {
			return true;
		}
	}
	aktl_suma = 0;
	for (int = 2; 6 >= i; i++) {
		aktl_suma += aktl_pozycja[i];
		if (aktl_suma == 3 || aktl_suma == 12) {
			return true;
		}
	}
	
}

void dfs(vector<int> stan) {
	
	


