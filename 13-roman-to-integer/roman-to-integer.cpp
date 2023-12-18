class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (int increment = 0; increment < s.length(); increment++)
        {
            switch (s[increment])
            {
            case 'I':
                total += 1;
                break;
            case 'V':
                if ((increment > 0) && (s[increment-1] == 'I'))
                {
                    total += 3;
                }
                else
                {
                    total+=5;
                }
                break;
            case 'X':
                if ((increment > 0) && (s[increment-1] == 'I'))
                {
                    total += 8;
                }
                else
                {
                    total+=10;
                }
                break;
            case 'L':
                if ((increment > 0) && (s[increment-1] == 'X'))
                {
                    total += 30;
                }
                else
                {
                    total+=50;
                }
                break;
            case 'C':
                if ((increment > 0) && (s[increment-1] == 'X'))
                {
                    total += 80;
                }
                else
                {
                    total+=100;
                }
                break;
            case 'D':
                if ((increment > 0) && (s[increment-1] == 'C'))
                {
                    total += 300;
                }
                else
                {
                    total+=500;
                }
                break;
            case 'M':
                if ((increment > 0) && (s[increment-1] == 'C'))
                {
                    total += 800;
                }
                else
                {
                    total+=1000;
                }
                break;
            }
        }

        return total;
    }
};