# Set CUDA Toolkit root from environment variable (optional)
if(DEFINED ENV{CUDA_HOME})
    set(CUDAToolkit_ROOT "$ENV{CUDA_HOME}")
endif()

# Configure CUDA options globally
set(CMAKE_CUDA_ARCHITECTURES "native") # Auto-detect GPU architecture (CMake 3.23+)
set(CMAKE_CUDA_SEPARABLE_COMPILATION ON) # Enable separable compilation
set(CMAKE_CUDA_FLAGS "${CMAKE_CUDA_FLAGS} -O3") # Optimization flags

# To optimize differently for debug and release:
set(CMAKE_CUDA_FLAGS_RELEASE "${CMAKE_CUDA_FLAGS_RELEASE} -O3")
set(CMAKE_CUDA_FLAGS_DEBUG "${CMAKE_CUDA_FLAGS_DEBUG} -g -G")

# Find CUDA Toolkit
find_package(CUDAToolkit REQUIRED)

# Report findings (optional, for debugging)
if(CUDAToolkit_FOUND)
  message(STATUS "CUDA found:")
  message(STATUS "  CUDAToolkit: ${CUDAToolkit_ROOT}")
  message(STATUS "  version: ${CUDAToolkit_VERSION}")
  message(STATUS "  nvcc: ${CUDAToolkit_NVCC_EXECUTABLE}")

  # Define the executable
  target_link_libraries(researchinstitute PRIVATE ${CUDA_LIBRARIES})
  target_include_directories(researchinstitute PRIVATE ${CUDA_INCLUDE_DIRS})

  set_target_properties(researchinstitute PROPERTIES
    CUDA_SEPARABLE_COMPILATION ON
    CUDA_ARCHITECTURES "native" # Matches global setting, optional here
  )
else()
    message(FATAL_ERROR "CUDA Toolkit not found.")
endif()

