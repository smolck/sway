#ifndef _SWAY_IPC_H
#define _SWAY_IPC_H

#define event_mask(ev) (1 << (ev & 0x7F))

enum ipc_command_type {
	// i3 command types - see i3's I3_REPLY_TYPE constants
	IPC_COMMAND = 0,
	IPC_GET_WORKSPACES = 1,
	IPC_SUBSCRIBE = 2,
	IPC_GET_OUTPUTS = 3,
	IPC_GET_TREE = 4,
	IPC_GET_MARKS = 5,
	IPC_GET_BAR_CONFIG = 6,
	IPC_GET_VERSION = 7,
	IPC_GET_BINDING_MODES = 8,

	// sway-specific command types
	IPC_GET_INPUTS = 100,
	IPC_GET_CLIPBOARD = 101,
	IPC_GET_SEATS = 102,

	// Events sent from sway to clients. Events have the highest bits set.
	IPC_EVENT_WORKSPACE = ((1<<31) | 0),
	IPC_EVENT_OUTPUT = ((1<<31) | 1),
	IPC_EVENT_MODE = ((1<<31) | 2),
	IPC_EVENT_WINDOW = ((1<<31) | 3),
	IPC_EVENT_BARCONFIG_UPDATE = ((1<<31) | 4),
	IPC_EVENT_BINDING = ((1<<31) | 5),
	IPC_EVENT_MODIFIER = ((1<<31) | 6),
	IPC_EVENT_INPUT = ((1<<31) | 7),
};

#endif
