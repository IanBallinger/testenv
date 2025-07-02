using CUDA
using Libdl

try
    @ccall CUDA.libcuda.cuInit(0::Cuint)::CUDA.CUresult #fails 
    print("CUDA.jl loaded driver success")
catch e
    print("CUDA.jl loaded driver errored: ")
    display(e)
end

try
    nvcuda = dlopen("nvcuda")
    ccall((:cuInit, :nvcuda), Int32, (UInt32,), 0) #also fails
    print("manually loaded driver success")
catch e
    print("manually loaded driver errored: ")
    display(e)
end