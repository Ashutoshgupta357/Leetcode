class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int x = 0, y = 0;

        while (y < typed.size()) {

            if (x < name.size() && name[x] == typed[y]) {
                x++;
                y++;
            }
            else if (y > 0 && typed[y] == typed[y - 1]) {
                y++;
            }
            else {
                return false;
            }
        }

        return x == name.size();
    }
};