#include <bits/stdc++.h>
using namespace std;
int main() {
    int length,height,radius,ch,area;
    cout<<"1:Triangle\n2:Circle\n3:Rectangle"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>ch;
    switch(ch){
        case 1:{
            cout<<"Enter length and height:"<<endl;
            cin>>length>>height;
            area=(length*height)/2;
            break;
        }
        case 2:{
            cout<<"Enter the radius:"<<endl;
            cin>>radius;
            area=3.14*radius*radius;
            break;
        }
        case 3:{
            cout<<"Enter length and height:"<<endl;
            cin>>length>>height;
            area=length*height;
            break;
        }
        default: cout<<"Invalid choice"<<endl;
    }
    cout<<"The area is "<<area<<endl;
	return 0;
}
