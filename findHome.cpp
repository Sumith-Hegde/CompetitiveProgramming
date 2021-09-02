// input-- a list of maps where each index represents a house block and map contains mapping of different buildings 
// whether they are present or not in that house block and another list of buildings that are essential
// output-- index of the house which has the minimum total distance to travel to acess all the essential buildings
// example--
// blocks={{{"school",true},{"market",false},{"gym",false}},{{"school",false},{"market",false},{"gym",true}},{{"school",true},{"market",false},{"gym",true}},
//           {{"school",true},{"market",false},{"gym",false}},{{"school",true},{"market",true},{"gym",false}}}
// essential={"school","market","gym"}
// answer - 4
// beacuse house block with index 4 has the minimum total distance to acess all essential buildings
// i.e 2 in this case
// input->
// first line no of blocks n
// next n lines 3 space seperated integers(only 0/1) for school,market and gym respectively 
// 1=>present in that block
// 0=>not present in that block
// output->
// index(0 based) of block that has minimum total distance to get all facilities


//Google interview question
// TimeComplexity = O(n)
// SpaceComplexity = O(1)
//go from left to right and get min total distance for each block to get essentials from left
//go from right to left and get min total distance for each block to get essentials from right
//among all choose min total distance
#include<iostream>
#include<vector>
using namespace std;
struct houseBlock
{
    bool school;
    bool market;
    bool gym;
};
int main(int argc, char const *argv[])
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
    vector<houseBlock*> MAP;
        for(int i=0;i<n;i++)
        {
            struct houseBlock *HB=(struct houseBlock*)malloc(sizeof(struct houseBlock));
            cin>>HB->school;
            cin>>HB->market;
            cin>>HB->gym;
            MAP.push_back(HB);
        }
        int minDist=INT16_MAX;
        int minIndex=-1;
        int essentials[3]={INT16_MAX-2,INT16_MAX-2,INT16_MAX-2};
        for(int i=0;i<n;i++)
        {
            essentials[0]++;
            essentials[1]++;
            essentials[2]++;
            if(MAP[i]->school)
            {
                essentials[0]=0;
            }
            if(MAP[i]->market)
            {
                essentials[1]=0;
            }
            if(MAP[i]->gym)
            {
                essentials[2]=0;
            }
            if(minDist>essentials[0]+essentials[1]+essentials[2])
            {
                minIndex=i;
            }
            minDist=min(minDist,essentials[0]+essentials[1]+essentials[2]);
        }
        essentials[0]=INT16_MAX-2;
        essentials[1]=INT16_MAX-2;
        essentials[2]=INT16_MAX-2;
        minDist=INT16_MAX;
        for(int i=n-1;i>=0;i--)
        {
            essentials[0]++;
            essentials[1]++;
            essentials[2]++;
            if(MAP[i]->school)
            {
                essentials[0]=0;
            }
            if(MAP[i]->market)
            {
                essentials[1]=0;
            }
            if(MAP[i]->gym)
            {
                essentials[2]=0;
            }
            minDist=min(minDist,essentials[0]+essentials[1]+essentials[2]);
            if(minDist>essentials[0]+essentials[1]+essentials[2])
            {
                minIndex=i;
            }
        }
        cout<<minIndex<<endl;
        cout<<minDist<<endl;
    }
    // struct houseBlock* house=(struct houseBlock*)malloc(sizeof(struct houseBlock));
    // MAP.push_back(house);
    // MAP[0]->school=1;
    // cout<<MAP[0]->school;
    return 0;
}

