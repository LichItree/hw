#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){

    Eigen::Vector2f j(2.0f,1.0f);
    Eigen::Vector2f p(1.0f,2.0f);
    Eigen::Vector2f res;
    Eigen::Matrix2f i;
    i << cos(45/180*acos(-1)),cos(-45/180*acos(-1)),cos(45/180*acos(-1)),cos(45/180*acos(-1));
    res = i*j+p;
    std::cout << res << std::endl;
    return 0;
}