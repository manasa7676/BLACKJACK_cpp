/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class blck_jk{
    public:
    static int blk_jk(){
        int a;
        int b;
        int x;
        int blk = 11;
        int jk = 0;
        cout<< "input a:";
        cin>>a;
        cout<< "input b:";
        cin>>b;
        if (a == 11 && b>=11){
            a = 1 ;
        }
        if (b == 11 && a>=11){
             b = 1 ;
        }
    x = a+b;    
        if (x>=21){
            cout<<"0";
        }
        else{
            cout<<a+b;
            return x;
        }
    }
};
int main(){
    blck_jk myobj;
    myobj.blk_jk();

    return 0;
}
