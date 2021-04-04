/*
 * SerejaAndDima.cpp
 *
 *  Created on: Apr 4, 2021
 *      Author: ramadan
 */

#include <iostream>
using namespace std;

int main(){

	int x;
	cin >>x;
	int arr[x];

	for(int i=0;i<x;i++)
	{
		int n;
		cin >> n;
		arr[i] = n;

	}


	int i=0;
	int j = x-1;
	int s =0 , d = 0;
	bool flag = true;

	while(i<=j){
	  int mx = max(arr[i] , arr[j]);
	  if(mx == arr[i]) i++;
	  else if (mx == arr[j]) j--;
	  if(flag){
		  s+=mx;
		  flag = false;
	  }else{
		  d+=mx;
		  flag = true;
	  }
  }

  cout << s << " "<< d;

	return 0;
}

// use two pointer technique
