#include <iostream>
using namespace std;
class y;
class x{
    int data ;
    public :
        void setvalue(int value ){
           int data = value;
    
        }friend void add(x,y);};
class y{
    int num;
    public:
        void setvalue(int value ){
           int num = value;
   
       
} friend void add(x,y);};

void add(x o1,y o2){
    cout<<"the sum is "<<o1.data + o2.num ;
}


int main() {
    x a1;
    a1.setvalue(2);
    y b1 ;
    b1.setvalue(3);
    add(a1,b1);


}