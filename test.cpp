#include <iostream>

using namespace std;

int solve1(){
	cout << "This is solve1 !!" << endl;
	return 5;
}
int solve2(){
	cout << "This is solve2 !!" << endl;
	return 2;
}


int main(int argc, char const *argv[])
{
	cout << max(solve1(),solve2()) << endl;
	return 0;
}