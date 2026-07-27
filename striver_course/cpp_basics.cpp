#include <iostream>
using namespace std;

// void doSomething(int marks){
//      if (marks >= 90){
//         cout<<"Grade A"<< endl;
//      }
//      else if (marks >= 70 && marks <90){
//         cout<<"Grade B"<<endl;
//      }
//      else if (marks >= 50 && marks <70){
//         cout<<"Grade c"<<endl;
//      }
//      else if (marks >= 35 && marks < 50){
//         cout<<"Grade D"<<endl;
//      }
//      else {
//         cout<<"Fail"<<endl;
//      }
     
// }

// int main() {

//     int marks;
//     cin>>marks;
//     doSomething(marks);

//     return 0;


// }
int whileLoop(int d) {
        // Your code goes here
        int sum = 0;
        int i=1;
        int count =0;
        while(i > 0){
            if (i % 10 == d){
                sum = sum + i;
                count ++;
                if(count == 50){
                    break;
                }
            }
            i++;

        }
        return sum;  

        
    }

    int main(){

        int d;
        int tsum;
        cin>> d;
        tsum = whileLoop(d);
        cout<<tsum<<endl;
        return 0;
    }