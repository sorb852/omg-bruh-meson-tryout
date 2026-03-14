# Example thing

i swear this linker bs is making my head spin

im tired but now that i found out the reason why (*being that `shared_library` and `library` just don't create a FC_lib.lib file*)(complete bs btw) i wanna keep working on it

## Why

stupid linker errors

specifically

```txt
LINK : fatal error LNK1181: cannot open input file 'lib\src\FC_lib.lib'
```

like why

This example or experiment repo was really only made because well this was an experiment to catch why the original cjess engine was not working. Also *please* **ignore** the *code*.

## what did i learn

i dont know man i just feel down now

i guess i learn that compiling anything other than a static library is wrong i guess 

which is **BULLSHIT**. Because shared libraries generate *DLL* or *SO* files that are seperate from the main executable, meaning that they can be used an **indefinete** amount of time. Reducing both binary space and memory usage now that everythings using from this resource. (ok maybe ts explanation is ass but whatever)

So for the time being, I will have to stay with static libraries.

## OFF TOPIC

also i think i should like make 100 of my repos public because man its kinda seeing them, atleast finish them an release it instead of waiting for the day to js magically code itself.
