#include <iostream>
using namespace std;

class areaofRectangle{
    private:
        float l;
        float w;
        float area;
        friend void Area(areaofRectangle);

    public:
    void setData(float a, float b){
        l = a;
        w = b;
        area = l * w;
    }
};

void Area(areaofRectangle area1) {
    cout<<"Thre area of the rectangle is: " << area1.area <<endl;
}

int main() {
    areaofRectangle area1;
    int x;
    cin >> x;
    area1.setData(x,4);
    Area(area1);
    return 0;
}