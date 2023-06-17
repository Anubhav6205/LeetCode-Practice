/**
 * @param {string} s
 * @return {string}
 */
var makeSmallestPalindrome = function(s) {
    let n=s.length;
    let newString="";
    for(let i=0 ; i< s.length ; i ++){
        let first=s.charAt(i);
        let last=s.charAt(n-i-1);
        if(first!==last)
            {
                if(first.charCodeAt(0)>last.charCodeAt(0))
                    {
                        first=last;
                    }
            }
        newString=newString+first;
    }
    
        
    return newString;
    
};