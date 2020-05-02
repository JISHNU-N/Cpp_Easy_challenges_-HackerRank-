#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		cout<<hex<<showbase<<nouppercase<<left<<(long long)A<<endl;;
		cout<<setw(15)<<showpos<<setfill('_')<<right<<fixed<<setprecision(2)<<dec<<B<<endl;
		cout<<noshowpos<<uppercase<<setprecision(9)<<scientific<<C;



	}
	return 0;

}
