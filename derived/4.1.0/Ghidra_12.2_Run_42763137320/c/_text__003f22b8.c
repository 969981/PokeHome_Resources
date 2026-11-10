/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f22b8; name: FUN_.text__003f22b8
 */


void FUN__text__003f22b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar1,param_1[2],param_1[3]);
  }
  puVar1 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],puVar1,param_1[6],param_1[7]);
  }
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar1,param_1[10],param_1[0xb]);
  }
  puVar1 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],puVar1,param_1[0xe],param_1[0xf]);
  }
  puVar1 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],puVar1,param_1[0x12],param_1[0x13]);
  }
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],plVar2,param_1[0x16],param_1[0x17]);
  }
  puVar1 = (undefined8 *)param_1[0x18];
  param_1[0x18] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],puVar1,param_1[0x1a],param_1[0x1b]);
  }
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],plVar2,param_1[0x16],param_1[0x17]);
  }
  puVar1 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],puVar1,param_1[0x12],param_1[0x13]);
  }
  puVar1 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],puVar1,param_1[0xe],param_1[0xf]);
  }
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar1,param_1[10],param_1[0xb]);
  }
  puVar1 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],puVar1,param_1[6],param_1[7]);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x003f2570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar1,param_1[2],param_1[3]);
  return;
}


