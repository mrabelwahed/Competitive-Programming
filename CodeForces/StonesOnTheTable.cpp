/*
 * StonesOnTheTable.cpp
 *
 *  Created on: Apr 4, 2021
 *      Author: ramadan
 */



#include <iostream>
using namespace std;

int main(){

	int x ;
	cin >>x;
	char arr [x];
	for(int i =0 ;i<x;i++){
		char c;
		cin >> c;
		arr[i] = c;

	}

	int cnt =1;
	for(int i =1;i<x;i++){
		if(arr[i] == arr[i-1]) cnt++;
	}

	cout << cnt-1;
	return 0;
}


