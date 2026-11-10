/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fa190; name: FUN_.text__003fa190
 */


void FUN__text__003fa190(undefined8 param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((long *)*param_2 != (long *)0x0) {
    plVar5 = (long *)*param_2;
    plVar4 = (long *)0x0;
    do {
      while ((plVar3 = plVar5, (char)plVar3[0xd] != '\0' &&
             (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3), (uVar2 & 1) != 0))) {
        plVar5 = (long *)plVar3[2];
        plVar1 = param_2;
        if ((long *)*param_2 != plVar3) {
          plVar1 = plVar4 + 2;
        }
        *plVar1 = (long)plVar5;
        (**(code **)*plVar3)(plVar3);
        FUN__text__00400fc0(7,plVar3);
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      plVar5 = (long *)plVar3[2];
      plVar4 = plVar3;
    } while ((long *)plVar3[2] != (long *)0x0);
  }
  return;
}


