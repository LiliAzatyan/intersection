class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        std::vector<int> myVector;
        for (int i = 0; i < nums1.size(); ++i)
        {
            for (int j = 0; j < nums2.size(); ++j)
            {
                if (nums1[i] == nums2[j])
                {
                    myVector.push_back(nums1[i]);
                    break;
                }
            }
        }
        for (int i = 0; i < myVector.size(); ++i)
        {
            for(int j = 0; j < myVector.size(); ++j)
            {
            if (myVector[i] == myVector[j] && i != j)
            {
                myVector.erase(myVector.begin() + j);
            }
            }
        }
        return myVector;
    }
};

