

class LRUCache {
public:
    
    class Node
    {
  public:
         Node * next;
         Node * prev;
         int key;
         int val;
        Node(int a,int b){
        key= a;
        val = b;
        next = NULL;
        prev = NULL;
      }
    };
    
    Node * head = new Node(-1,-1);
    Node * tail = new Node(-1,-1);;
    int maxSize;
    unordered_map<int,Node *> m;
    
    LRUCache(int capacity) {
        head->next = tail;
        tail->prev = head;
        maxSize = capacity;
    }
    
    int get(int key) {
        if(m.count(key) == 0)
        {
            return -1;
        }
        else
        {
            
         Node * temp = m[key];
            int ans = temp->val;
         temp->prev->next = temp->next;
         temp->next->prev = temp->prev;
         temp->next = NULL;
         temp->prev = NULL;
         m.erase(key);
         put(key,ans); 
            return ans;
        }
    }
    
    void put(int key, int value) {
        if(m.size()<maxSize)
        {
            if(m.count(key) == 0)
            {
            Node * newNode = new Node(key,value);
            newNode->next  = head->next;
            head->next = newNode;
            newNode->prev =head;
            newNode->next->prev = newNode;
            
            m[key] = newNode;
                
            }
            else
            {
                Node * temp = m[key];
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                temp->next = NULL;
                temp->prev = NULL;
                m.erase(key);
                put(key,value);
            }
            
        }
        else
        {
            if(m.count(key) == 0)
            {
            Node * temp = tail->prev;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->next = NULL;
            temp->prev = NULL;
            m.erase(temp->key);
                put(key,value);
            }
            else
            {
                Node * temp = m[key];
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                temp->next = NULL;
                temp->prev = NULL;
                m.erase(key);
                put(key,value);  
            }
           
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */