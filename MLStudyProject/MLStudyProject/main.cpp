

#include <iostream>
#include <Dense>

using namespace std;

int main()
{
	cout << "Hello world";

	Eigen::Matrix<float, 3, 1> MyMat3f;
	Eigen::Matrix<float, 3, 1> myZeroMatrixCopy =  MyMat3f.Zero();

	MyMat3f(1, 1) = 18;

}