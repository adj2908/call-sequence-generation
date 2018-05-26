#include <stdio.h>
#include <time.h>
 
static FILE *fp_trace;
//This instrumentation calls will invoke following two special functions(profiling functions.) 
// The profiling functions will be called with the address of the current function and its call site. 

void//this causes the function to be called automatically before execution enters main
__attribute__ ((constructor))
trace_begin (void)
{
 fp_trace = fopen("trace.out", "w");
}
 
void//this causes the function to be called automatically after main has completed or exit has been called
__attribute__ ((destructor))
trace_end (void)
{
 if(fp_trace != NULL) {
 fclose(fp_trace);
 }
}
//Just after function entry and just before function exit,the following profiling functions will be called  
void
__cyg_profile_func_enter (void *func,  void *caller)
{// The first argument is the address of the start of the current function
 if(fp_trace != NULL) {
 fprintf(fp_trace, "e %p %p %lu\n", func, caller, time(NULL) );
 }
}
 
void
__cyg_profile_func_exit (void *func, void *caller)
{
 if(fp_trace != NULL) {
 fprintf(fp_trace, "x %p %p %lu\n", func, caller, time(NULL));
 }
}