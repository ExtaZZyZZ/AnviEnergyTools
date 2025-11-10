# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ENNOID-BMS-Tool_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ENNOID-BMS-Tool_autogen.dir\\ParseCache.txt"
  "ENNOID-BMS-Tool_autogen"
  )
endif()
