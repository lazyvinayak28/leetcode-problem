class Solution {
public:
    int maxNumberOfBalloons(string text) {
    sort(text.begin(), text.end());

        int countB = 0;
        int countA = 0;
        int countL = 0;
        int countO = 0;
        int countN = 0;

        for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'b') countB++;
        else if (text[i] == 'a') countA++;
        else if (text[i] == 'l') countL++;
        else if (text[i] == 'o') countO++;
        else if (text[i] == 'n') countN++;
        }

        countL = countL / 2;
        countO = countO / 2;

        int ans = countB;
        if (countA < ans) ans = countA;
        if (countL < ans) ans = countL;
        if (countO < ans) ans = countO;
        if (countN < ans) ans = countN;

        return ans;
    }
};

//         int countB = getCount('b');
//         int countA = getCount('a');
//         int countL = getCount('l') / 2;
//           int countO = getCount('o') / 2;
//         int countN = getCount('n');

//         return min({countB, countA, countL, countO, countN});
//     }
// };