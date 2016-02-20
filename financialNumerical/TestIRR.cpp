//Test for uniqueness of IRR
#include <cmath>
#include <vector>
using namespace std;

inline int sgn(const double& r){
    if (r>=0){
        return 1;
    }
    else{
        return -1;
    };
}；

bool cash_flow_unique_irr(const vector<double>& cflow_times,
        const vector<double>& cflow_amounts){
     int sign_changes = 0;
     for (int t = 1;t < cflow_times.size();++t){
         if (sgn(cflow amounts[t−1]) !=sgn(cflow amounts[t])) sign changes++;
     };
     if(sign_changes == 0)return false;
     if(sign_changes == 1)return true;

     double A = cflow_amounts[0];
     sign_changes =0;
         for(int t = 1;t<cflow_times.size();++t){
              if (sgn(A) != sgn(A+=cflow amounts[t])) sign changes++;
         };
    if(sign_changes<=1)return true;
    return false;
}

