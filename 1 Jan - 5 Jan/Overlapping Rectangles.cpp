//Problem Link-https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/
//Code:-
class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        return min(R1[0],R2[0])>=max(L1[0],L2[0]) and min(L1[1],L2[1])>=max(R1[1],R2[1]);
        
    }
};
