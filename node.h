#ifndef NODE_H
#define NODE_H

#include <vector>
#include <string>
#include <cinttypes>
using namespace std;

namespace sol1628
{
    class Node
    {
    private:
        string val;
        Node *left;
        Node *right;

    public:
        Node(string val);
        Node(string val, Node *left, Node *right);
        int eval();
    };

}
#endif