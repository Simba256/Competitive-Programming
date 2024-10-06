#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);
#define nl cout << "\n";
#define tcs    \
  int TTTT;    \
  cin >> TTTT; \
  for (int T = 1; T <= TTTT; T++)
#define MOD 998244353

// Node structure for the Trie
struct TrieNode {
  unordered_map<char, TrieNode*> children;
  bool isEndOfWord;

  TrieNode() : isEndOfWord(false) {}
};

// Trie class
class Trie {
 private:
  TrieNode* root;

 public:
  Trie() { root = new TrieNode(); }

  // Function to add a word to the Trie
  void addWord(const string& word) {
    TrieNode* currentNode = root;
    for (char ch : word) {
      // If a '?' node exists, skip adding individual children
      if (currentNode->children.find('?') != currentNode->children.end()) {
        currentNode = currentNode->children['?'];
      }
      // If a new character is found, add a new node
      else if (currentNode->children.find(ch) == currentNode->children.end()) {
        currentNode->children[ch] = new TrieNode();
        currentNode = currentNode->children[ch];
      }
      // Move to the next node if character exists
      else {
        currentNode = currentNode->children[ch];
      }
    }
    // Mark the end of the word
    currentNode->isEndOfWord = true;
  }

  // Recursive function to count the total number of nodes in the Trie
  int countNodes(TrieNode* node) const {
    if (!node) return 0;

    int count = 1;  // Count the current node

    // Check if the node has a '?' child
    if (node->children.find('?') != node->children.end()) {
      // Treat as if all 26 alphabetic children exist
      count += 26;  // Add 26 for all possible alphabetic characters
      count--;      // Subtract the '?' node itself, as it replaces the others
      count += countNodes(node->children['?']);  // Count the '?' node's children
    } else {
      // If no '?' node, count all actual children
      for (auto& child : node->children) {
        count += countNodes(child.second);
      }
    }

    return count % MOD;  // Return the count mod 998244353
  }

  // Function to get the total number of nodes
  int getTotalNodes() const { return countNodes(root) % MOD; }
};

void solve() {
  Trie trie;
  int n;
  cin >> n;  // Number of words to insert
  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;
    trie.addWord(word);  // Add each word to the Trie
  }
  cout << trie.getTotalNodes();  // Output total number of nodes in the Trie mod 998244353
}

int main() {
  fastio;
#ifdef LOCAL
  freopen(
      "E:/Basim/Programming/Competitive "
      "Programming/repo/Competitive-Programming/MetaHackerCup/2024/Round 1/in.txt",
      "r", stdin);
  freopen(
      "E:/Basim/Programming/Competitive "
      "Programming/repo/Competitive-Programming/MetaHackerCup/2024/Round 1/out.txt",
      "w+", stdout);
#endif
  tcs {
    cout << "Case #" << T << ": ";
    solve();
    nl;
  }
  return 0;
}
