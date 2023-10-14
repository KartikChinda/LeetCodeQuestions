# Deque Implementations
## Easy
<div class="problems_problem_content__Xm_eO"><p><em><span style="font-size: 18px;">A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends.</span></em></p>
<p><span style="font-size: 18px;">Given a deque and <strong>Q</strong> queries. The task is to perform some operation on dequeue according to the queries as given below:<br>1.<strong> pb</strong>: query to <strong>push back </strong>the <strong>element x</strong>.<br>2.<strong> pf</strong>: query to<strong> push element x</strong>(given with query) to the <strong>front of the deque</strong>.<br>3<strong>. pp_b()</strong>: query to <strong>delete element from the back</strong> of the deque.<br>4.<strong> f</strong>: query to<strong> return a front element</strong> from the deque.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
5
pf 5
pf 10
pb 6
f
pp_b

<strong>Output:</strong> 
10

<strong>Explanation:</strong> 
1. After push front deque will be {5}
2. After push front deque will be {10, 5}
3. After push back deque will be {10, 5, 6}
4. Return front element which is 10
5. After pop back deque will be {10, 5}
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
2
pf 5 
f

<strong>Output:</strong> 
5 

<strong>Explanation:</strong>
1. After push front deque will be {5}
2. Return front element which is 5
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Your task is to complete the following functions:<br><strong>push_back_pb()</strong>: Push back the given element and then driver code prints that element.<br><strong>push_front_pf()</strong>: Push front the given element and then driver code prints that element.<br><strong>pop_back_ppb()</strong>: Pop the back element (if exists) and then the driver code prints the size of the deque.<br><strong>front_dq()</strong>: Return the front elements if it exists, else return -1. The driver code prints the return value.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(1)<br><strong>Expected Auxilliary Space</strong>: O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ Number of queries ≤ 10<sup>5</sup></span></p>
<p><span style="font-size: 20px;"><sup>*Note:</sup></span><span style="font-size: 18px;"><sup> Ouput is also printed after every method call, see the driver code.</sup></span></p></div>