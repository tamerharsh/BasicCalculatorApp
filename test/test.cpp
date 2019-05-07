#include"../src/myCalculatorLib.cpp"
#include<gtest/gtest.h>
TEST(CalculatorAppTest,add)
{
	std::cout<<"TESTING OF ADDITION OF TWO NUMBERS"<<std::endl ;
	
	int test_res;
	int a=10,b=14;
	test_res=add(a,b);
	
	EXPECT_EQ(24,add(10,14));
}
//mainOfTest
int main(int argc, char **argv) 
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


