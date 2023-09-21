
#include <iostream>
using namespace std;
void main(){
	float c, C, dt, t, num, anal;
	cout << "c, C what";//sin 미분
	cin >> c >> C;
	cout << "t dt what";
	cin >> t >> dt;
	anal = c * C *cos(c * t);
	num = C * (sin(c * (t + dt)) - sin(c * t)) / dt;
	cout << "num" << num << "anal" << anal << endl;
	cout << "Error = " << (num - anal) / anal * 100 << "%\n";

	cout << "c, C what";//cos 미분
	cin >> c >> C;
	cout << "t dt what";
	cin >> t >> dt;
	anal = -c * C * sin(c * t);
	num = C * (cos(c * (t + dt)) - cos(c * t)) / dt;
	cout << "num" << num << "anal" << anal << endl;
	cout << "Error = " << (num - anal) / anal * 100 << "%\n";
	float a, b;
	int N;
	cout << "c, C what";//sin 정적분
	cin >> c >> C;
	cout << " a b N ? = ";
	cin >> a >> b >> N;
	anal = C*((-cos(c*b))-(-cos(c*a)))/c;
	dt = (b - a) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += C * sin(c * (a + dt * i)) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (num - anal )/ anal * 100 << "%\n";
	
	cout << "c, C what";//cos 정적분
	cin >> c >> C;
	cout << " a b N ? = ";
	cin >> a >> b >> N;
	anal = C * ((sin(c * b)) - (sin(c * a))) / c;
	dt = (b - a) / N;
	num = 0;
	for (int i = 0; i < N; i++) {
		num += C * cos(c * (a + dt * i)) * dt;
	}
	cout << " num " << num << " anal " << anal << endl;
	cout << " error = " << (num - anal )/ anal * 100 << "%\n";


}
