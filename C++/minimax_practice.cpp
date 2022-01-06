// #include<bits/stdc++.h>
// using namespace std;

// int minimax(int depth,int nodeIndex, bool isMax,int scores[], int h,int alpha,int beta){
//     if(depth==h)
//         return scores[nodeIndex];
//     if(isMax){
//         int v=-1000;
//         for(int i=0;i<2;i++){
//             v=minimax(depth+1,nodeIndex*2+i,false,scores,h,alpha,beta);
//             cout<<v<<" "<<depth<<endl;
//             if(v>=beta) return v;
//                 alpha =max(alpha,v);
//         }
//         return v;
//     }
//     else{
//         int v=1000;
//         for(int i=0;i<2;i++){
//             v=minimax(depth+1,nodeIndex*2+i,false,scores,h,alpha,beta);
//             cout<<v<<" "<<depth<<endl;
//             if(v<=alpha) return v;
//                 beta=min(beta,v);
//         }
//         return v;
//     }
// }
// int alpha_beta(int scores[],int h){
//     int maxi=max(minimax(1,0,false,scores,h,1000,-1000),minimax(1,1,false,scores,h,1000,-1000));
//     cout<<maxi<<" "<<1<<endl;
//     return maxi;
// }
// int log2(int n){
//     return (n==1)?0 :1+log2(n/2);
// }

// int main(){
//     int scores[]={2,3,5,9,0,1,7,5};
//     int n=sizeof(scores)/sizeof(scores[0]);
//     int h=log2(n);
//     int res=alpha_beta(scores,h);
//     cout<<"The optimal value is :"<<res<<endl;
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;
int getHeight(int n) {
   return (n == 1) ? 0 : 1 + log2(n / 2);
}
int minmax(int height, int depth, int nodeIndex,
bool maxPayer, int values[], int alpha,
int beta) {
   if (depth == height) {
      return values[nodeIndex];
   }
   if (maxPayer) {
      int bestValue = INT_MIN;
      for (int i = 0; i < height - 1; i++) {
         int val = minmax(height, depth + 1, nodeIndex * 2 + i, false, values, alpha, beta);
         bestValue = max(bestValue, val);
         alpha = max(alpha, bestValue);
         if (beta <= alpha)
            break;
      }
      return bestValue;
   } else {
      int bestValue = INT_MAX;
      for (int i = 0; i < height - 1; i++) {
         int val = minmax(height, depth + 1, nodeIndex * 2 + i, true, values, alpha, beta);
         bestValue = min(bestValue, val);
         beta = min(beta, bestValue);
         if (beta <= alpha)
            break;
      }
      return bestValue;
   }
}
int main() {
   int values[] ={2,3,5,9,0,1,7,5};
   int height = getHeight(SIZE(values));
   int result = minmax(height, 0, 0, true, values, INT_MIN, INT_MAX);
   cout <<"Result : " << result << "\n";
   return 0;
}
