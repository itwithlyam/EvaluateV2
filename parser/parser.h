#pragma once

#include <vector>
#include "../lexer/lexer.h"
using namespace std;

class Node {
  vector<Node> left;
  vector<Node> right;

  Node(vector<Node> n, bool l);
  Node(vector<Node> l, vector<Node> r);
};

vector<Node> parse(vector<Token>);