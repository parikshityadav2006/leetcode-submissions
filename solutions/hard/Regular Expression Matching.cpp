// Title: Regular Expression Matching
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/regular-expression-matching/

        if (textIndex < textLength) {
            if (token.letter == '.') charsAvailable = textLength - textIndex;               // 
            '.' can cross runs
            else if (text[textIndex] == token.letter) charsAvailable = sameLetterRunLength
            [textIndex];  // letters stay inside one run
        }

        int maxCharsToTake = token.canTakeMore ? charsAvailable : token.minCount;
        for (int charsToTake = token.minCount; charsToTake <= maxCharsToTake && charsToTake <= 
        charsAvailable; charsToTake++)
            if (canMatch(tokenIndex + 1, textIndex + charsToTake)) return cached = 1;
        return cached = 0;
    }

public:
    bool isMatch(string inputText, string pattern) {
        text = inputText;
        textLength = text.size();

        // run-length info for text, stored as "run remaining" per position
        sameLetterRunLength.assign(textLength + 1, 0);
        for (int i = textLength - 1; i >= 0; i--)
            sameLetterRunLength[i] = (i + 1 < textLength && text[i] == text[i + 1]) ? 
            sameLetterRunLength[i + 1] + 1 : 1;

        patternTokens = encodePattern(pattern);
        cache.assign(patternTokens.size(), vector<int>(textLength + 1, -1));
        return canMatch(0, 0);
    }
};
