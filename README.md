to launch:
```pwsh
julia --project=. ./src/testenv.jl
```

sample output:
``` pwsh
PS C:\testenv> julia --project=. ./src/testenv.jl
CUDA.jl loaded driver errored: ReadOnlyMemoryError()
manually loaded driver errored: ReadOnlyMemoryError()
```