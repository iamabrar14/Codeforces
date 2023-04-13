#include <iostream>
using namespace std;


int main(){
	int i = 0, n, x, y, z, r = 0;

	cin>>n;
	while (i < n){

		cin>>x>>y>>z;
		if ((x + y + z) >= 2){
			r++;
		}
		i++;
	}

	cout<<r;
    return 0;
}
