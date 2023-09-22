
class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* pre = NULL;
        Node* curr = head;
        Node* temp = head;
        while(temp!=NULL){
            
            if(temp->data==9 && curr != NULL && curr->data !=9){
                pre = curr;
                curr = temp;
            }
           else if(temp->data==9 && curr != NULL && curr->data ==9){
               
           }
           else{
               curr = temp;
           }
           temp = temp->next;
        }
        if(curr->data != 9 ){
            curr->data = (curr->data)+1;
        }
        else if(pre!=NULL && curr->data == 9){
            Node* newvalue = curr;
            while(newvalue!=NULL){
                newvalue->data = 0;
                newvalue = newvalue->next;
            }
            pre->data = pre->data +1;
            
        }
        else if(pre==NULL && curr->data == 9){
            Node* newnode = new Node(1);
            newnode -> next = head;
            head = newnode;
              Node* newvalue = curr;
            while(newvalue!=NULL){
                newvalue->data = 0;
                newvalue = newvalue->next;
            }
            
            
        }
        return head;
        
    } };
