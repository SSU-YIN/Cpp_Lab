#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	while(1){
		cout << n << " ";
		if(n!=1){
			if (n%2!=0){
				n=3*n+1;
			}else{
				n=n/2;
			}
		}else{
			break;
		}
	}
	cout << endl;
	return 0;
}
