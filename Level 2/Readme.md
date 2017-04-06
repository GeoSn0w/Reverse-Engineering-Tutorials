Welcome to the Level 2!

In this level you have a crack-me app that I've built so that it asks for an access key you never know.
The key is NOT stored (hardcoded) inside the app, so string analysis will prove useless in this case.

There are 3 scenarios:
1) You provided the correct key, you get a greetings message and the date and time.
2) You provided the wrong access key, you get a message telling you that your access is denied.
3) You did not provide any key, the app prints its usage info.

Your goal:
You need to use Radare2 (or any other disassembler and debugger) to analyze the binary, find the algorithm behind the keycheck and bypass it.

Tutorials:
Tutorial soon.
