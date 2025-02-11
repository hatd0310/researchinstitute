set(CMAKE_CUDA_ARCHITECTURES "native")
set(CUDA_TOOLKIT_ROOT_DIR $ENV{CUDA_HOME})
set(CUDAToolkit_ROOT $ENV{CUDA_HOME})

set(CUDA_SEPARABLE_COMPILATION ON)
set(CUDA_NVCC_FLAGS "${CUDA_NVCC_FLAGS} -O3")
set(CUDA_NVCC_FLAGS "${CUDA_NVCC_FLAGS} -arch=sm_52")

#enable_language(CUDA)
find_package(CUDAToolkit)

