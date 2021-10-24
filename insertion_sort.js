function insertionSort(arr) {
  for (let i = 1; i < arr.length; i++) {
    // First, choose the element at index 1
    let current = arr[i];
    let j;

    // Loop from right to left, starting from i-1 to index 0
    for (j = i - 1; j >= 0 && arr[j] > current; j--) {
      // as long as arr[j] is bigger than current
      // move arr[j] to the right at arr[j + 1]
      arr[j + 1] = arr[j];
    }
    // Place the current element at index 0
    // or next to the smaller element
    arr[j + 1] = current;
  }
  return arr;
}

console.log(insertionSort([5, 3, 6, 1, 4]));