#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int firstMissingPositive(vector<int>& nums) {
 if(nums.size()<=0) return 1;
 int i;
 int num;

 for(i=0;i<nums.size();i++){
     num=nums[i];
 
     while(num>0&&num<nums.size()&&nums[num-1]!=num){
         swap(nums[i],nums[num-1]);
         num=nums[i];
     }
 }

 for(i=0;i<nums.size();i++){
     if(i+1!=nums[i]){
         return i+1;
 
     }
 }
 return nums.size()+1;
}
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(4);
    cout<<firstMissingPositive(vec)<<endl;
    return 0;




}
