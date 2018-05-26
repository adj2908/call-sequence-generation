/* 
 * AUTO GENERATED FILE. DO NOT MODIFY.
 * 
 * USE "generate_trace_input.sh" script to create this file.
 */

/*
 * Where should the result output trace contents should be written to?
 */
static const char * matches[] = {
"__libc_malloc",
"malloc",
"malloc_get_state",
"__malloc_hook",
"malloc_info",
"__malloc_initialize_hook",
"malloc_set_state",
"malloc_stats",
"malloc_trim",
"malloc_usable_size",
};
static const char * blacklist[] = {
"__libc_malloc",
"malloc",
"malloc_get_state",
"__malloc_hook",
"malloc_info",
"__malloc_initialize_hook",
"malloc_set_state",
"malloc_stats",
"malloc_trim",
"malloc_usable_size",
};
static const char * programs[] = {
"/lib/i386-linux-gnu/libc.so.6",
};

/*
 * Which white listed functions, blacklisted functions and 
 * additional, external libraries (if any) are to be loaded while the
 * program is being traced?
 */
static const char * output_trace_filename = 
  "trace.out";
