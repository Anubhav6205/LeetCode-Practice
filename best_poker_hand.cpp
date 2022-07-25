/*You are given an integer array ranks and a character array suits. You have 5 cards where the ith card has a rank of ranks[i] and a suit of suits[i].

The following are the types of poker hands you can make from best to worst:

"Flush": Five cards of the same suit.
"Three of a Kind": Three cards of the same rank.
"Pair": Two cards of the same rank.
"High Card": Any single card.
Return a string representing the best type of poker hand you can make with the given cards.

Note that the return values are case-sensitive.*/
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        if(suits[0]==suits[1] &&suits[0]==suits[2] &&suits[0]==suits[3] &&suits[0]==suits[4] )
        {
            return "Flush";
        }
        unordered_map<int,int>mp;
        int i;
        int best=0;
        for(i=0;i<ranks.size();i++)
        {
            mp[ranks[i]]++;
            best=max(mp[ranks[i]],best);
         
        }
        if(best>=3)
        {
            return "Three of a Kind";
        }
        else if(best==2)
        {
            return "Pair";
        }
        return "High Card";
        
    }
};