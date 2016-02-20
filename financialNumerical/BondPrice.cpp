#include <cmath> 
#include <vector> 
using namespace std;
double bonds price(const vector<double>& coupon times, 
				   const vector<double>& coupon amounts,
				   const vector<double>& principal times, 
				   const vector<double>& principal amounts, 
				   const double& r) {
	double p = 0;
	for (int i=0;i<coupon times.size();i++) {
		p += exp(−r*coupon times[i])*coupon amounts[i]; 
	};
	for (int i=0;i<principal times.size();i++) {
		p += exp(−r*principal times[i])*principal amounts[i];
		};
	return p; 
};