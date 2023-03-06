#include <iostream>
#include <string.h>
#include "Node.h"
#include "Skiplist.h"

int main(){
    srand((unsigned)time(0));
    Skiplist list(3,0.5);//最大为4层，概率0.5
    list.insertNode(3);
    list.insertNode(6);
    list.insertNode(2);
    list.insertNode(8);
    list.insertNode(22);
    list.insertNode(15);
    list.insertNode(33);

    list.displayList();

    list.deleteNode(15);

    list.displayList();

    list.searchNode(20);

    list.searchNode(22);

    return 0;
}





