#include<iostream>
#include<vector>

using namespace std;

vector<int> pairSum( vector<int> num , int target)
{
    vector<int> ans;
    int n = num.size();

    for(int i=0 ;  i<n ; i++)
    {
            for(int j=i+1 ; j<n ; j++)
            {
                if(num[i] + num[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);

                    return ans;
                }
            }
    }
}

int main()
{
     int target  = 18;

    vector<int> num={2,7,11,15,16};

    vector<int> ans = pairSum(num,target);

    cout<<ans[0]<<" , "<<ans[1]<<endl;


}
