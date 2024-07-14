
struct LinkedListNode {
      int val;
      LinkedListNode *next;
      LinkedListNode () : val(0), next(nullnode) {}
      LinkedListNode (int x) : val(x), next(nullnode) {}
      LinkedListNode (int x, LinkedListNode *next) : val(x), next(next) {}
  };
        
LinkedListNode* reverseLinkedList(LinkedListNode* head) {
        LinkedListNode* curent_node= head;
        LinkedListNode* prev_node = NULL ;
        LinkedListNode* next_node= NULL;
        while(curent_node != NULL){
	    //Before changing the next of curr, store the next node
            next_node=current_node->next;
	   //Now update the next pointer of curr to the prev 
            current_node->next = prev_node;
	   //Update prev as curr and curr as next
            prev_node = current_node;
            current_node = next_node;
        }
        return prev_node;
    }
