/*
 * aime1-2018-14.cpp
 *
 *  Created on: Mar 8, 2018
 *      Author: Andrew
 */

#include <iostream>
using namespace std;

int heptagon[13][7];

int main() {
	heptagon[0][0] = 1;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 7; j++) {
			if (j != 4) {
				heptagon[i+1][(j+6)%7] += heptagon[i][j]; // (j+6)mod7 => (j-1)mod7
				heptagon[i+1][(j+1)%7] += heptagon[i][j];
			}
			else {
				heptagon[i+1][j] += heptagon[i][j];
			}
		}
	}
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 7; j++) {
			cout << heptagon[i][j] << " ";
		}
		cout << endl;
	}
	cout << heptagon[12][4] << endl;
}


