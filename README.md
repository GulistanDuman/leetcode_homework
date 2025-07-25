
# 🚀 C++ Algorithm Practice – Multiple Problems

This repository contains simple and efficient C++ implementations of commonly asked algorithm problems. Each problem is solved using optimal techniques and includes time and space complexity analysis.

---

## 📘 Contents

- [Q1: Remove Duplicates from Sorted Array](#q1-remove-duplicates-from-sorted-array)
- [Q2: Merge Two Sorted Arrays In-Place](#q2-merge-two-sorted-arrays-in-place)
- [Q3: Pascal's Triangle Generator](#q3-pascals-triangle-generator)
- [Q4: Array Sign – Product Sign Function](#q4-array-sign--product-sign-function)
- [Q5: Event Logger and Timestamp Tracker](#q5-event-logger-and-timestamp-tracker)

---

## Q1: 🔁 Remove Duplicates from Sorted Array

This project provides a simple and efficient C++ implementation for removing duplicate elements from a **sorted array** in-place.

### 📌 Problem Statement

Given a sorted array, remove the duplicate elements in-place such that each unique element appears only once. The function should return the new length of the array with unique elements. You must not use extra space for another array — modify the input array in-place with O(1) extra memory.

### 🧠 Approach

This implementation uses a **two-pointer technique**:

- `i` keeps track of the position of the last unique element.
- `j` scans through the array.
- If `arr[j] != arr[i]`, we found a new unique element:
  - Increment `i`
  - Move `arr[j]` to `arr[i]`
- Return `i + 1` as the new length of the modified array.

### 📊 Complexity

- ✅ Time Complexity: **O(n)**
- ✅ Space Complexity: **O(1)**

---

## Q2: 🔀 Merge Two Sorted Arrays In-Place

This project contains a C++ implementation to **merge two sorted arrays**, `nums1` and `nums2`, into a single sorted array, in-place. The result is stored in `nums1`, which has enough extra space to hold elements from both arrays.

### 📌 Problem Statement

You are given two sorted integer arrays:

- `nums1` with size `m + n`, where the first `m` elements are valid, and the remaining `n` elements are zero placeholders.
- `nums2` with exactly `n` elements.

Merge `nums2` into `nums1` as one **sorted array**, in-place without using any extra memory.

### 🧠 Approach

We use a **three-pointer technique** starting from the **end** of the arrays:

- Pointer `i` starts at `m - 1` (last valid element in `nums1`)
- Pointer `j` starts at `n - 1` (last element in `nums2`)
- Pointer `k` starts at `m + n - 1` (last index of `nums1`)

We compare elements from the back and place the larger one at index `k`. This ensures we don’t overwrite existing values in `nums1`.

### 📊 Complexity

- ✅ Time Complexity: **O(m + n)**
- ✅ Space Complexity: **O(1)**

---

## Q3: 🔺 Pascal's Triangle Generator

This C++ program generates **Pascal's Triangle** up to `n` rows using a dynamic programming approach with a 2D vector.

### 📌 Problem Statement

Pascal's Triangle is a triangular array of the binomial coefficients. Each number is the sum of the two numbers directly above it.

Example for `n = 5`:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

### 🧠 Approach

- Use a 2D vector where each row has `i + 1` elements.
- Set the first and last values in each row to `1`.
- Use the relation: `triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j]`

### 📊 Complexity

- ✅ Time Complexity: **O(n²)**
- ✅ Space Complexity: **O(n²)**

---

## Q4: Array Sign – Product Sign Function (C++)

This C++ project provides a clean and efficient implementation of a function that determines the **sign of the product** of an array of integers, **without actually performing the multiplication**.

---

## 📌 Problem Statement

You are given a vector of integers `nums`. Your task is to:

- Return `1` if the product of all elements is **positive**
- Return `-1` if the product is **negative**
- Return `0` if **any element is zero**

---

## 🧠 Approach

The solution avoids multiplying the actual numbers. Instead, it uses a **sign-based strategy**:

1.  **Check for zeros**:
    - If any number is zero, return `0` immediately.
2.  **Count negative numbers**:
    - If the count of negative numbers is **odd**, the final product is **negative**.
    - If the count is **even**, the product is **positive**.

This prevents integer overflow and speeds up the computation.

---

## 🧪 Example

### Input:

```cpp
nums = {1, -2, -3, 4}
Q5: ⏰ Event Logger and Timestamp Tracker
This C++ program processes a predefined list of events, tracking their timestamps and determining if an event is "new" or if a significant amount of time (10 units or more) has passed since its last recorded occurrence.

📌 Problem Statement
Given an array of events, each with a timestamp and a name, determine for each event if it's a first occurrence or if its current timestamp is at least 10 units greater than its previously recorded timestamp. Output "true" in these cases, otherwise output "false". The program should efficiently store and update the last seen timestamp for each unique event.

🧠 Approach
The core of the program uses an std::unordered_map to efficiently store and retrieve the latest timestamp for each unique event name.

Event Data: Events are provided as std::pair<int, std::string>, representing {timestamp, event_name}.

Timestamp Tracking: An std::unordered_map<std::string, int> named hash is used. This map stores the event_name as the key and its last_recorded_timestamp as the value.

Processing Logic:

New Event: If an event_name is encountered for the first time (not found in hash), "true" is printed, and the event's current timestamp is stored in the map.

Existing Event: If the event_name is already in hash:

The difference between the current_timestamp and the old_timestamp (from the map) is calculated.

If this difference is 10 or more, "true" is printed, and the hash map is updated with the current_timestamp.

If the difference is less than 10, "false" is printed, and the hash map is not updated for this event.

This approach ensures efficient O(1) average-case lookups and updates.

📊 Complexity
✅ Time Complexity: O(N), where N is the number of events, due to the average O(1) operations of std::unordered_map.

✅ Space Complexity: O(U), where U is the number of unique event names, as the unordered_map stores an entry for each unique event.

✅ How to Compile & Run
Use the following command to compile any .cpp file:

Bash

g++ -o program_name filename.cpp
./program_name
```
