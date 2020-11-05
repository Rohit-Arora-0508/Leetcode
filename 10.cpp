public:
    int maxArea(vector<int>& height) {
        //brute force
        int water=0;
        int i=0,j=height.size()-1;
        while(j>i)
        {
            water=max(water,(j-i)*min(height[j],height[i]));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return water;
       
    }
};
