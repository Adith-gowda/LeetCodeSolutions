class Solution {
public:
    bool winnerOfGame(string colors) {
        int cntA = 0, cntB = 0;
        int n = colors.length();
        for (int i = 0; i < n; i++)
        {
            if ((i > 0 && i < n - 1) && (colors[i - 1] == colors[i] && colors[i] == colors[i + 1]))
            {
                if (colors[i] == 'A') cntA++;
                else cntB++;
            }
        }
        if (cntA > cntB) return true;
        return false;
    }
};