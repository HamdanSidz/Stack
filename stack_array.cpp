#include <iostream>
using namespace std;


class stack{
    private:
        int top;
        int *arr;
    public:
        stack(int num){
            arr = new int[num];
            top = -1;
        }
        
        int overflow(int top){
            if(top == sizeof(arr)-1){
                return 0;
            }
            else {
                return 1;
            }
        }

        int underflow(int top){
            if (top == -1){
                return 0;
            }
            else{
                return 1;
            }
        }

        void push(int val){
            top ++ ;
            int a = overflow(top);
            if(a == 0){
                cout<<" YOUR STACK IS OVERFLOWED :(    " <<endl;
            }
            else{
                arr[top] = val ;
            }
        }    

        void pop(){
            top--;
            int a = underflow(top);
            if(a == 0 ){
                cout<<" YOUR STACK IS UNDERFLOWED :(   " <<endl;
            }
            else{
                int a = arr[top];
                cout<<"REMOVAL OF VALUE WHICH IS ON TOP INDEX: "<<a<<endl;
            }
        }

        void display(){
            int a = underflow(top);
            if(a == 0 ){
                cout<<" YOUR STACK IS UNDERFLOWED :(" <<endl;
            }
            else{
                for(int i=0 ; i <= top; i++){
                    cout<<"TOP INDEX IS: "<<i<<", ON TOP DATA IS: "<<arr[i]<<endl;
                }
            }
        }
};


int main(){

stack s1(2);

s1.push(0);
s1.push(3);
s1.push(5);
s1.display();
s1.push(7);
s1.pop();
s1.pop();
s1.pop();
s1.pop();
s1.display();
s1.push(90);
s1.display();


}