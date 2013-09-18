/*
 * lista_functii.cpp
 *
 *  Created on: Sep 18, 2013
 *      Author: mihai
 */


#include<iostream>
#include <math.h>
#include "lista_functii.h"
#define PI 1.14159265;
using namespace std;
int functia_constanta(int x) {
	return 7;//returneaza mereu 7
}

int functia_identitate(int x) {
	return x;
}

int functia_liniara(int x) {
	return 7*x;
}

int functia_exponentiala(int x) {
	return pow(x,7);
}

int functia_logaritmica(int x) {
	return pow(x,1/7);
}


int functia_zeta_Riemann(int x) {
	cout<<"All nontrivial zeros are on the i*1/2 imaginary ax ";
	return 0;

}




