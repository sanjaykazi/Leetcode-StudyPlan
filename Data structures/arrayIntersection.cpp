vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        for(i=0;i<n1;i++){
            if(map1[nums1[i]]>0)
            map1[nums1[i]]+=1;
            else
                map1[nums1[i]]=1;
        }
        for(i=0;i<n2;i++){
            if(map2[nums2[i]]>0)
            map2[nums2[i]]+=1;
            else
                map2[nums2[i]]=1;
        }
        if(n1>n2){
        for(i=0;i<n2;i++){
            if(map1[nums2[i]]>0){
                map1[nums2[i]]-=1;
                ans.push_back(nums2[i]);
            }
        }
    }
        else{
        for(i=0;i<n1;i++){
            if(map2[nums1[i]]>0){
                map2[nums1[i]]-=1;
                ans.push_back(nums1[i]);
            }
        }   
        }
        return ans;
    }
