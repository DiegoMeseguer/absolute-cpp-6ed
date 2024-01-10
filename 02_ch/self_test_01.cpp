#include<iostream>
using namespace std;

int main() {

	int count(0), limit(10);
	int x(200), y(40);
	bool a, b, c, d, e, f, g, h, i, j, k, l;

	a = (count == 0) && (limit < 20); // true
	b = count == 0 && limit < 20; // true
	c = (limit > 20) || (count < 5); // true
	d = !(count == 12); // true
	e = (count == 1) && (x < y); // false
	f = (count < 10) || (x < y); // true
	g = !( ((count<10) || (x < y)) && (count >= 0) ); // false
	//h = ((limit / count) > 7) || (limit < 20); // error
	i = (limit < 20) || ((limit / count) > 7); // true
	//j = ((limit/count) > 7) && (limit < 0); // error
	k = (limit<0) && ((limit/count) > 7); // false
	l = (5 && 7) + (!6); // 1
 
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"c: "<<c<<endl;
	cout<<"d: "<<d<<endl;
	cout<<"e: "<<e<<endl;
	cout<<"f: "<<f<<endl;
	cout<<"g: "<<g<<endl;
	cout<<"h: "<<h<<endl;
	cout<<"i: "<<i<<endl;
	cout<<"j: "<<j<<endl;
	cout<<"k: "<<k<<endl;
	cout<<"l: "<<l<<endl;

	return 0;

}
