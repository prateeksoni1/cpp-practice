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

	//TO SELECT NODES
	queue<int> q;

	//TO CHECK VISITED
	int visited[] = {0, 0, 0, 0, 0};

	//TAKING NODE 0 AS STARTING NODE
	q.push(0);
	visited[0] = 1;
	

	int node = q.front();
	cout << node << " ";
	q.pop();

	while (true) {
		for(int i=0; i<5; i++) {
			if (givenGraph[node][i] == 1 && visited[i] == 0) {
				//VISIT THIS NODE
				q.push(i);
				visited[i] = 1;
				
			}
		}

		if (q.empty()) {
			//WE GOT THE ANSWER
			break;
		} else {
			node = q.front();
			cout << node << " ";
			q.pop();
		}
	}

}