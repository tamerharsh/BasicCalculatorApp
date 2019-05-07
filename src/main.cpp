
//#include "pch.h"
#include <iostream>
#include"myCalculatorLib.h"


int main()
{

	/*
	double first_no = 10, second_no = 20;
	double  res_add;//res_div;
	myCalculator obj;
	res_add=obj.add(first_no,second_no);
	//obj.print(&res_add);

	res_div= obj.div(first_no, second_no);
	obj.print(res_div);*/

	
	int a=10, b=45;
	std::cout<<"The numbers are :  "<<a<<" ,and " <<b<<std::endl;
	std::cout<<"THE SUM IS :"<<add(a,b);
	
	return  0;

}

