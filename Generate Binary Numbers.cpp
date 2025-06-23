/*
Given a number n. The task is to generate all binary numbers with decimal values from 1 to n.
*/

vector<string> generate(int n) {
    // Your code here
    vector<string> result;
    queue<string> q;

    q.push("1");

    while (n--) {
        string curr = q.front();
        q.pop();

        result.push_back(curr);

        // Push next two binary numbers
        q.push(curr + "0");
        q.push(curr + "1");
    }

    return result;
}
