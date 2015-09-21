#include<stdlib.h>
#include<iostream>
#include<cstdio>
#include<cstdlib>
using  namespace std;

int sqrt(int x){

    if(x<=0) return 0;
    int e=x/2+1;
    int s=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        long long sq=(long long)mid*(long long ) mid;
        if(sq==x) return mid;
        if(sq<x){
            s=mid+1;
        }else{
            e=mid-1;
        }

    }
    return e;

}

int main(){

    int n;
    while(scanf("%d",&n)&&n){
      printf("sqrt(%d)=%d\n",n,sqrt(n));
    }
    return 0;
}
