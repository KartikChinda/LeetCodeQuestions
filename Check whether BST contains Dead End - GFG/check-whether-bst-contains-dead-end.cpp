// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}




int getCountOfNode(Node *root, int l, int h)
{

    if (!root) return 0;


    if (root->data == h && root->data == l)
        return 1;

    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

        
     cout<<isDeadEnd(root);
     cout<<endl;
    }
}

// } Driver Code Ends


/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */
// void util(Node* root, bool &flag, int s, int e){
//     if(!root) return;
//     if(!flag) return;
//     if(s>=e){
//         flag = true;
//         return;
//     }
//     if(!root->left && !root->right){
//         if(s == e){
//             flag = true;
//             return;
//         }
//     }
//     util(root->left, flag, s, (root->data)-1);
//     util(root->right, flag, (root->data)+1, e);

bool solve(Node *root,int min,int max)
{
    if(!root) return false;
    if(min==max) return true;
    return solve(root->left,min,root->data-1)||solve(root->right,root->data+1,max);
}



bool isDeadEnd(Node *root)
{
    //Your code here
    // bool flag = false;
    // int s = INT_MIN;
    // int e = INT_MAX;
    
    // util(root, flag, s, e);
    // return flag;
    
    return solve(root,1,INT_MAX);
}