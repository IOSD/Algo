// https://www.spoj.com/problems/AMR12G/
#include <bits/stdc++.h>
using namespace std;

struct comparator {
	bool operator()(int a, int b) {
		return a<b?false:true;
	}
};

int main() {
	int T;
	cin>>T;
	while(T--) {
		int N, M, K;
		cin>>N>>M>>K;
		
		priority_queue<int, vector<int>, comparator> state, temp;
		
		int sum = 0;
		for(int i = 0 ; i < N ; i++){
			for(int j = 0 ; j < M ; j++){
				char inp;
				cin>>inp;
				if(inp == '*'){
					sum++;
				}
			}
			state.push(sum);
            sum = 0;
		}

        while(K--) {
            if(temp.empty()) {
                int e = state.top();
                temp.push(abs(M-e));
                state.pop();
            }
            else if(temp.top() >= state.top()) {
                int e = state.top();
                temp.push(abs(M-e));
                state.pop();
            }
            else{
                int e = temp.top();
                state.push(abs(M-e));
                temp.pop();
            }

            if(state.empty()) {
                state.swap(temp);
            }
        }

        sum = 0;
        while(!state.empty()) {
            sum += state.top();
            state.pop();
        }
		
        while(!temp.empty()) {
            sum += temp.top();
            temp.pop();
        }
        cout<<sum<<endl;
	}
	return 0;
}
