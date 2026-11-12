# The C/C++ Commons

## Videos
Part of a three part series, on-line instructional videos are now available on Udemy.

For more information:

[C/C++ For Beginners](https://www.udemy.com/gnu-cpp-1000)

[C/C++ For Intermediate Students](https://www.udemy.com/gnu-cpp-2000)

[C/C++ For Advanced Students](https://www.udemy.com/gnu-cpp-3000/)


## What You Will Learn
• The Evolution of Systems Programming: Trace the journey from procedural C to object-oriented, generic, and modern C++, understanding why C++ kept C compatibility at its core.

• Shared Keywords & Core Syntax: Master the fundamental keywords common to both languages—such as struct, const, static, volatile, extern, typedef, enum, and sizeof—and learn how their behaviors subtly shift between C and C++.

• Writing Cross-Compatible Code: Build headers and libraries that compile cleanly in both C and C++ environments using extern "C", shared memory layouts, and safe type-casting practices.

• Modernizing Legacy C: Learn practical strategies to safely wrap, refactor, or integrate classic C codebases into modern C++ architectures without sacrificing performance.

## Audience
This course is ideal for embedded systems engineers, legacy codebase maintainers, computer science students, and developers looking to deepen their mastery of low-level memory, compilation models, and cross-language interoperability.

## Summary

This course is ideal for embedded systems engineers, legacy codebase maintainers, computer science students, and developers looking to deepen their mastery of low-level memory, compilation models, and cross-language interoperability.

This hands-on program explores the shared DNA of both languages, showing you how to write clean, portable, and interoperable code that seamlessly bridges classic C and contemporary C++ standards.

Discover how C interoperates with Modern C++ without leaving its foundational roots behind.

## Description

While modern C++ introduces powerful abstractions, the vast majority of active systems code worldwide is still written in older versions of C and legacy C++ (such as C89/C99 and C++98/C++03). Decades of mission-critical infrastructure—spanning operating system kernels, embedded firmware, financial engines, and telecommunications—rely on this massive existing footprint. Understanding how to read, maintain, and safely interface with legacy code is an essential real-world skill, as developers rarely have the luxury of rewriting millions of lines of proven code from scratch.

To navigate both legacy and modern standards effectively, this training utilizes the GNU Compiler Collection (gcc and g++) alongside standard GNU build tools. GNU tooling serves as the industry standard across Linux and embedded environments, offering unmatched control over language dialects through simple flags like -std=c99 or -std=c++20. By compiling the same codebase under different standards and inspecting the compiler's warnings and diagnostics, students gain direct, hands-on insight into how C and C++ interpret shared syntax and where subtle incompatibilities arise.

Finally, this course embraces a "less is more" philosophy regarding manual memory management and explicit initialization. Unlike higher-level languages that rely on background garbage collectors and automatic default zeroing, C and C++ give developers direct, predictable control over every byte in memory. By working without hidden runtime overhead or automatic cleanup, students learn to build deterministic, high-performance software where resource lifetimes are crystal clear—a foundational discipline that makes modern C++ features like RAII (Resource Acquisition Is Initialization) truly meaningful.

### Lessons

#### 0100: Welcome
Welcome to GNU C/C++. Starting with the basics we will be covering the 'commons' - or the bulk of the code we're most likely to see in use.


#### 0200: Educational Overview
The educational strategy, topics, and the presentation order.


#### 0300: Standards, Generations & Commons
High level and historical overview of the most common language features.


#### 0400: Tools, Tech, and Editors
A competitive appreciation of the programmer's editors, tools, and software-support technologies.


#### 0500: Common Compatibility
Backwards compatibility is why C/C++ is the way we should describe GNU C++ 1000 - as well as many other things.


#### 0600: main()
Getting started, every application needs a main - so let's cover the basics.


#### 0700: Compiling main()
Demonstrating the software creation process that we'll be using here.


#### 0800: Why Comment?
Like many other features, even source-code comments have evolved from C to C++ and then back again.


#### 0900: Displaying & Reporting
The basics of defining, printing, and managing common variable content.


#### 1000: A Printing Solution
Review one geek's solution to the previous reporting activity.


#### 1100: Scanning Data?
From keyboards to other data streams we can read data from many sources using scanf().


#### 1200: What's 'The Linker'?
Surprisingly, GNU's C/C++ Compiler is simply the 'front end' to several tools that even other programming languages often use.


#### 1300: Your Functions
While our 'apps need a main() our libraries need none ... yet both invariably have other functions we'll code, as well.


#### 1400: Coding Block-By-Block
Like crafting our own building blocks the ultimate joy in developing our own software is the opportunity we'll have to wrap our code creations into reusable functions.


#### 1500: Paths - Where To Look
Let's take a moment to understand how the C/C++ compiler finds what our programs need to re-use.


#### 1600: Keeper of the Block
Often called 'flow control' in this session we'll review how the 'if' keyword quickly allows us to manage which code blocks we'll use.


#### 1700: While Loops & Looping
Running things once is fine but what if we want to loop through a one of our block-creations many times?


#### 1800: Calculator Solution
Notepad++ is popular, free and open - so miscreants have been known to hack it... PLEASE research ANY version of everything before installing ANY-THING to be sure that it is safe!


#### 1900: Modulus for EvERyOnE!
Whilst scanning works just a well for strings as for keyboards the 'Modulus Operator' helps with data reporting too.


#### 2000: Operators & Reviews
There is indeed an order of operations ... by simply gifting 'unnecessary' parentheses is often better?


#### 2100: Bit ~or~ Byte 'Ops?
From using sizeof() to flipping bits let's review the machine-level support that is often the reason why C/C++ is the first choice for operating & device-level computer interfaces.


#### 2200: The Show-Bit Challenge
Flipping and rotating bits is simply 'the way' for both ancient - as well as modern - software developers... So let's challenge ourselves to display them?


#### 2300: Universal Interfaces
Some very huge companies have been known to disrupt - let alone to completely ignore - standards. Regrettably C/C++ is no exception.


#### 2400: Universal Help
Platform options for asking our programs for 'help' also often vary - but there are others.


#### 2500: Interface Upgrades
Ever more suggestions for improving command-line / console user interfaces.


#### 2600: The Re-direction Commons
Like path characters and path separators, while input & output notations differ their use cases remain the same.


#### 2700: Integral Characters
Enjoy a quick concept review - plus a single 'blockless' statement 'fav - as we move into the 'character commons.'


#### 2800: Integral Booleans
The biggest bool in the room, expressing true / FALSE values is yet another idea that migrated from C to C++, and then back to C as well.


#### 2900: The Ternary-ites
The shortest of any of the gatekeepers, like many expressions the more we'll use the Ternary the more we'll like it?


#### 3000: The Power of `Switch`
Reviewing even more Ternary 'ops, we'll next enjoy discovering how to define larger blocks by using the C/C++ 'switch' construct, as well.


#### 3100: The Integral Array
When sizes are the same we can switch between any sized array so as to point wherever we need to within any C/C++ memory pile.


#### 3200: New & Delete in C++
Few things are confusing - or as important - as the many ways we can manage memory (or not) using Modern C++.


#### 3300: Do, While, Go-to, and Breaking
From our operating systems to our 'apps, the idea of 'looping forever' is not as uncommon a one might believe, so let's discover how to break them?


#### 3400: Jumping & Pointers
The original 'pointer,' the death of the 'goto' keyword has been highly exaggerated. -Far from being taboo, in the hands of the right coder our ability to use any machine-level 'JUMP' instruction is often the fastest way to get things done. So too when using NULLs and pointer areithametic as well.


#### 3500: Knowing Thyne Limits
Once we understand the evolution, simply seeing the names of any include file(s) often tells us all we need know.


#### 3600: The Pre-Processor
A little up-front 'macro' translation can be great - but the problem is knowing when to officially move any pre-processed substitution(s) into our code.


#### 3700: Characters, Signs & Standards
From processors, systems, and even binary formats there can be much different between what we've to master whenever we're mastring our limits in Modern C.


#### 3800: Updating ShowBits
There are - perhaps too many - bit patterns we might need to encode / decode. So let's apply what we've just learned to our previous 'Show Bits' operation.


#### 3900: Enum Evolutions
The 'enum' construct was another relatively later-update to the standard. Terribly handy to use - yet often ignored - moving away from manifest constants and cost-definitions is when we might want to choose it.


#### 4000: Enum Possible?
From duplicating any discreet enumerated values - to changing data types - maintaining enumerated definitions permits us to do some pretty unexpected things.


#### 4100: Classic State - Machines?
For anyone completing this lesson managing complex states in our software need not require more than creating simple enumerations and / or pointers into arrays.


#### 4200: State Machine 'Params
Once our state machine is defined we often need do very little to pass parameters that keep track of what we need do with any state of our 'machine.


#### 4300: Scientific & Money Calculations
Much as our integrals the precise encoding(s) of any double and / or floating point format(s) need not be mastered in order to get the critical-path value from their use.


#### 4400: Public Structures
In C and C++ the `struct` keyword permits us to specify precisely what we'd expect to see as part of any collection of definition.


#### 4500: Dynamic Locations
The grand division between where we keep any data has ever been between 'static' or 'dynamic' memory. No trite observation, in the 3000 educational opportunity we'll discover that today's 'R.V.O' is the precise reason why we need care if data are in the 'local cache' or the 'global memory' locations.


#### 4600: The Struct Challenger
Yet another opportunity to move short-term memory into long-term mastery.


#### 4700: Passing By ... What?
A hugely professional topic is the mastery of 'passing by value' versus 'passing by reference' ... so let's get some practice doing both.


#### 4800: The Fastest Point
Once incredibly scarce, like the `goto` keyword, the `register` keyword - from time to time - can save much time.


#### 4900: Function as Member
Putting functions into structures was nothing in C ... yet such was the first step in managing access to any in C++.


#### 5000: Structure Management
Part of what makes C/C++ so fast is what it does not do for us too... so let's discover a few 'best practices' for setting things up when we're managing blocks of memory.


#### 5100: Memory Exploits
Security was never a problem on C, and neither need it be in C++ - so when we need 'sec we'll usually need to just D.I.Y.


#### 5200: General Dynamics
The size of things will much change when - and if - we choose manage our own members and their pointers.


#### 5300: Pseudo Functions
In C/C++ today's 'Functional Programming' - mania can be negated by simply appreciating the many & various ways that we have always been able to define functions.


#### 5400: Understanding `typedef`
Discover yet another ancient - let alone modern (!) - way to exchange data-types and / or functions between C and C++.


#### 5500: More Perfect Unions
The idea of re-defining the same area of memory to be accessed in several different ways is odd. Even more when using several different structures to access the exact same memory. But we'll often only use the `union` keyword when we're doing some equally strange things.


#### 5600: The Keyword Union
We've covered a lot so let's cover the final few keywords we'll need to appreciate when we're managing code between C and C++.


#### 5700: Closing Strings
The final difference to appreciate is that - even in modern C++ - the idea that a string is a byte is no longer a reliable - let alone any common - assumption.


#### 5800: Closing Inspirations
Suggestions for research & further study.

