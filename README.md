# Intersection of Two Linked Lists

LeetCode Q # 160.

Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
For example, the following two linked lists begin to intersect at node c1:

The test cases are generated such that there are no cycles anywhere in the entire linked structure.</br>

>Note that the linked lists must retain their original structure after the function returns.

Custom Judge:

The inputs to the judge are given as follows (your program is not given these inputs):</br>

intersectVal - The value of the node where the intersection occurs. This is 0 if there is no intersected node.</br>
listA - The first linked list.</br>
listB - The second linked list.</br>
skipA - The number of nodes to skip ahead in listA (starting from the head) to get to the intersected node.</br>
skipB - The number of nodes to skip ahead in listB (starting from the head) to get to the intersected node.</br>
The judge will then create the linked structure based on these inputs and pass the two heads, headA and headB to your program. If you correctly return the intersected node, then your solution will be accepted.</br>

Example 1:

<div align = "center">

  ![image](https://github.com/xo-azeem/Intersection-of-Two-Linked-Lists-LeetCode/assets/171427226/781f4d47-f16d-4119-8152-7b02684afb0b)

</div>

Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3</br>
Output: Intersected at '8'</br>
Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).</br>
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.</br>
- Note that the intersected node's value is not 1 because the nodes with value 1 in A and B (2nd node in A and 3rd node in B) are different node references. In other words, they point to two different locations in memory, while the nodes with value 8 in A and B (3rd node in A and 4th node in B) point to the same location in memory.

Example 2:

<div align = "center">

  ![image](https://github.com/xo-azeem/Intersection-of-Two-Linked-Lists-LeetCode/assets/171427226/7a8d9c3d-a54f-4668-9eaa-05515f819c2d)

</div>

>Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1</br>
>Output: Intersected at '2'</br>
>Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).</br>
>From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.

Example 3:

<div align = "center">

  ![image](https://github.com/xo-azeem/Intersection-of-Two-Linked-Lists-LeetCode/assets/171427226/c2753b0c-0c6b-431f-ade8-59cba85df949)

</div>

>Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2</br>
>Output: No intersection</br>
>Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values. The two lists do not intersect, so return null.

My Solution Analysis:

<div align = "center">

  ![image](https://github.com/xo-azeem/Intersection-of-Two-Linked-Lists-LeetCode/assets/171427226/ba69268d-4841-413f-9460-a0499017f2e8)

  Time complexity: O(m + n).</br>Space complexity: O(1).
</div>
