#ifndef __EXAMPLE__CONFIG_H__
#define __EXAMPLE__CONFIG_H__

#define PULSE_METER              1  // see pulse_meter.cpp

// the active example is the one that will be compiled
#if !defined(ACTIVE_EXAMPLE)
#define ACTIVE_EXAMPLE PULSE_METER
#endif

// the active channel plan is the one that will be compiled
// options are :
//      CP_US915
//      CP_AU915
//      CP_EU868
//      CP_KR920
//      CP_AS923
//      CP_AS923_JAPAN
//      CP_IN865
#if !defined(CHANNEL_PLAN)
#define CHANNEL_PLAN CP_AU915
#endif


// actives generation of test data
// 0: deactivated
// 1: activated
#if !defined(TEST_DATA_GEN)
#define TEST_DATA_GEN 1
#endif

#endif
