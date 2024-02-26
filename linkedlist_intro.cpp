#include <bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data ;
    Node* next ;

    public:
    Node(int data1 , Node* next1)
    {
        data = data1 ;
        next = next1 ;
    }
    Node(int data1)
    {
        data = data1 ;
        next = nullptr ;
    }
};

Node* convertArr2ll(vector<int>&arr)
{
    Node* head = new Node(arr[0]) ;
    Node* mover  = head ;

    for(int i = 1 ; i < arr.size()  ;i++)
    {
        Node* temp = new Node(arr[i]) ;
        mover->next = temp ;
        mover = temp ;//mover = mover->next ;

    }
    return head ;
}

int lengthofll(Node* head  )
{
    int cnt = 0 ;
    Node* temp = head ;
    while(temp)
{
    temp = temp->next ;
    cnt++ ;
}
 return cnt;
} 

int check(Node* head , int val)
{
    Node* temp = head ;
    while(temp)
    {
       
        if (temp->data == val)
        return 1 ;
        temp = temp->next ;
    }
    return 0 ;

}
int main() {
  vector<int>arr = {200,5 ,6 , 8} ;
  Node* y = new Node(arr[0],nullptr);
 // cout<<y->data ;

  Node* head = convertArr2ll(arr);

cout<<lengthofll(head)<<endl;
cout<<check(head,200)<<"  "<<endl;

}
