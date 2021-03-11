#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    struct Node* head=NULL;
    if(head_A==NULL&&head_B==NULL)
    {
        return NULL;
    }
    if(head_A!=NULL&&head_B!=NULL)
    {
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
        if(head_A->data<=head_B->data)
        {
            newnode->data=head_A->data;
            newnode->next=NULL;
            head=newnode;
            head_A=head_A->next;
        }
        else
        {
            newnode->data=head_B->data;
            newnode->next=NULL;
            head=newnode;
            head_B=head_B->next;
        }
    }
    else if(head_A==NULL)
    {
        return head_B;
    }
    else
    {
        return head_A;
    }
    struct Node* temp=head;
    while(head_A!=NULL&&head_B!=NULL)
    {
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
        if(head_A->data<=head_B->data)
        {
            newnode->data=head_A->data;
            newnode->next=NULL;
            head_A=head_A->next;
        }
        else
        {
            newnode->data=head_B->data;
            newnode->next=NULL;
            head_B=head_B->next;
        }
        temp->next=newnode;
        temp=temp->next;
    }
    if(head_A!=NULL)
    {
        temp->next=head_A;
    }
    if(head_B!=NULL)
    {
        temp->next=head_B;
    }
    return head;
}  