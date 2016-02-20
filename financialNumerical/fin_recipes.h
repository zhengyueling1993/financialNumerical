#include <vector>
using namespace std;

double cash_flow_pv (const vector<double>& cflow_times,
          const vector<double>& cflow_amounts, double r);

double cash_flow_pv_discrete (const vector<double>& cflow_times,
             const vector<double>& cflow_amounts, double r)

double cash_flow_irr(const vector<double>& cflow_times,
                  const vector<double>& cflow_amounts);
bool cash_flow_unique_irr(const vector<double>& cflow_times,
                      const vector<double>& cflow_amounts);
