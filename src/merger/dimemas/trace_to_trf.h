/*****************************************************************************\
 *                        ANALYSIS PERFORMANCE TOOLS                         *
 *                                  MPItrace                                 *
 *              Instrumentation package for parallel applications            *
 *****************************************************************************
 *     ___     This library is free software; you can redistribute it and/or *
 *    /  __         modify it under the terms of the GNU LGPL as published   *
 *   /  /  _____    by the Free Software Foundation; either version 2.1      *
 *  /  /  /     \   of the License, or (at your option) any later version.   *
 * (  (  ( B S C )                                                           *
 *  \  \  \_____/   This library is distributed in hope that it will be      *
 *   \  \__         useful but WITHOUT ANY WARRANTY; without even the        *
 *    \___          implied warranty of MERCHANTABILITY or FITNESS FOR A     *
 *                  PARTICULAR PURPOSE. See the GNU LGPL for more details.   *
 *                                                                           *
 * You should have received a copy of the GNU Lesser General Public License  *
 * along with this library; if not, write to the Free Software Foundation,   *
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA          *
 * The GNU LEsser General Public License is contained in the file COPYING.   *
 *                                 ---------                                 *
 *   Barcelona Supercomputing Center - Centro Nacional de Supercomputacion   *
\*****************************************************************************/

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- *\
 | @file: $HeadURL$
 | @last_commit: $Date$
 | @version:     $Revision$
\* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

#ifndef TRACE_TO_TRF_H
#define TRACE_TO_TRF_H

#include "mpi2out.h"
#include "cpunode.h"
#include "fdz.h"

extern struct ptask_t *obj_table;
extern unsigned int num_ptasks;

int Dimemas_ProcessTraceFiles (char *prvName, unsigned long nfiles,
	struct input_t *files, unsigned int num_appl, char *callback_file,
	struct Pair_NodeCPU *NodeCPUinfo, int numtasks, int idtask,
	int MBytesPerAllSegments, int forceformat);

unsigned long long Dimemas_hr_to_relative (UINT64 iotimer);

#if defined(DEAD_CODE)
extern int **EnabledTasks;
extern unsigned long long **EnabledTasks_time;
#endif

void AnotaBGPersonality (unsigned int event, unsigned long long valor, int task);

#endif /* __TRACE_TO_PRV_H__ */