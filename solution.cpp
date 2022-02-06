#include "solution.h"

#include <functional>
#include <stack>
#include <unordered_set>
using namespace sol1628;
using namespace std;

/* takeaways
   - eval method on the node class is simple:
     - looking at the left and the right for
       operands and apply operator on them
     - eval doesn't rely on any outsider
       to provide the logic of traversing
       the tree; it's built-in.
   - you can keep adding new operators
     on Node class without affecting
     the implementation of the eval
     - those operators might traverse
       the tree differently
*/

Node *Solution::build(vector<string> input)
{
    stack<Node *> t;
    unordered_set<string> ops{"+", "-", "*", "/"};

    for (const auto s : input)
    {
        if (ops.count(s) > 0)
        {
            auto right = t.top();
            t.pop();
            auto left = t.top();
            t.pop();
            t.push(new Node(s, left, right));
        }
        else
            t.push(new Node(s));
    }

    return t.top();
}
