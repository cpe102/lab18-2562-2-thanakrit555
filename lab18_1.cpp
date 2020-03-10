#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R,Rect r){
  
	double r1_x=R1.x+R1.w;
	double r2_x=R2.x+R2.w;
	
	cout<<min(r1_x,r2_x)-max(R1.x-R2.x);
	
	Rect r1_y=R1.y-R1.h;
	Rect r2_y=R2.y-R2.h;
	
	cout<<max(r2_y,r1_y)-min(R2.y,R1.y);
}

int main(){
	Rect R;
	Rect r;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>R1.x;
	cin>>R1.y;
	cin>>R1.w;
	cin>>R1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>r1.x;
	cin>>r1.y;
	cin>>r1.w;
	cin>>r1.h;
    


	
	cout << "\nOverlap area = ";	
	return 0;
}
