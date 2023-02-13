#include "../includes/Point.hpp"

/*
Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
Explanation:
			  B(10,30)
				/ \
			   /   \
			  /     \
			 /   P   \      P'
			/         \
	 A(0,0) ----------- C(20,0)
Output: Inside


Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
Explanation:
			  B(10,30)
				/ \
			   /   \
			  /     \
			 /       \      P
			/         \
	 A(0,0) ----------- C(20,0)
Output: Outside
*/

int main(void)
{
	//inside

	bool result = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15));
	if (result)
		cout << "Point inside of the triangle" << endl;
	else
		cout << "Point outside of the triangle" << endl;

	//outside

	result = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15));
	if (result)
		cout << "Point inside of the triangle" << endl;
	else
		cout << "Point outside of the triangle" << endl;
	return EXIT_SUCCESS;
}