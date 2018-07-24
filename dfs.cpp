#include<bits/stdc++.h>
using namespace std;

/*
givenGraph: 
  0 1 2 3 4 	
0 0 0 1 1 0
1 1 0 0 0 0
2 0 1 0 0 0
3 0 0 0 0 1	
4 1 0 0 0 0

*/

int main() {

	int givenGraph[][5] = {
		{0, 0, 1, 1, 0},
		{1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0},
		{0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0}
	};

	stack<int> s;
	int visited[] = {0, 0, 0, 0, 0};
	
	//TAKING 0 AS STARTING NODE
	visited[0] = 1;
	cout << 0 << " ";
	int node = 0;

	while(true) {

		 

		int flag = 0;
		for (int i=0; i<5; i++) {
			if (givenGraph[node][i] == 1 && visited[i] == 0) {
				flag = 1;
				visited[i] = 1;
				s.push(node);
				node = i;
				cout << i << " ";
				break;
			}
		}

		if (s.empty()) {
			break;
		}

		if (flag == 0) {
			node = s.top();
			s.pop();
		} else {
			continue;
		}

	}

}