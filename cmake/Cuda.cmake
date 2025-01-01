set(CMAKE_CUDA_ARCHITECTURES "native")
set(CUDA_TOOLKIT_ROOT_DIR $ENV(CUDA_HOME))
set(CUDAToolkit_ROOT $ENV(CUDA_HOME))

find_package(CUDAToolkit)

