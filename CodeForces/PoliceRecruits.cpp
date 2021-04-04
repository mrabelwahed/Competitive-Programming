/*
 * Police Recruits.cpp
 *
 *  Created on: Apr 4, 2021
 *      Author: ramadan
 */



#include <iostream>
using namespace std;

int main(){

	int x ;
	cin >>x;
	int arr [x];
	for(int i =0 ;i<x;i++){
		int c;
		cin >> c;
		arr[i] = c;

	}

	int sum =0;
	int cnt=0;

	for(int i=0;i<x;i++){
      if(sum+arr[i] <0){
    	  cnt++;
      }else{
    	  sum+=arr[i];
      }
	}

  cout << cnt;


	return 0;
}

// only sum positive not negative

