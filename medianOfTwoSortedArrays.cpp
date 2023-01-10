class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, k = 0;
        int n = nums1.size(), m = nums2.size();
        vector<int> arr(m+n);
        while ( i < n && j < m)
        {
            if (nums1[i] <= nums2[j])
            {
                arr[k] = nums1[i];
                i++;
                k++;
            }
            else if (nums2[j] < nums1[i])
            {
                arr[k] = nums2[j];
                j++;
                k++;
            }
        }
        while ( i < n)
        {
            arr[k] = nums1[i];
            i++;
            k++;
        }
        while (j < m)
        {
            arr[k] = nums2[j];
            j++;
            k++;
        }

        int a = arr.size();
        if (a%2 != 0)
        {
            double val = arr[a/2];
            return val;
        }
        else
        {
            float v1 = arr[a/2];
            float v2 = arr[a/2 - 1];
            double val = (v1+v2)/2;
            return val;
        }
        return 0;
    }
};