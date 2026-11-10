/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00518d90; name: FUN_.text__00518d90
 */


void FUN__text__00518d90(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 == (long *)0x0) || ((plVar2 <= param_2 && (param_2 < plVar2 + 0x70)))) {
    plVar3 = (long *)0x0;
    lVar5 = plVar2[0x72];
  }
  else {
    plVar3 = (long *)plVar2[0x70];
    lVar5 = lRam0000000000000390;
    if (plVar3 == (long *)0x0) {
      plVar3 = plVar2;
      plVar2 = (long *)0x0;
    }
    else {
      do {
        plVar4 = plVar3;
        if ((plVar4 <= param_2) && (param_2 < plVar4 + 0x70)) {
          lVar5 = plVar4[0x72];
          plVar3 = plVar2;
          plVar2 = plVar4;
          goto joined_r0x00518e60;
        }
        plVar3 = (long *)plVar4[0x70];
        plVar2 = plVar4;
      } while (plVar3 != (long *)0x0);
      plVar3 = plVar4;
      plVar2 = (long *)0x0;
    }
  }
joined_r0x00518e60:
  if (lVar5 == 0) {
    plVar2[0x72] = (long)param_2;
    *param_2 = 0;
    iVar1 = (int)plVar2[0x71] + 1;
    *(int *)(plVar2 + 0x71) = iVar1;
  }
  else {
    *param_2 = lVar5;
    plVar2[0x72] = (long)param_2;
    iVar1 = (int)plVar2[0x71] + 1;
    *(int *)(plVar2 + 0x71) = iVar1;
  }
  if (iVar1 != 8) {
    return;
  }
  if ((long *)*param_1 != plVar2) {
    param_1 = plVar3 + 0x70;
  }
  *param_1 = plVar2[0x70];
  FUN__text__00400fc0(0xb);
  return;
}


