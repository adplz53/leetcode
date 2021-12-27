// 11. Container With Most Water

int maxArea(int *height, int heightSize)
{
    int *left = height, *right = height + heightSize - 1, area = 0, h, max = 0;
    while (left < right)
    {
        h = (*left < *right) ? *left : *right;
        area = h * (right - left);
        if (area > max)
            max = area;
        while (*left <= h && left < right)
            left++;
        while (*right <= h && left < right)
            right--;
    }
    return max;
}

// Runtime: 76 ms, faster than 78.68% of C online submissions for Container With Most Water.
// Memory Usage: 12 MB, less than 25.56% of C online submissions for Container With Most Water.

// brute-force, TLE gotten
// int maxArea(int* height, int heightSize){
//     int width = heightSize - 1, area = 0, max = 0;
//     for (int i=1; i<heightSize; i++){
//         for (int j=0; i+j<heightSize; j++){
//             area = (height[j] < height[i+j]? height[j]:height[i+j]) * i;
//             if (area > max) max = area;
//         }
//     }
//     return max;
// }