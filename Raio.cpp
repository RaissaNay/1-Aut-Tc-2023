#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

float vEsfera(float R){
	float V = 4.0/3.0 * M_PI * pow(R,3);
	return V;
}

int main()
{
    float R;
	cin >> R;
	
	cout << vEsfera(R);
	
    return 0;       
}
