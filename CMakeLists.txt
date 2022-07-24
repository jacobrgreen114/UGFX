


add_library(UGFX
        Source/Ugfx.cpp
        Source/VulkanImpl/VulkanGraphicsContext.cpp
        )

target_include_directories(UGFX
        PUBLIC
        Include
        $ENV{VULKAN_SDK}/Include
        )

target_link_directories(UGFX
    PUBLIC
    $ENV{VULKAN_SDK}/Lib
    )

target_link_libraries(UGFX
    PUBLIC
    SharperC
    vulkan-1.lib
    )

add_subdirectory(Demo)