#include <bits/stdc++.h>
using namespace std;
int counter=0;

void recusrions_1(){
    if(counter == 2) return;
    cout<<1;
    counter++;
    recusrions_1();
}
void rescursions_2(int i, int n){ //print name 5 times

    if(i>n) return;
    cout<<"pahel"<<endl;
    rescursions_2(i+1,n);
}
void recursion_3(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    recursion_3(i+1,n);
}
void recursion_4(int i){ // reverse print of list
    if(i<=0) return;
    cout<<i<<endl;
    recursion_4(i-1);
}
int sum=0;


void recursion_6(int i,int n){ // print i to n with backtracking

    if(i<1){
        return;
    }
    recursion_6(i-1,n);
    cout<<i<<endl;
}
void recursion_7(int i,int n){ // print REVERSE i to n with backtracking

    if(i>n){
        return;
    }
    recursion_7(i+1,n);
    cout<<i<<endl;
}
void recusrion_5(int i,int n){ // sum of n numbers
    if(i>n){
        cout<<sum;
        return;
    }
    // cout<<i<<endl;
    sum+=i;
    recusrion_5(i+1,n);

}
void sum_of_numbers_parametric(int i,int sum){ // uses a parameter to print
    if(i<1){
        cout<<sum; // used a parameter to print 
        return;
    }
    sum_of_numbers_parametric(i-1,sum+i);
}
int sum_of_numbers_functional(int n){

    if(n==0){
        return 0;
        }
    else return (n + sum_of_numbers_functional(n-1));
}


int fact =1;
void factorial(int i){
    if (i<=0){
        cout<<fact;
        return;
    }
    fact *= i;
    factorial(i-1);
}
int factorial_functional(int n){
    if(n  ==0 || n ==1){
        return 1;
    }
    return n * factorial_functional(n-1);
}

void reverse_array(int n,int arr[],int iter){

    if(iter >= n/2){
        return;
    }
    swap(arr[iter],arr[n-iter-1]);
    reverse_array(n,arr,iter+1);
}
bool pallindrome_check(int i,string str){
    if(i>=str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]){
        return false;
    }
    return pallindrome_check(i+1,str);

}
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
// void subsequence(int i, vector<int> &ds, int arr[],int n){
//     if(i>=n){
//         for (auto it : ds){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     ds.push_back(arr[i]);
//     subsequence(i+1,ds,arr,n);
//     ds.pop_back();
//     subsequence(i+1,ds,arr,n);
    
    
// }
void subsequence(int index, vector<int> ds,int arr[],int n){
    // base case
    if(index == n){
        for(auto it : ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    // take a particular element from an array
    ds.push_back(arr[index]);
    subsequence(index+1,ds,arr,n);
    ds.pop_back();
    // do not take a particular element from the array
    subsequence(index+1,ds,arr,n);
}

void kSum_subsequence (int index,vector<int> &ds, int arr[], int n, int local_sum,int sum){
    //base case 
    if(index == n){
        if(sum == local_sum){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    // take
    ds.push_back(arr[index]);
    local_sum+=arr[index]; // local sum for each iteration
    kSum_subsequence(index+1,ds,arr,n,local_sum,sum); // take
    ds.pop_back();
    local_sum-=arr[index];
    kSum_subsequence(index+1,ds,arr,n,local_sum,sum); // not take

}

int main(){
    // int n;
    // recusrions_1();
    // cin>>n; // number of time to be printed
    // rescursions_2(1,n);
    // recursion_3(1,n);
    // recursion_4(n);
    // recusrion_5(1,n);
    // factorial(n);
    // recursion_6(n,n);
    // recursion_7(1,n);
    // sum_of_numbers_parametric(n,0);
    // cout<<sum_of_numbers_functional(n);
    // cout<<factorial_functional(n);

    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // reverse_array(n,arr,0);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<fibo(n);

    // int arr[]={3,1,2};
    int arr[]={1,2,1};

    int n=3;
    vector<int> ds;
    // subsequence(0,ds,arr,n);
    kSum_subsequence(0,ds,arr,n,0,2);


    return 0;
}