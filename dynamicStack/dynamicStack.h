typedef int TypeItem;
const int max_items = 20;

struct Node {
    TypeItem value;
    Node* next;
};

class dynamicStack {
    private:
        Node* NodeFirst;
    public:
        dynamicStack();
        ~dynamicStack();

        bool isEmpty();
        bool isFull();

        void push(TypeItem item);
        TypeItem pop();
        void printDynamicStack();

};