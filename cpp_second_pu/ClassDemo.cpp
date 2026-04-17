#include<iostream>
using namespace std;g
class Shape{
    public : 
    virtual void display(){
        cout<<"This is a shape"<<endl;

    }
};
 
class circle: public Shape{
    public: 
    void display() override{
        cout<<"This is a circle"<<endl;
    }
};

class rectangle: public Shape{
    public:
    void display() override{
        cout<<"This is a rectangle"<<endl;
    }
};

class triangle : public Shape{
    public: 
    void display() override{
        cout<<"This is a triangle"<<endl;
    }
};
 
class polygon: public Shape{
    public :
    void display() override{
        cout<<"This is a polygon"<<endl;
    }
};

class square: public rectangle{
    public:
    void display() override{
        cout<<"This is a square"<<endl;
    }
};

int main(){
    Shape s;
    circle c;
    rectangle r;
    triangle t;
    polygon p;
    square sq;
    s.display();
    c.display();
    r.display();
    t.display();
    p.display();
    sq.display();
    return 0;
}
