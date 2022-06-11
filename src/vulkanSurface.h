#pragma once
#include "defines.h"

#include <xcb/xcb.h>
#include <X11/keysym.h>
#include <X11/XKBlib.h>  // sudo apt-get install libx11-dev
#include <X11/Xlib.h>
#include <X11/Xlib-xcb.h> 
#include <vulkan/vulkan_xcb.h>
#define VK_USE_PLATFORM_XCB_KHR
#include "vulkanTypes.h"

char platform_create_vulkan_surface(vulkan_context *context);

