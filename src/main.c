#include <gfx/video.h>
#include <multiboot.h>

int main(unsigned long addr)
{
    multiboot_info_t *mbi;

    mbi = (multiboot_info_t *) addr;

    screen_init(mbi->framebuffer_addr,
            mbi->framebuffer_width,
            mbi->framebuffer_height);

    while (1) {

    }

    return 0;
}

