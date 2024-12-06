
add_executable (researchinstitute "researchinstitute.cpp" "researchinstitute.h")

if (CMAKE_VERSION VERSION_GREATER 3.20)
  set_property(TARGET researchinstitute PROPERTY CXX_STANDARD 20)
  set_property(TARGET researchinstitute PROPERTY CMAKE_CXX_STANDARD 20)

endif()
