/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064d5f0; name: FUN_.text__0064d5f0
 */


void FUN__text__0064d5f0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = DAT_00c5f5c0;
  if (DAT_00c5f5c0 != (undefined8 *)0x0 && DAT_00c5f5c8 != (long *)0x0) {
    plVar3 = (long *)*DAT_00c5f5c0;
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3;
      if ((long *)DAT_00c5f5c0[1] != plVar3) {
        plVar2 = (long *)DAT_00c5f5c0[1];
        do {
          plVar4 = plVar2 + -1;
          if (*plVar4 != 0) {
            (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
            plVar2[-1] = 0;
          }
          plVar2 = plVar4;
        } while (plVar4 != plVar3);
        plVar2 = (long *)*puVar1;
      }
      puVar1[1] = plVar3;
      (**(code **)(*(long *)puVar1[3] + 0x18))((long *)puVar1[3],plVar2,puVar1[2] - (long)plVar2,8);
    }
    (**(code **)(*DAT_00c5f5c8 + 0x18))(DAT_00c5f5c8,DAT_00c5f5c0,0x30,8);
  }
  DAT_00c5f5c0 = (undefined8 *)0x0;
  DAT_00c5f5c8 = (long *)0x0;
  return;
}


