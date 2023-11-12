#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;
  int pn (float n){
	if (n > 0){
		return 1;
	}else{
		if (n < 0){
			return -1;
		}else{
			return 0;
		}
	}
}

int main()
{
	float n;
	cin >> n;
	
	cout << pn(n);
    
    return 0;       
}
