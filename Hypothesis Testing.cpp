#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to calculate mean
double calculateMean(const vector<int>& data) {
	double sum = 0;
	for (int value : data)
		sum += value;
	return sum / data.size();
}

// Function to calculate range
int calculateRange(const vector<int>& data) {
	auto [min_it, max_it] = minmax_element(data.begin(), data.end());
	return *max_it - *min_it;
}

// Function to calculate variance
double calculateVariance(const vector<int>& data) {
	double mean = calculateMean(data);
	double sumSqDiff = 0;
	for (int value : data)
		sumSqDiff += pow(value - mean, 2);
	return sumSqDiff / data.size(); // population variance
}

// Function to calculate standard deviation
double calculateStdDev(const vector<int>& data) {
	return sqrt(calculateVariance(data));
}

// Display function
void displayStats(const vector<int>& data, const string& groupName) {
	cout << "---- " << groupName << " ----" << endl;
	cout << "Range: " << calculateRange(data) << endl;
	cout << "Variance: " << calculateVariance(data) << endl;
	cout << "Standard Deviation: " << calculateStdDev(data) << endl << endl;
}

int main() {
	vector<int> groupA = {6, 8, 7, 5, 6, 9, 7, 8};
	vector<int> groupB = {10, 12, 13, 11, 10, 9, 8, 14};

	displayStats(groupA, "Group A");
	displayStats(groupB, "Group B");
	return 0;
}
