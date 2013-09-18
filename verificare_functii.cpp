/*
 * verificare_functii.cpp
 *
 *  Created on: Sep 18, 2013
 *      Author: mihai
 */
#include <iostream>
#include <vector>
#include "lista_functii.h"
using namespace std;

typedef int (*array) (int a);

array functions1[] =
    {
        functia_constanta,
        functia_liniara,
        functia_exponentiala,
    };
array functions2[] =
    {
        functia_constanta,
        functia_exponentiala,
        functia_logaritmica,
        functia_liniara,
        functia_identitate,
        functia_exponentiala,
        functia_liniara,
        functia_constanta,
        functia_constanta,
        functia_exponentiala,
        functia_logaritmica,
        functia_liniara,
        functia_identitate,
        functia_exponentiala,
        functia_liniara,
        functia_constanta,
        functia_constanta,
        functia_exponentiala,
        functia_logaritmica,
        functia_liniara,
        functia_identitate,
        functia_exponentiala,
        functia_liniara,
        functia_constanta,
    };
array functions3[]={
		functia_exponentiala
};
int main()
{
	cout<<"Pentru prima colectie"<<endl;
    	for(int i = 0; i < 3; ++i)
    	{
    		cout << functions1[i](8) << endl;
    	}
    cout<<endl;

    cout<<"Pentru a doua colectie"<<endl;
        for(int i = 0; i < 24; ++i)
        {
            cout << functions2[i](2) << endl;
        }
    cout<<endl;

    cout<<"Pentru a treia colectie"<<endl;
        for(int i = 0; i < 1; ++i)
        {
            cout << functions3[i](7) << endl;
        }
    cout<<endl;
}




