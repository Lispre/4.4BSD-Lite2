/*
 * System call numbers.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	@(#)syscalls.master	8.2 (Berkeley) 4/3/95
 */

#define	SYS_exit	1
#define	SYS_fork	2
#define	SYS_read	3
#define	SYS_write	4
#define	SYS_open	5
#define	SYS_close	6
#define	SYS_sun_wait4	7
#define	SYS_sun_creat	8
#define	SYS_link	9
#define	SYS_unlink	10
#define	SYS_sun_execv	11
#define	SYS_chdir	12
				/* 13 is old sun_time */
#define	SYS_mknod	14
#define	SYS_chmod	15
#define	SYS_chown	16
#define	SYS_break	17
				/* 18 is old sun_stat */
#define	SYS_compat_43_lseek	19
#define	SYS_getpid	20
				/* 21 is obsolete sun_old_mount */
				/* 23 is old setuid */
#define	SYS_getuid	24
				/* 25 is old sun_stime */
				/* 27 is old sun_alarm */
				/* 28 is old sun_fstat */
				/* 29 is old sun_pause */
				/* 30 is old sun_utime */
#define	SYS_access	33
				/* 34 is old sun_nice */
				/* 35 is old sun_ftime */
#define	SYS_sync	36
#define	SYS_kill	37
#define	SYS_compat_43_stat	38
				/* 39 is old sun_setpgrp */
#define	SYS_compat_43_lstat	40
#define	SYS_dup	41
#define	SYS_pipe	42
				/* 43 is old sun_times */
#define	SYS_profil	44
				/* 46 is old sun_setgid */
#define	SYS_getgid	47
				/* 48 is old sun_ssig */
#define	SYS_acct	51
#define	SYS_sun_mctl	53
#define	SYS_sun_ioctl	54
#define	SYS_reboot	55
				/* 56 is obsolete sun_owait3 */
#define	SYS_symlink	57
#define	SYS_readlink	58
#define	SYS_execve	59
#define	SYS_umask	60
#define	SYS_chroot	61
#define	SYS_compat_43_fstat	62
#define	SYS_compat_43_getpagesize	64
#define	SYS_sun_omsync	65
#define	SYS_vfork	66
				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
#define	SYS_sbrk	69
#define	SYS_sstk	70
#define	SYS_mmap	71
#define	SYS_vadvise	72
#define	SYS_munmap	73
#define	SYS_mprotect	74
#define	SYS_madvise	75
				/* 76 is old vhangup */
				/* 77 is old vlimit */
#define	SYS_mincore	78
#define	SYS_getgroups	79
#define	SYS_setgroups	80
#define	SYS_getpgrp	81
#define	SYS_setpgid	82
#define	SYS_setitimer	83
				/* 84 is old wait */
#define	SYS_swapon	85
#define	SYS_getitimer	86
#define	SYS_compat_43_gethostname	87
#define	SYS_compat_43_sethostname	88
#define	SYS_getdtablesize	89
#define	SYS_dup2	90
#define	SYS_fcntl	92
#define	SYS_select	93
#define	SYS_fsync	95
#define	SYS_setpriority	96
#define	SYS_socket	97
#define	SYS_connect	98
#define	SYS_compat_43_accept	99
#define	SYS_getpriority	100
#define	SYS_compat_43_send	101
#define	SYS_compat_43_recv	102
#define	SYS_bind	104
#define	SYS_sun_setsockopt	105
#define	SYS_listen	106
				/* 107 is old vtimes */
#define	SYS_compat_43_sigvec	108
#define	SYS_compat_43_sigblock	109
#define	SYS_compat_43_sigsetmask	110
#define	SYS_sigsuspend	111
#define	SYS_compat_43_sigstack	112
#define	SYS_compat_43_recvmsg	113
#define	SYS_compat_43_sendmsg	114
				/* 115 is obsolete vtrace */
#define	SYS_gettimeofday	116
#define	SYS_getrusage	117
#define	SYS_getsockopt	118
#define	SYS_readv	120
#define	SYS_writev	121
#define	SYS_settimeofday	122
#define	SYS_fchown	123
#define	SYS_fchmod	124
#define	SYS_compat_43_recvfrom	125
#define	SYS_compat_43_setreuid	126
#define	SYS_compat_43_setregid	127
#define	SYS_rename	128
#define	SYS_compat_43_truncate	129
#define	SYS_compat_43_ftruncate	130
#define	SYS_flock	131
#define	SYS_sendto	133
#define	SYS_shutdown	134
#define	SYS_socketpair	135
#define	SYS_mkdir	136
#define	SYS_rmdir	137
#define	SYS_utimes	138
#define	SYS_sigreturn	139
#define	SYS_adjtime	140
#define	SYS_compat_43_getpeername	141
#define	SYS_compat_43_gethostid	142
#define	SYS_compat_43_getrlimit	144
#define	SYS_compat_43_setrlimit	145
#define	SYS_compat_43_killpg	146
#define	SYS_compat_43_getsockname	150
#define	SYS_getdirentries	156
#define	SYS_statfs	157
#define	SYS_fstatfs	158
#define	SYS_sun_unmount	159
#define	SYS_sun_getdomainname	162
#define	SYS_sun_setdomainname	163
#define	SYS_sun_mount	167
#define	SYS_shmsys	171
#define	SYS_sun_getdents	174
#define	SYS_setsid	175
#define	SYS_fchdir	176
#define	SYS_sun_fchroot	177
#define	SYS_sun_sigpending	183
#define	SYS_setpgid	185
