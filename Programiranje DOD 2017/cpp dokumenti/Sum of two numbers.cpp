#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
//http://www.spoj.com/problems/CHITEST1/

int main () {
	
	int n;
	float a,b,sum;
	
	vector<float>x;
	vector<float>y;
	cin >> n;
	
	for (int i = 0; i != n;) {
		cin >> a >> b;
		sum = a + b;
		x.push_back(a);
		x.push_back(b);
		i++;
	for (float o = 0.0; o < sum;){
		if (sum < 0) o--;
		else if (sum > 0) o++;
		if (o = sum)
		y.push_back(o);
		if (i == n && o == sum)
		cout << "" << endl;
	}
		
}
	 for (vector<float>::iterator it = y.begin() ; it != y.end(); ++it)
	   cout << setprecision(2) << *it << endl;
	  
	return 0;
}
