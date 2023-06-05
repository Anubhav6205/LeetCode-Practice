/**
 * @param {number[]} prices
 * @param {number} money
 * @return {number}
 */
var buyChoco = function(prices, money) {
    prices.sort((a,b)=>a-b);
    let price=prices[0]+prices[1];
    if(price>money)
        {
            return money;
        }
    else
        {
            return money-price;
        }
    
};