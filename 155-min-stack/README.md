<h2><a href="https://leetcode.com/problems/min-stack/">155. Min Stack</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">MinStack</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">MinStack()</code> initializes the stack object.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void push(int val)</code> pushes the element <code style="user-select: auto;">val</code> onto the stack.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void pop()</code> removes the element on the top of the stack.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int top()</code> gets the top element of the stack.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int getMin()</code> retrieves the minimum element in the stack.</li>
</ul>

<p style="user-select: auto;">You must implement a solution with <code style="user-select: auto;">O(1)</code> time complexity for each function.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;"><lclighter data-id="lgt262436398" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;">Input</lclighter></strong><lclighter data-id="lgt262436398" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;"><br style="user-select: auto;">["MinStack","push","push","push","getMin","pop","top","getMin"]<br style="user-select: auto;">[[],[-2],[0],[-3],[],[],[],[]]<br style="user-select: auto;"><br style="user-select: auto;"></lclighter><strong style="user-select: auto;"><lclighter data-id="lgt262436398" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;">Output</lclighter></strong><lclighter data-id="lgt262436398" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;"><br style="user-select: auto;">[null,null,null,null,-3,null,0,-2]<br style="user-select: auto;"><br style="user-select: auto;"></lclighter><strong style="user-select: auto;"><lclighter data-id="lgt262436398" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;">Explanation</lclighter></strong><lclighter data-id="lgt262436398" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;"><br style="user-select: auto;">MinStack minStack = new MinStack();<br style="user-select: auto;">minStack.push(-2);<br style="user-select: auto;">minStack.push(0);<br style="user-select: auto;">minStack.push(-3);<br style="user-select: auto;">minStack.getMin(); // return -3<br style="user-select: auto;">minStack.pop();<br style="user-select: auto;">minStack.top();    // return 0<br style="user-select: auto;">minStack.getMin(); // return -2</lclighter><div class="LinerThreadIcon LinerFirst " data-highlight-id="262436398" data-bundle-id="0" id="lgt262436398" style="background-image: url(&quot;https://photo.getliner.com/liner-service-bucket/user_photo_default/color-4/S.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= val &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
	<li style="user-select: auto;">Methods <code style="user-select: auto;">pop</code>, <code style="user-select: auto;">top</code> and <code style="user-select: auto;">getMin</code> operations will always be called on <strong style="user-select: auto;">non-empty</strong> stacks.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">3 * 10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">push</code>, <code style="user-select: auto;">pop</code>, <code style="user-select: auto;">top</code>, and <code style="user-select: auto;">getMin</code>.</li>
</ul>
</div>