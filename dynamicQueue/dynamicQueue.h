typedef int TypeItem;
const int max_itens = 50;

class Node {
    public:
    TypeItem value;
    Node* next;
};

class dynamicQueue{
    private:
    Node* first;
    Node* last;

    public:
    dynamicQueue();
    ~dynamicQueue();

    bool isFull();
    bool isEmpty();

    void push(TypeItem item);
    TypeItem pop();

    void printQueue();
};