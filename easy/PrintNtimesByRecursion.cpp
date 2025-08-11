#include<bits/stdc++.h>
using namespace std;
void printN(int n,int times){
    if(times==0){
        return ;
    }
    cout<<n<<endl;
    printN(n,times-1);
}
void printNameN(string k,int times){
    if(times==0){
        return;
    }
    cout<<k<<endl;
    printNameN(k,times-1);
}
void onetoN(int i,int n){

    if(n<i){
        return ;
    }
    cout<<i<<endl;
    onetoN(++i,n);
    

}
void NtoOne(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    NtoOne(n-1);
}
int SumofN(int n){
    if(n==0) return 0;
    return n+SumofN(n-1);

}
int facofN(int n){
    if(n==1) return n;
    return n*facofN(n-1);

}
void NtoOnebyBacktracking(int i,int n){

    if(n<i){
        return ;
    }
    
    NtoOnebyBacktracking(i+1,n);
    cout<<i<<endl;
    

}

int main() {

     cout<<SumofN(5);
    
}