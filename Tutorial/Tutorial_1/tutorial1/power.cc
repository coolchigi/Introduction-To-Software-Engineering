#include<iostream>
#include<string>

void power(int d, int e, int &p);


void power(int a, int b, int &c){
	c = 1;
	for(int i = 1; i <= b; i++){
		c *= a;
	}
}
