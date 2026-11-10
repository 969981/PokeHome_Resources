/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051cae0; name: FUN_.text__0051cae0
 */


void FUN__text__0051cae0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar2 = (long *)*param_1;
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) == 0) {
    if (plVar2 == (long *)0x0) goto LAB__text__0051cb94;
  }
  else {
    plVar1 = plVar2;
    do {
      plVar4 = plVar1;
      if (*plVar4 != 0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        FUN__text__00400fc0(0xb,*plVar4);
        *plVar4 = 0;
        *(undefined4 *)((long)plVar4 + 0xc) = 0;
        plVar2 = (long *)*param_1;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      }
      plVar1 = plVar4 + 4;
    } while (plVar4 + 4 != plVar2 + uVar3 * 4);
    if (plVar2 == (long *)0x0) {
LAB__text__0051cb94:
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    if (uVar3 != 0) {
      plVar2 = plVar2 + -4;
      do {
        if (plVar2[4] != 0) {
          *(undefined4 *)(plVar2 + 5) = 0;
          FUN__text__00400fc0(0xb);
          plVar2[4] = 0;
          *(undefined4 *)((long)plVar2 + 0x2c) = 0;
        }
        plVar2 = plVar2 + 4;
      } while (plVar4 != plVar2);
      plVar2 = (long *)*param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN__text__00400fc0(10,plVar2);
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


