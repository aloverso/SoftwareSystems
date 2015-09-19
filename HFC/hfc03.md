# Head First C - Chapter 3

**3. Reflect: what worked, what slowed you down?  What would you do differently next time?**

Understanding syntax slowed us down, like the fact that argv starts at 0, not 1. However, using sample code from HFC helped a lot, and probably made the whole process faster. Also, once we understood how to break down the task in terms of piping inputs and outputs, the whole problem became much easier.

If we were to do this again, we should probably spend more time on error catching, so the script can be more reliable. Currently, the code is very short, but depends a lot of things to work without error. With more error checking, we could probably also make itee more efficient.

**4. Compare your solution to the real thing.  What do you see in professional code that is not in your 10-minute solution?**

There’s a LOT of error checking in the professional version that we didn’t really worry about at all. Also, it uses much fancier functions than we are - they’re not even using fprintf (except for the usage printing). Also, our solution has comments, and the professional solution does not.  Also, our code is much more readable and uses variable names that make sense.  But their “add” seems like a recursive solution, which is cool.