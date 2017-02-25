#include <cstdio>
#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    int stair = 1;

	for (int i = 1; i <= n; i++) {

		for (int j = n - 1; j >= i; j--) {

			printf(" ");
		}


		for (int k = 1; k <= stair; k++) {

			printf("#");
		}
		stair++;
		printf("\n");
	}
    
    
    
    
    
    return 0;
}