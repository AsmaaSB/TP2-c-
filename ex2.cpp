#include<iostream>
#include<cmath>
using namespace std;

class Point {
    float x;
    float y;

    public :
    Point (float a , float b){
        x = a;
        y = b;

    }

    void afficher(){
        cout<<"Les cordonnees du point est : ("<<x<<" , "<<y<<")"<<endl;
    }
    void deplacer(float a , float b){
        x = x+a;
        y = y+b;
    }
    bool comparer(Point p){
        if (x == p.x && y == p.y){
            return true;
        }
        else {
            return false;
        }
    }
    float distance (Point p){
        return sqrt(static_cast<float>(pow(x-p.x,2)) + static_cast<float>(pow(y-p.y,2)));
    }
};

int main (){
    Point p1(4,4);
    p1.afficher();
    p1.deplacer(3.0,3.0);
    p1.afficher();
    Point p2(5,3);
    p2.afficher();
    if (p1.comparer(p2)){
        cout<<"Les deux points sont identiques.\n";
    }
    else {
        cout<<"Les deux points ne sont pas identiques.\n";
    }
    cout<<"La distance entre les deux points est : "<<p1.distance(p2)<<endl;

}