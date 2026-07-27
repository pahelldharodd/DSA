#include<iostream>
using namespace std;

void pattern3(){ // number triangle low to high

    for(int i=0;i<4;i++){
        for (int j=0;j<=i;j++){
            cout<<j+1 ;
        }
        cout<<endl;
    }
}

void pattern5(int n){ // triangle high to low 
    for(int i = 0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;

    }

}
void pattern7(int n){ // pyramid

    for(int i = 0;i<n;i++){

        for(int j = 0;j<n-i-1;j++){ // for spaces 
            cout<<" ";

        }
        for(int k = 0;k<(i*2)+1;k++){  // for stars
            cout<<"*";
        }
        for(int l = 0;l<n-i-1;l++){  // for spaces
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){ // upside down pyramid

    for(int i=0;i<n;i++){
        for(int j = 0; j <= i; j++){//spaces
            cout<<" ";
        }
        for(int k = 0; k < n-(2*i); k++){ // stars
            cout<<"*";
        }
        for(int l = 0; l <= i; l++){//spaces
            cout<<" ";
        }
        cout<<endl;
    }

}
/*
pattern 10
*
**
***
****
*****
****
***
**
*
*/

void pattern10(int n){
    for(int i =1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n -i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// pattern image 
/* https://static.takeuforward.org/wp/uploads/2022/08/P11.png*/
void pattern11(int n){
    int start =1;
    for(int i = 0;i<n;i++){
        if(i % 2 == 0){
            start = 1;
        }      
        else{
            start = 0;
        }
        for(int j =0;j<=i;j++){      
                cout<<start;
                start = 1-start;
        }
        cout<<endl;
    }
}
//https://static.takeuforward.org/wp/uploads/2022/08/P12.png
void pattern12(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0; j <= i ;j++){
            cout<<j+1;
        }
        for(int k = 0; k< 2*(n-(i+1));k++){
            cout<<" ";
        }
        for(int l = i+1; l > 0 ;l--){
            cout<<l;
        }
        cout<<endl;  
    }
}
// void pattern13(int n){

//     for(int i=1;i<=n;i++){
//         int counter =0;
//         for(int j=i;counter < i;j++){
//             cout<<j;
//             counter++;
//         }
//         cout<<endl;
//     }

// }
void pattern13(int n){
//https://static.takeuforward.org/wp/uploads/2022/08/P13.png
    int num=1;
    for(int i =1 ; i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<num;
            num+=1;
        }
    cout<<endl;

    }
}
void pattern14(int n){
//https://static.takeuforward.org/wp/uploads/2022/08/P14.png
    for(int i=0;i<n;i++){
        for(char ch = 'A'; ch <= 'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void random(int n){

    for(int i=0;i<n;i++){
        int counter =1;
        for (int j=counter;j<= counter+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern17(int n){

    for(int i = 0;i<n;i++){

        for(int j = 0;j<n-i-1;j++){ // for spaces 
            cout<<" ";

        }
        int breakpoint = ((i*2)+1)/2;
        char ch = 'A';
        for(int k = 0;k< (i*2)+1;k++){  // for char
            cout<<ch;
            if(k < breakpoint) ch++;
            else ch--;
        }
        for(int l = 0;l<n-i-1;l++){  // for spaces
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
//https://static.takeuforward.org/wp/uploads/2022/08/P18.png
    for(int i=0;i<n;i++){
        char ch = 'E'-i;
        for(int j = 0;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void pattern19(int n){
//https://static.takeuforward.org/wp/uploads/2022/08/P19.png
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*i;k++){
            cout<<" ";
        }
        for(int l=0;l<n-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; i++){
        // Left stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }

        // Spaces
        for(int j = 0; j < 2 * (n - i - 1); j++){
            cout << " ";
        }

        // Right stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }

        cout << endl;
    }
}

int main(){
    int n;
    // pattern3();
    // cout<<"enter n";
    cin>>n;
    cout<<endl;
    // pattern5(n);
    // cout<<endl;
    // pattern7(n);
    // cout<<endl;
    // pattern8(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // random(n);
    // pattern17(n);
    // pattern18(n);
    pattern19(n);
    return 0;
}