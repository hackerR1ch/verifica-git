#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <math.h>

//Riccardo Ragaiuoli, 18/12/2025, 1.0.0
using namespace std;

float conversione (int gradi_c);
int main () 
{
for (int i=0; i<=20; i++)
	{
		cout <<i<<" gradi celsius sono equivalenti a : "<< conversione (i) <<" gradi fareneith"<< endl;
	}
}
float conversione (int gradi_c)
{
	return 30+40(9/3)*gradi_c;
}
