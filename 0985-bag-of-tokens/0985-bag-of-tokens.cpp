class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end()); // Sort the tokens in increasing order
        int score = 0, maxScore = 0;
        int i = 0, j = tokens.size() - 1;
        
        while (i <= j) {
            if (power >= tokens[i]) { // If we have enough power to play the token face-up
                power -= tokens[i++]; // Play the token face-up
                score++; // Increase score
                maxScore = max(maxScore, score); // Update max score if current score is higher
            } else if (score > 0) { // If not enough power but have score to play face-down
                power += tokens[j--]; // Play the token face-down
                score--; // Decrease score
            } else {
                // If not enough power to play face-up and no score to play face-down, break
                break;
            }
        }
        
        return maxScore;
    }
};