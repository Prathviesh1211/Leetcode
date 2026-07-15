#include <unordered_map>
using namespace std;

class LRUCache {
private:
    class Node {
    public:
        Node* next;
        Node* prev;
        int val;
        int key;
        Node(int key, int val) {
            this->key = key;
            this->val = val;
            next = nullptr;
            prev = nullptr;
        }
    }; // <-- Fixed syntax hierarchy here

public : 
    unordered_map<int, Node*> mp;
    int cap;
    Node* head;
    Node* tail;

    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void remove(Node* n) {
        Node* prevNode = n->prev;
        Node* nextNode = n->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    void insert(Node* n) {
        Node* first = head->next;
        head->next = n;
        n->prev = head;
        n->next = first;
        first->prev = n;
    }

    int get(int key) {
        if (!mp.count(key)) {
            return -1;
        }
        Node* n = mp[key];
        remove(n);
        insert(n);
        return n->val;
    }

    void put(int key, int value) {
        if (mp.count(key)) {
            Node* n = mp[key];
            n->val = value; // Update the value inside the node
            // mp[key] = value; <-- REMOVED: This was breaking compilation because mp stores Node*
            remove(n);
            insert(n);
            return;
        }
        
        if (mp.size() == cap) {
            Node* lru = tail->prev;
            remove(lru);
            mp.erase(lru->key);
            delete lru; // Free memory of evicted node
        }
        
        Node* newNode = new Node(key, value);
        insert(newNode);
        mp[key] = newNode;
    }
    
    // Optional but good practice: Destructor to clean up dummy nodes
    ~LRUCache() {
        // Clean up remaining nodes
        for (auto const& [key, val] : mp) {
            delete val;
        }
        delete head;
        delete tail;
    }
};