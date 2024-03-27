```python
# I would like to build a swimmingpool in Minecraft.
# How many blocks of marble do I need?

def swimmingpool(width, height, depth):
    if width * height * depth < 1:
        print("Is this a pool for ants?")
        return 0
    block = (width + 2) * (height + 2) * (depth + 1)
    inner = width * height * depth
    total = block - inner
    return total   # return the result
    
```

# im Thonny REPL:

	import minecraft
	minecraft.swimmingpool(10, 7, 3)