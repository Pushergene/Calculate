#include <iostream>
using namespace std;
int rechnung(long long int zahl) {
    if(zahl >= 10) {
    return rechnung(zahl % 10 + (zahl / 10));
    }
    else {
        return zahl;
    }
}
int main() {
	//code
	int T;
	cin >> T;
	while(T--) {
	int long long x;
	cin >> x;
    cout << rechnung(x) << endl;
	}
}
