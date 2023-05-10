/**
 * @param {number[]} nums
 */
var NumArray = function(nums) {
    this.sumsOfPartialArray = new Array(nums.length + 1).fill(0);
    // this will give us an array of sums of all the items to the right of a value
    for (let i = 0; i < nums.length; i++) {
        this.sumsOfPartialArray[i + 1] = this.sumsOfPartialArray[i] + nums[i];
    }
};
/** 
 * @param {number} left 
 * @param {number} right
 * @return {number}
 */

NumArray.prototype.sumRange = function(left, right) {
    return this.sumsOfPartialArray[right + 1] - this.sumsOfPartialArray[left];
};

/** 
 * Your NumArray object will be instantiated and called as such:
 * var obj = new NumArray(nums)
 * var param_1 = obj.sumRange(left,right)
 */
