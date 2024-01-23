#include "user.h"

class Hash{
    private:
    int hashFunction(User user);
    int max_itens;
    int max_posi;
    int quanty_itens;
    User* structure;

    public:
    Hash(int itensSize, int posiSize);
    ~Hash();
    bool isFull();
    bool isEmpty();
    int lenght();
    void add(User user);
    void remove(User user);
    void find(User& user,bool& finder);
    void print();
};