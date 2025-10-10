/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if (x < 0) return false; // negative numbers are not palindrome

    let rev = 0;
    let num = x;

    while (x > 0) {
        let rem = x % 10;
        rev = rev * 10 + rem;
        x = Math.floor(x / 10); // floor division
    }

    return rev === num;
};
