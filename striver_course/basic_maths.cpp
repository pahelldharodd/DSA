#include <bits/stdc++.h>
using namespace std;

void count_digits(int n){

    //method 1
    int counter =0;
    int num=n;
    while(num>0){
        num = num/10;
        counter++;
    }
    cout<<counter;
    cout<<endl;

    // method 2
    int n2 = int(log10(n)+1);
    cout<<n2;
    cout<<endl;

    //NOTE : time complexity always is log to the base N 
    //where N is the number which is used to divide i.e. 10 in the method 1
    // therefore is for some reason divisor is 2 then base 2 
}

void reverse_number(int n){
    int number = n;
    int ld,rd =0;
    while(n>0){
        ld = n %10;
        rd = (rd*10)+ld;
        n=n/10; 
    }
    cout<< "the reversed number is "<<rd<<endl;;
    if(number == rd){
        cout<<"the reverse and the original numbers are palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }
}
void armstrong(int n){

    int remainder,counter=0;
    int num=n;
    while(num>0){
        remainder = num%10;
        counter += (pow(remainder,3));
        num = num/10;
    }
    if(n == counter){
        cout<<"the number is an armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong";
    }
}
void all_divisors_bf(int n){
    vector<int> divisor_list;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            divisor_list.emplace_back(i);
        }
    }
    for(int it : divisor_list){
        cout<<it<<", ";
    }
    cout<<endl;

}
void all_divisors_op(int n){
    vector<int> divisor_list;
    for(int i =1;i*i <= n;i++){ // another way of writing i<=sqrt(n)
        if(n%i == 0){
            divisor_list.emplace_back(i);
            if(n/i != i){ // condition for 6*6 == 36 (middle column)
                divisor_list.emplace_back(n/i);
            }
        }
    }
    sort(divisor_list.begin(),divisor_list.end());// sort the unsorted
    for(int it : divisor_list){
        cout<<it<<", ";
    }
    cout<<endl;

}
void check_prime_op(int n){
    int counter =0;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            counter++;
            if(n/i != i){
                counter++;
            }
        }
    }
    if(counter ==2){
        cout<<n<<" is a prime number"<<endl;
    }
}
int main(){

    int n = 36;
    int n2 = 31;
    // count_digits(n);
    // reverse_number(n);
    // armstrong(n);
    all_divisors_bf(n);
    all_divisors_op(n);
    check_prime_op(n2);
    return 0;
}