#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;
    nums.push_back(1); 
    nums.push_back(1); 
    nums.push_back(2);

            int unique=0,i=0;
            while(i< nums.size()-1){
                if(nums[i]!= nums[i+1]){
                    unique++;
                    i++;
                }else{
                    nums.erase(nums.begin()+i);
                    cout << nums.size() << endl;
                }
            }
    cout << nums.size() << "  " << nums[1];
}