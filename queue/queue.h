typedef int TypeItem;
const int max_itens = 50;

class queue{
    private:
    int first;
    int last;
    TypeItem* structure;

    public:
    queue();
    ~queue();

    bool isFull();
    bool isEmpty();

    void push(TypeItem item);
    TypeItem pop();

    void printQueue();
};