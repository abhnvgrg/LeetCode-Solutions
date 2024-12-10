C Solution for "Count Prefixes of a Given String" - Simple and Efficient


The approach is straightforward, using the strncmp function from the C standard library to compare each word with the prefix of the target string s.


How the Code works:

Initialize count: Keeps track of valid prefixes.
Loop Through Each Word:
  Compare words[i] with the first strlen(words[i]) characters of s using strncmp().
  If they match, increment count.

Return Result: Return the total count after processing all words.


Complexity Analysis:
  Time Complexity: O(n * m), where:
    n = wordsSize (number of words).
    m = max length of words[i].
  Space Complexity: O(1), as no extra space is used apart from the counter.
