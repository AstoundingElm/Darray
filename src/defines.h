#pragma once
#include <vulkan/vulkan.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define TRUE 1
#define FALSE 0
#include <stdio.h>
#define _DEBUG 
typedef char b8;

typedef uint32_t u32;
typedef struct  {
    VkInstance instance;
    VkAllocationCallbacks* allocator;
    VkSurfaceKHR surface;
#if defined(_DEBUG)
    VkDebugUtilsMessengerEXT debug_messenger;
#endif
} vulkan_context;