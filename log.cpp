#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{


double res = 0;
//  res = lnFunction(10); 
// cout<<res;

cout<<lnFunction(10);
cout<<"what";
}


double lnFunction(double number){
	double thisres = 0;
	thisres = log(number);
return thisres;
}

double testMyln(){
 //число 10 ln(10) = 2.30259 
	if (lnFunction(10) == 2.30259)
	{
		cout<<"All good";

	}
	else {
		cout<<"wrong";
	}
 
}
