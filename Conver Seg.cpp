#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

	int converteSegundos(int h, int m, int s){
		int r;
		r = s;
		r += m * 60;
		r += h * 3600;
		return r;
	}
	
	int main()
	{
		float h, m, s;
		cin >> h >> m >> s;
		
		cout << converteSegundos(h, m, s);
		
	    return 0;       
	}
