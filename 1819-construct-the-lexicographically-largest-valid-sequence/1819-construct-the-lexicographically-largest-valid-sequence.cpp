class Solution {
public:
    vector<int> constructDistancedSequence(int n) 
    {
        vector<int> resultSequence(n*2-1,0);
        vector<bool> isNumberUsed(n+1,false);
        findLexicographicallyLargestSequence(0,resultSequence,isNumberUsed,n);
        return resultSequence;
    }

private:
    bool findLexicographicallyLargestSequence(int currIndex, vector<int>& resultSeq ,vector<bool>& isNumberUsed ,int n)
    {
        if(currIndex == resultSeq.size())
        {
            return true;
        }

        if (resultSeq[currIndex] != 0)
        {
            return findLexicographicallyLargestSequence(currIndex+1, resultSeq, isNumberUsed, n);
        }

        for(int numToPlace = n; numToPlace >= 1;numToPlace--)
        {
            if(isNumberUsed[numToPlace]) continue;

            isNumberUsed[numToPlace] = true;
            resultSeq[currIndex] = numToPlace;

            if (numToPlace == 1)
            {
                if(findLexicographicallyLargestSequence(currIndex + 1, resultSeq,  isNumberUsed, n))
                {
                    return true;
                }
            }
            else if (currIndex + numToPlace < resultSeq.size() && 
                     resultSeq[currIndex + numToPlace] == 0)
                     {
                        resultSeq[numToPlace + currIndex] = numToPlace;
                        if(findLexicographicallyLargestSequence(currIndex + 1, resultSeq,isNumberUsed,n))
                        {
                            return true;
                        }
                        resultSeq[currIndex + numToPlace] = 0;
                     }

            resultSeq[currIndex] = 0;
            isNumberUsed[numToPlace] = false;
        }
        return false;
    }
};