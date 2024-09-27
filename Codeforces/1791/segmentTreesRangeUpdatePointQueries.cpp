#include <bits/stdc++.h>
using namespace std;

// Function for Range Update in a Segment Tree array
void update(int segTree[], int idx, int start,int end, int pos, int ele)
{

    // If current node is the leaf node
    if (start == end) {

        // Update segTree[idx]
        segTree[idx] += ele;
    }

    else {

        // Left and right subtree division
        int mid = (start + end) / 2;

        // Check if pos lies in left subtree
        if (pos <= mid) {

            // Search pos in left subtree
            update(segTree, 2 * idx, start, mid, pos, ele);
        }
        else {

            // Search pos in right subtree
            update(segTree, 2 * idx + 1, mid + 1, end,pos, ele);
        }

        // Update Tree[idx]
        segTree[idx] = segTree[2 * idx] + segTree[2 * idx + 1];
    }
}

// Function for finding the sum of all elements in range [0,Right]
int sum(int segTree[], int idx, int start,int end, int qleft, int qright)
{

    // Base case
    if (qleft == start && qright == end)
        return segTree[idx];

    if (qleft > qright)
        return 0;

    // Left and right subtree division
    int mid = (start + end) / 2;

    // It return sum of elements in the range
    return sum(segTree, 2 * idx, start, mid, qleft, min(mid, qright))
        + sum(segTree, 2 * idx + 1, mid + 1, end,max(qleft, mid + 1), qright);
}

// Function to find eleth element
void getElementAtindexele(int segTree[], int ele, int size)
{

    // Print element at index ele
    cout << "Element at " << ele << " is "<< sum(segTree, 1, 0, size - 1, 0, ele) << endl;
}

// Range Update in a Segment Tree from [left,right]
void update_in_range(int segTree[], int Left,int Right, int ele, int size)
{

    // Update arr[l] += X
    update(segTree, 1, 0, size - 1, Left, ele);

    // Update arr[R + 1] += X
    if (Right + 1 < size)
        update(segTree, 1, 0, size - 1, Right + 1, -ele);
}

int main()
{

    // array size
    int size = 7;

    // Segment tree
    int segTree[4 * size + 5] = { 0 };

    // array
    int input[] = { 0, 0,0,0,0,0,0 };

    // Queries array
    vector<vector<int> >Query = { { 1, 0, 4, 100 },
                                  { 2, 2 },
                                  {2,5}};

    // Total queries
    int totalQuery = Query.size();

    // Iterating on all the queries to do Range Update in a Segment Tree
    for (int i = 0; i < totalQuery; i++) {

        // Operate on their respective types of queries
        if (Query[i][0] == 1)
            update_in_range(segTree, Query[i][1],Query[i][2], Query[i][3], size);
        else
            getElementAtindexele(segTree, Query[i][1], size);

    }
}
