#include <bits/stdc++.h>
using namespace std;

const int N = 5005;
vector<int> tree[N];  // Adjacency list for the tree
bool vis[N];          // Visited array for DFS
set<int> values[N];   // Set to store values for each node

// Function to perform DFS and find the path from u to v
void dfs(int src, int target, vector<int> &path) {
    vis[src] = true; // Mark the current node as visited
    path.push_back(src); // Add the current node to the path

    // Check if we have reached the target node
    if (src == target) {
        return; // Exit if the target is found
    }

    // Explore all children of the current node
    for (int child : tree[src]) {
        if (!vis[child]) { // If the child node is not visited
            dfs(child, target, path); // Recursive DFS call
            // If the target is found during the recursion, exit the function
            if (path.back() == target) {
                return; 
            }
        }
    }

    path.pop_back(); // Backtrack if the target is not found
}

// Find the k-th smallest value along the path from u to v
int find_kth_smallest(int u, int v, int k) {
    vector<int> path;
    memset(vis, false, sizeof(vis)); // Reset visited array for DFS
    dfs(u, v, path); // Find the path from u to v

    if (path.empty() || path.back() != v) {
        return -1; // No path found
    }

    vector<int> all_values; // Collect all values along the path
    for (int node : path) {
        all_values.insert(all_values.end(), values[node].begin(), values[node].end());
    }

    // Sort the collected values
    sort(all_values.begin(), all_values.end());

    // Check if k-th smallest exists
    if (k > all_values.size()) {
        return -1; // k-th smallest does not exist
    } else {
        return all_values[k - 1]; // Return the k-th smallest value
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // Build the tree using adjacency list
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--) {
        string type;
        int u, x;
        cin >> type;

        if (type == "insert") {
            cin >> u >> x;
            values[u].insert(x);  // Insert value into node u
        } 
        else if (type == "delete") {
            cin >> u >> x;
            auto it = values[u].find(x);
            if (it != values[u].end()) {
                values[u].erase(it);  // Delete value x from node u if it exists
            }
        } 
        else if (type == "find") {
            int v, k;
            cin >> u >> v >> k; // Read target node v and k
            int result = find_kth_smallest(u, v, k); // Find the k-th smallest value
            cout << result << "\n"; // Output the result
        }
    }

    return 0;
}