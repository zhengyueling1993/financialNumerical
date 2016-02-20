//Estimation of the internal rate of return
#include <cmath>
#include <algorithm>
#include <vector>
#include "fin_recipes.h"

using namespace std;

const double ERROR = -1e30;

double cash_flow_irr(const vector<double>& cflow times, 
						const vector<double>& cflow amounts) {
    if (cflow_times.size()!= cflow_amounts.size()) return ERROR;
    const double ACCURACY = 1.0e-5;
    const int MAX_ITERATIONS = 50;
    double x1=0.0;
    double x2 = 0.2;
    double f1 = cash_flow_pv(cflow_times, cflow_amounts, x1);
    double f2 = cash_flow_pv(cflow_times, cflow_amounts, x2);
    int i;
    for (i=0; i<MAX_ITERATIONS;i++){
         if((f1*f2)<0.0){ break; };
         if(fab(f1)<fab(f2)){
             f1 = cash_flow_pv(cflow_times,cflow_amounts, x1+=1.6*(x1−x2));
         }
         else {
              f2 = cash_flow_pv(cflow_times,cflow_amounts, x2+=1.6*(x2−x1));
         };
    };
    f (f2*f1>0.0) { return ERROR; };
double f = cash flow pv(cflow_times,cflow_amounts, x1); 
double rtb;
double dx=0;
if (f<0.0) {
	rtb = x1;
	dx=x2−x1; 
}
else {
	rtb = x2;
	dx = x1−x2; 
};
for (i=0;i<MAX_ITERATIONS;i++){ 
	dx *= 0.5;
	double x_mid = rtb+dx;
	double f_mid = cash_flow_pv(cflow_times,cflow_amounts, x)_mid);
	if (f mid<=0.0) { rtb = x mid; }
	if ( (fabs(f_mid)<ACCURACY) || (fabs(dx)<ACCURACY) ) return x_mid;
};
	return ERROR; // error. 
};

