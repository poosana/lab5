#include <iostream>
#include<cmath>

using namespace std;

double deg2rad(double deg){
    double rad;
    rad = deg*(M_PI/180);
    return rad;
}

double rad2deg(double rad){
    double degree;
    degree = rad*(180/M_PI);
    return degree;
}

double findXComponent(double lenght1,double lenght2,double angle1,double angle2){
    double ResultX;
    double Vecdirection;
    ResultX = (lenght1*cos(angle1))+(lenght2*cos(angle2));
    return ResultX;

}

double findYComponent(double lenght1,double lenght2,double angle1,double angle2){
    double ResultY;
    ResultY = (lenght1*sin(angle1))+(lenght2*sin(angle2));
    return ResultY;
}

double pythagoras(double ResultX,double ResultY){
    double ResultVec;
    ResultVec =sqrt((pow(ResultX,2))+(pow(ResultY,2)));
    return ResultVec;
}

void showResult(double ResultVec,double Vecdirection){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"Length of the resultant vector = "<<ResultVec<<endl;
    cout<<"Direction of the resultant vector (deg) = "<<Vecdirection<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
   

}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}