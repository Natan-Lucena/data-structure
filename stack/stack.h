typedef int TypeItem;
const int max_items = 100;

class stack {
    private:
        int size;
        TypeItem* structure;
    public:
    stack();// starta a stack
    ~stack();// destroi

    bool isFull();
    bool isEmpty();

    void push(TypeItem item);
    TypeItem pop();

    void printStack();

    int lenght();
};