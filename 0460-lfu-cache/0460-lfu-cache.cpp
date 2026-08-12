class LFUCache {
public:

    class Node {
    public:
        int key;
        int val;
        int freq;
        Node* next;
        Node* prev;

        Node(int _key, int _val) {
            key = _key;
            val = _val;
            freq = 1;
            next = NULL;
            prev = NULL;
        }
    };

    int cap;
    int minFreq;

    // key -> node
    unordered_map<int, Node*> keyMap;

    // freq -> list of nodes
    unordered_map<int, list<Node*>> freqMap;

    LFUCache(int capacity) {
        cap = capacity;
        minFreq = 0;
    }

    void removeNode(Node* node) {
        freqMap[node->freq].remove(node);
    }

    void addNode(Node* node) {
        freqMap[node->freq].push_front(node);
    }

    void increaseFreq(Node* node) {
        int oldFreq = node->freq;

        removeNode(node);

        // If this was the last node with minimum frequency
        if (oldFreq == minFreq && freqMap[oldFreq].empty()) {
            minFreq++;
        }

        node->freq++;

        addNode(node);
    }

    int get(int key) {

        if (keyMap.find(key) == keyMap.end()) {
            return -1;
        }

        Node* node = keyMap[key];

        // Increase frequency
        increaseFreq(node);

        return node->val;
    }

    void put(int key, int value) {

        if (cap == 0)
            return;

        // Key already exists
        if (keyMap.find(key) != keyMap.end()) {

            Node* node = keyMap[key];

            node->val = value;

            increaseFreq(node);

            return;
        }

        // Capacity reached
        if (keyMap.size() == cap) {

            // LFU frequency
            auto& nodes = freqMap[minFreq];

            // Last node = least recently used among LFU nodes
            Node* lruNode = nodes.back();

            nodes.pop_back();

            keyMap.erase(lruNode->key);

            delete lruNode;
        }

        // Insert new node
        Node* newNode = new Node(key, value);

        keyMap[key] = newNode;

        minFreq = 1;

        addNode(newNode);
    }
};