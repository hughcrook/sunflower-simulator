ThreadState*	spthr_allocthread(ulong startpc, ulong argaddr);
void		spthr_addthread(ThreadState *new);
void		spthr_init(void);
void		spthr_threadfatal(const char *error);
void		spthr_simcmd(uchar *cmd);
Maddr		spthr_getcallerpc(void);
Maddr		spthr_getcallerstk(void);
Maddr		spthr_getloweststk(void);
int		spthr_myid(void);
int		spthr_tas(char *var);
void		spthr_saveregs(void);
void		spthr_restoreregs(char *regstack);
void		spthr_sleep(Sleepq **q, pthread_mutex_t *mutex);
void		spthr_wakeup(Sleepq **q);
void		spthr_dosleep(void);
void		spthr_splhi(void);
void		spthr_spllo(void);
void		spthr_splget(void);
void		spthr_splset(ulong sr);
int		spthr_maptbl_isvalid(Maddr addr);
void		spthr_maptbl_add(Maddr addr, int size, char *name,
			int scope, int homenode);
void		spthr_maptbl_del(Maddr addr);
void		spthr_addglobalstomap(void);
ThreadState *	spthr_getthreadstate(int threadid);
