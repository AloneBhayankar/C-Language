// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.

// Output: Answer: (ii) False. 
//Arrays in C are 0-indexed, so:
// S[0] → 1st element
// S[1] → 2nd
// S[2] → 3rd
// S[3] → 4th element
// *(S + 3) = value at index 3 = S[3] (the 4th element) 