#include<iostream>
using namespace std;
class time{
	int min,hr;
	public:
		void gettime(int m, int h){
			min = m;
			hr = h;
		}
		void puttime(){
			cout << hr << " Hr"<< ":" << min << " Min"<< endl ;
		}
		void sum(time,time);
};
void time::sum(time t1, time t2){
	min = t1.min+t2.min;
	hr = min/60;
	min = min%60;
	hr += t1.hr+t2.hr;
}
int main(){
	time t1,t2,t3;
	t1.gettime(45,4);
	t2.gettime(48,3);
	t3.sum(t1,t2);
	t1.puttime(); 
	t2.puttime(); 
	t3.puttime();
	return 0;
}