#include<iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(int x1, int y1){
			x = x1;
			y = y1;
		}
	Point(const Point &p1){
	x = p1.x;
	y = p1.y;
	}
	int getx(){
		return x;
	}
	int gety(){
		return y;
	}
};

int main(){
	Point p1(10, 15);
	Point p2  = p1;
	cout << p1.getx() << ", "<< p1.gety();
	cout <<endl << p2.getx() << ", " << p2.gety();
	return 0;
}