class Solution {
public:
    int minimizeXor(int num1, int num2) 
    {
        int result = num1;
        int targetSetBitsCount = __builtin_popcount(num2);
        int setBitsCount = __builtin_popcount(result);
        int currentBit = 0;
        while(setBitsCount < targetSetBitsCount)
        {
            if(!isSet(result, currentBit))
            {
                setBits(result,currentBit);
                setBitsCount++;
            }
            currentBit++;
        }

        while(setBitsCount > targetSetBitsCount)
        {
            if(isSet(result, currentBit))
            {
                unsetBits(result,currentBit);
                setBitsCount--;
            }
            currentBit++;
        }
    return result;
    }

private : 
bool isSet(int x, int bit){return x & (1 << bit);}
void setBits(int &x, int bit) { x |= (1 << bit); }
void unsetBits(int &x, int bit) { x &= ~(1 << bit); }
};