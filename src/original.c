/* ... */
if ((options == (__WCLONE|__WALL))
	&& (current->uid == 0))
        retval = -EINVAL;
/* ... */
