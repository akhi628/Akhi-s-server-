#include <iostream>
using namespace std;
class Box{
float lenght, height,breath;
public:
void getdata ( float a, float b, float c){
    lenght=a;
    height=b;
    breath=c;
}
    friend float display(Box & b)
{
     return b.lenght*b.height*b.breath;
}
};
int main()
{
    Box obj;
    obj.getdata(3.0,6.0,8.0);
    float prnt = display(obj);
    cout<<prnt;

}