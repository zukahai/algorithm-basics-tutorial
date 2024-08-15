var findMedianSortedArrays = function (nums1, nums2) {
    let nums3 = [];
    let index1 = 0;
    let index2 = 0;
    let m = nums1.length;
    let n = nums2.length;
    while (index1 < m && index2 < n) {
        if (nums1[index1] < nums2[index2]) {
            nums3.push(nums1[index1++]);
        } else {
            nums3.push(nums2[index2++]);
        }
    }
    while (index1 < m)
        nums3.push(nums1[index1++]);
    while (index2 < n)
        nums3.push(nums2[index2++])
    console.log(nums3);
    return ((m + n) % 2 == 1) ? nums3[(Math.floor((m + n) / 2))] : (nums3[(Math.floor((m + n) / 2))] + nums3[(Math.floor((m + n) / 2)) - 1]) / 2;
};

const nums1 = [0, 0];
const nums2 = [0, 0];
console.log(findMedianSortedArrays(nums1, nums2));