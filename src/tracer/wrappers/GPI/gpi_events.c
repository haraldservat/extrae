/*****************************************************************************\
 *                        ANALYSIS PERFORMANCE TOOLS                         *
 *                                   Extrae                                  *
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

#include "gpi_events.h"
#include "gpi_probe.h"
#include "wrapper.h"

void
Extrae_GPI_init_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_init_Entry();
}

void
Extrae_GPI_init_Exit()
{
	Probe_GPI_init_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_term_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_term_Entry();
}

void
Extrae_GPI_term_Exit()
{
	Probe_GPI_term_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_connect_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_connect_Entry();
}

void
Extrae_GPI_connect_Exit()
{
	Probe_GPI_connect_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_disconnect_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_disconnect_Entry();
}

void
Extrae_GPI_disconnect_Exit()
{
	Probe_GPI_disconnect_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_group_create_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_group_create_Entry();
}

void
Extrae_GPI_group_create_Exit()
{
	Probe_GPI_group_create_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_group_add_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_group_add_Entry();
}

void
Extrae_GPI_group_add_Exit()
{
	Probe_GPI_group_add_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_group_commit_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_group_commit_Entry();
}

void
Extrae_GPI_group_commit_Exit()
{
	Probe_GPI_group_commit_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_group_delete_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_group_delete_Entry();
}

void
Extrae_GPI_group_delete_Exit()
{
	Probe_GPI_group_delete_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_segment_alloc_Entry(const gaspi_size_t size)
{
	Backend_Enter_Instrumentation();
	Probe_GPI_segment_alloc_Entry(size);
}

void
Extrae_GPI_segment_alloc_Exit()
{
	Probe_GPI_segment_alloc_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_segment_register_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_segment_register_Entry();
}

void
Extrae_GPI_segment_register_Exit()
{
	Probe_GPI_segment_register_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_segment_create_Entry(const gaspi_size_t size)
{
	Backend_Enter_Instrumentation();
	Probe_GPI_segment_create_Entry(size);
}

void
Extrae_GPI_segment_create_Exit()
{
	Probe_GPI_segment_create_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_segment_bind_Entry(const gaspi_size_t size)
{
	Backend_Enter_Instrumentation();
	Probe_GPI_segment_bind_Entry(size);
}

void
Extrae_GPI_segment_bind_Exit()
{
	Probe_GPI_segment_bind_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_segment_use_Entry(const gaspi_size_t size)
{
	Backend_Enter_Instrumentation();
	Probe_GPI_segment_use_Entry(size);
}

void
Extrae_GPI_segment_use_Exit()
{
	Probe_GPI_segment_use_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_segment_delete_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_segment_delete_Entry();
}

void
Extrae_GPI_segment_delete_Exit()
{
	Probe_GPI_segment_delete_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_write_Entry(const gaspi_rank_t rank, const gaspi_size_t size)
{
	Backend_Enter_Instrumentation();
	Probe_GPI_write_Entry(rank, size);
}

void
Extrae_GPI_write_Exit()
{
	Probe_GPI_write_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_read_Entry(const gaspi_rank_t rank, const gaspi_size_t size)
{
	Backend_Enter_Instrumentation();
	Probe_GPI_read_Entry(rank, size);
}

void
Extrae_GPI_read_Exit()
{
	Probe_GPI_read_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_wait_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_wait_Entry();
}

void
Extrae_GPI_wait_Exit()
{
	Probe_GPI_wait_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_notify_Entry(const gaspi_rank_t rank)
{
	Backend_Enter_Instrumentation();
	Probe_GPI_notify_Entry(rank);
}

void
Extrae_GPI_notify_Exit()
{
	Probe_GPI_notify_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_barrier_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_barrier_Entry();
}

void
Extrae_GPI_barrier_Exit()
{
	Probe_GPI_barrier_Exit();
	Backend_Leave_Instrumentation();
}

void
Extrae_GPI_allreduce_Entry()
{
	Backend_Enter_Instrumentation();
	Probe_GPI_allreduce_Entry();
}

void
Extrae_GPI_allreduce_Exit()
{
	Probe_GPI_allreduce_Exit();
	Backend_Leave_Instrumentation();
}