//marco expasion: gcc sample/ev_timeout.c -I ./ -E

typedef struct ev_io
{
  int active;
  int pending;
  int priority;
  void *data;
  void (*cb)(struct ev_loop *loop, struct ev_io *w, int revents);
  struct ev_watcher_list *next;

  int fd;
  int events;
} ev_io;

typedef struct ev_timer
{
  int active;
  int pending;
  int priority;
  void *data;
  void (*cb)(struct ev_loop *loop, struct ev_timer *w, int revents);
  ev_tstamp at;

  ev_tstamp repeat;
} ev_timer;



extern void ev_io_start (struct ev_loop *loop, ev_io *w) ;
extern void ev_io_stop (struct ev_loop *loop, ev_io *w) ;

extern void ev_timer_start (struct ev_loop *loop, ev_timer *w) ;
extern void ev_timer_stop (struct ev_loop *loop, ev_timer *w) ;


extern int ev_run (struct ev_loop *loop, int flags );
extern void ev_break (struct ev_loop *loop, int how ) ;


// ev_timeout.c
ev_io stdin_watcher;
ev_timer timeout_watcher;



static void
stdin_cb (struct ev_loop *loop, ev_io *w, int revents)
{
  puts ("stdin ready");


  ev_io_stop (loop, w);


  ev_break (loop, EVBREAK_ALL);
}


static void
timeout_cb (struct ev_loop *loop, ev_timer *w, int revents)
{
  puts ("timeout");

  ev_break (loop, EVBREAK_ONE);
}

int
main (void)
{

  struct ev_loop *loop = ev_default_loop (0);



  do {
    do {
      ((ev_watcher *)(void *)((&stdin_watcher)))->active = ((ev_watcher *)(void *)((&stdin_watcher)))->pending = 0;
      ( (ev_watcher *)(void *)(((&stdin_watcher))))->priority = (0);
      ((((&stdin_watcher)))->cb = ((stdin_cb)), memmove (&((ev_watcher *)(((&stdin_watcher))))->cb, &(((&stdin_watcher)))->cb, sizeof ((((&stdin_watcher)))->cb)));
    } while (0);
    do { ((&stdin_watcher))->fd = ((0)); ((&stdin_watcher))->events = ((EV_READ)) | EV__IOFDSET; } while (0);
  } while (0);
  ev_io_start (loop, &stdin_watcher);



  do {
    do {
      ((ev_watcher *)(void *)((&timeout_watcher)))->active = ((ev_watcher *)(void *)((&timeout_watcher)))->pending = 0;
      ( (ev_watcher *)(void *)(((&timeout_watcher))))->priority = (0);
      ((((&timeout_watcher)))->cb = ((timeout_cb)), memmove (&((ev_watcher *)(((&timeout_watcher))))->cb, &(((&timeout_watcher)))->cb, sizeof ((((&timeout_watcher)))->cb)));
    } while (0);
    do {
      ((ev_watcher_time *)((&timeout_watcher)))->at = ((5.5)); ((&timeout_watcher))->repeat = ((0.));
    } while (0);
  } while (0);
  ev_timer_start (loop, &timeout_watcher);


  ev_run (loop, 0);


  return 0;
}
