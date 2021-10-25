/**
 * Have the function PalindromeCreator(str) take the str parameter being passed and determine
 *  if it is possible to create a palindromic string of minimum length 3 characters by 
 * removing 1 or 2 characters. For example: if str is "abjchba" then you can remove the characters jc to 
 * produce "abhba" which is a palindrome. For this example your program should return the two characters 
 * that were removed with no delimiter and in the order they appear in the string, so jc.
 * If 1 or 2 characters cannot be removed to produce a palindrome, then return the string not possible.
 * If the input string is already a palindrome, your program should return the string palindrome.
 * 
 * The input will only contain lowercase alphabetic characters. Your program should always attempt 
 * to create the longest palindromic substring by removing 1 or 2 characters (see second sample test case as an example).
 * The 2 characters you remove do not have to be adjacent in the string.
 * Examples
 * Input: "mmop"
 * Output: not possible
 * Input: "kjjjhjjj"
 * Output: k
 */


 function PalindromeCreator(str) { 
  
  let isPalindrome = (word) => {
    return word.toLowerCase() === word.split("").reverse().join("").toLowerCase()
  }

  let removeCharAt = (word, index, n=1) => {
    return word.slice(0, index) + word.slice(index+n)
  }

  if(isPalindrome(str)){
    return "palindrome"
  }
  else{
    for(let i=0; i<str.length; i++){
      //Remove only one character and check if it's Palindrome.
      //Remoing only one character will give the longest possible substring
      if((str.length > 3) && (isPalindrome(removeCharAt(str, i)))){
        return str[i]
      }
      if(str.length > 4){
        //Remove 2 character where both of them must not be adjacent
        let strTemp =  removeCharAt(str, i)
        for(let j=0; j<strTemp.length; j++){
          if((strTemp.length > 3) && (isPalindrome(removeCharAt(strTemp, i)))){
            return str[i] + str[i+j+1]
          }
        }
        
      }  
    }
    return "not possible"
  }
}

// Sample run
console.log(PalindromeCreator("kjjjhjjj"));