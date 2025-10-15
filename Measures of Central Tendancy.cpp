/*Measures of Central Tendency: A teacher wants to analyze the
performance of students in a recent examination to understand the overall
class achievement and identify common score trends.Write a program to
calculate the mean, mode, and median, which can be applied to student
scores.*/

#include <iostream>

using namespace std;

//Mean
int size;
void mean(int score[5]){
	float sum = 0;
	for(int i=0; i<5; i++){
			sum+=score[i];
		}
		float mean = sum/5;
		cout<<"Mean = "<<mean<<endl;
	}
	
//Mode
void mode(int score[5]){
	int mode = -1;
	int current = 1;
	int max = 1;
	
	for (int i = 1; i < 5; ++i) {
        if (score[i] == score[i - 1]) {
            ++current;
        }
        else {
            if (current > max) {
                max = current;
                mode = score[i - 1];
            }
            current = 1; 
        }
    }

     if (mode != -1) {
        cout << "Mode = " << mode << endl;
    }
    else {
        cout << "No mode found" << endl;
    }
	
	}
	
//Median
void median(int score[5]){
	for(int pass=0; pass<5-1; pass++){
		for(int sort =0; sort<5-pass-1; sort++){
			if(score[sort]>score[sort+1]){
				int temp = score[sort];
				score[sort] = score[sort+1];
				score[sort+1]=temp;
				}
			}
		}
		
		cout<<"Median = "<<score[2]<<endl;
		
	}

int main(){
	int n = 5;
	int students[n];
	
	cout<<"Enter 5 scores of 5 students"<<endl;
	for(int i=0; i<n; i++){
		cin>>students[i];
		}
	
	mean(students);
	mode(students);
	median(students);
	
	return 0;
	}
