#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    struct Node* next;
} Node;

typedef struct HashTable {
    int size;
    Node** table;
} HashTable;

Node* createNode(int key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;
    return newNode;
}

HashTable* createHashTable(int size) {
    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
    ht->size = size;
    ht->table = (Node**)malloc(sizeof(Node*) * size);

    for (int i = 0; i < size; i++) {
        ht->table[i] = NULL;
    }

    return ht;
}

int hashFunction(int key, int size) {
    return (key < 0 ? -key : key) % size;
}

void insert(HashTable* ht, int key) {
    int index = hashFunction(key, ht->size);
    Node* newNode = createNode(key);

    if (ht->table[index] == NULL) {
        ht->table[index] = newNode;
    }
    else {
        Node* curr = ht->table[index];
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

int search(HashTable* ht, int key) {
    int index = hashFunction(key, ht->size);
    Node* curr = ht->table[index];

    while (curr != NULL) {
        if (curr->key == key) {
            return 1;
        }
        curr = curr->next;
    }

    return 0;
}

void freeHashTable(HashTable* ht) {
    for (int i = 0; i < ht->size; i++) {
        Node* curr = ht->table[i];
        while (curr != NULL) {
            Node* temp = curr;
            curr = curr->next;
            free(temp);
        }
    }
    free(ht->table);
    free(ht);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d", &N);

        HashTable* ht = createHashTable(N);

        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            insert(ht, num);
        }

        scanf("%d", &M);

        for (int i = 0; i < M; i++) {
            int num;
            scanf("%d", &num);
            int result = search(ht, num);
            printf("%d\n", result);
        }

        freeHashTable(ht);
    }

    return 0;
}

