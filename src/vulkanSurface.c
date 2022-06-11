#include "vulkanSurface.h"

typedef struct{
    Display* display;
    xcb_connection_t* connection;
    xcb_window_t window;
    xcb_screen_t* screen;
    xcb_atom_t wm_protocols;
    xcb_atom_t wm_delete_win;
    VkSurfaceKHR surface;
} internal_state;



char platform_create_vulkan_surface(vulkan_context *context
    ){
         //internal_state *state = (internal_state *)plat_state->internal_state;
        //platform_state *plat_state, ) {
    // Simply cold-cast to the known type.
  
internal_state * state;
    VkXcbSurfaceCreateInfoKHR  create_info = {VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR};
    create_info.connection = state->connection;
    create_info.window = state->window;

    VkResult result = vkCreateXcbSurfaceKHR(
        context->instance,
        &create_info,
        context->allocator,
        &state->surface);
    if (result != VK_SUCCESS) {
        printf("Vulkan surface creation failed.");
        return FALSE;
    }

    context->surface = state->surface;
    return TRUE;
}


 