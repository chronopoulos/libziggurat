#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <pthread.h>
#include <jack/midiport.h>
#include <jack/ringbuffer.h>

#define MAX_NAME_LENGTH 255

typedef jack_midi_data_t midi_packet[3]; // equivalent to 3 unsigned chars

struct zig_sequence_data {

    int nsteps;
    int tps;
    jack_nframes_t fpt;

    char name[MAX_NAME_LENGTH + 1];
    int transpose;

    struct zig_trigger_data *trigs;

    int nticks;
    midi_packet *ticks;

    int tick;
    jack_nframes_t frame;

};

void zig_sequence_init(struct zig_sequence_data*, int, int, int);
void zig_sequence_set_name(struct zig_sequence_data*, const char*);
void zig_sequence_set_raw_tick(struct zig_sequence_data*, int, midi_packet*);
void zig_sequence_set_trig(struct zig_sequence_data*, int, struct zig_trigger_data*);
void zig_sequence_clear_trig(struct zig_sequence_data*, int);
void zig_sequence_process(struct zig_sequence_data*, jack_nframes_t, void*);

#endif
