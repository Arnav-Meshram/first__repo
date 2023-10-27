#include <bits/stdc++.h>
using namespace std;
int arr[5];
int top=-1;
bool isempty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
bool isfull(){
    if(top==4){
        return true;
    }else{
        return false;
    }
}
void push(int x){
    if (isfull==false){
    top++;
    arr[top]=x;}
    else{cout<<"stack overflow"<<endl;}

}
void pop(){
    if (isempty==true){
        cout<<"stack underflow"<<endl;
    }else:{
        top--;
    }
}
int peek(){
    cout<<arr[top]<<endl;
}
}
int main() {
    push(4);
    push(7);
    push(9);
    peek();
}
   
