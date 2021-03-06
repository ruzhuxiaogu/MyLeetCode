#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;


int majorityElement(vector<int> &num){
    int majority;
    int cnt=0;


    for(int i=0;i<num.size();i++){


        if(cnt==0){
            majority=num[i];
            cnt++;
        }else{
            majority==num[i]?cnt++:cnt--;
            if(cnt>num.size()) return majority;
        }
    }
    return majority;

}


vector<int> &split(const string &s,char delim,vector<int> &elems){
    stringstream ss(s);
    string item;


    while(getline(ss,item,delim)){
        elems.push_back(atoi(item.c_str()));
    }
    return elems;
}

vector<int> split(const string &s,char delim){
   vector<int> elems;
   split(s,delim,elems);
   return elems;

}


int main(int argc,char **argv){

     string array="1,2,1,2,1,2,1,2,1,2,1";

     if(argc>1){
         array=argv[1];
     }

     cout<<"["<<array<<"]"<<endl;
     vector<int> num=split(array,',');
     cout<<"majorityElement:"<<majorityElement(num)<<endl;
     

     return 0;
}
