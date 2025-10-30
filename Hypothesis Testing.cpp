#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
// Given:
	double mu0 = 1000; // Claimed mean
	double x_bar = 980; // Sample mean
	double sigma = 60; // Population standard deviation
	int n = 36; // Sample size

// Calculate test statistic
	double z = (x_bar - mu0) / (sigma / sqrt(n));
	
// Critical value for one-tailed z-test at 5% level
	double z_critical = -1.645; // From z-table for left-tailed test at = 0.05
	
// Output results
	cout << fixed << setprecision(4);
	cout << "Test Statistic (z): " << z << endl;
	cout << "Critical Value (z_critical): " << z_critical << endl;
	
// Conclusion
	if (z < z_critical) {
		cout << "Conclusion: Reject the null hypothesis.\n";
		cout << "Interpretation: The data suggests that the mean lifetime is less than 1000 hours.\n";
	} else {
		cout << "Conclusion: Fail to reject the null hypothesis.\n";
		cout << "Interpretation: There is not enough evidence to say the mean is less than 1000 hours.\n";
	}
	
	return 0;
}
