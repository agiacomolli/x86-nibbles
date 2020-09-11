#ifndef VIDEO_H
#define VIDEO_H

extern void screen_init(unsigned long addr, unsigned int width, unsigned int height);

extern void draw_rect(int x, int y, int w, int h, int c);

extern void draw_square(int x, int y, int s, int c);

#endif /* VIDEO_H */

