#include <iostream>
#include <vector>


using namespace std;

vector<int> arr;
int n,k;

int main(void){
	cin >> n >> k;
	int num;
	for(int i = 0; i < n; i++){
		cin >> num;
		arr.push_back(num);
	}
	int answer = 0;
	int end = 0;
	int start = 0;
	int cur_cnt = 0;
	while(end < n){
		if(cur_cnt > k){
			if(arr[start] % 2 != 0){
				cur_cnt--;
			}
			start++;
		}
		else{
			if(arr[end] % 2 != 0){
				cur_cnt++;
			}
			end++;
		}
		if(cur_cnt <= k){
			answer = max(answer,end-start-cur_cnt);
		}
	}
	cout << answer;
	return 0;
}
