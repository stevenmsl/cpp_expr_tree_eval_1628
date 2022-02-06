#include "node.h"

#include <functional>
#include <queue>

using namespace sol1628;

Node::Node(string val) : val(val), left(nullptr), right(nullptr) {}
Node::Node(string val, Node *left, Node *right)
    : val(val), left(left), right(right) {}
int Node::eval()
{
    int result = 0;
    if (val == "*")
        result = left->eval() * right->eval();
    else if (val == "/")
        result = left->eval() / right->eval();
    else if (val == "+")
        result = left->eval() + right->eval();
    else if (val == "-")
        result = left->eval() - right->eval();
    else
        result = stoi(val);

    return result;
}

// Node(string val, Node *left, Node *right);
// int eval();