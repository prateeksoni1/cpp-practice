#include<bits/stdc++.h>
#define N 10
using namespace std;

class Node {

    public:
      int val;
      Node* next;

      Node(int x) {
        val = x;
      }
};

int main() {
  vector<Node*> arr(N, NULL);

  int n;
  cin >> n;
  while(n--) {
    int x;
    cin >> x;

    int index = x % N;
    if (arr[index] == NULL) {
      Node* root = new Node(x);
      arr[index] = root;
    } else {
      Node* temp = arr[index];
      while(temp->next != NULL) {
        temp = temp->next;
      }
      Node* newNode = new Node(x);
      temp->next = newNode;
    }

    for(int i=0; i<N; i++) {
      if(arr[i] == NULL) {
        cout << "NULL" << endl;
      } else {
        Node* temp = arr[i];
        while(temp) {
          cout << temp->val << "->";
          temp = temp->next;
        }
        cout << "NULL\n";
      }
    }
  }

}