/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00512080; name: FUN_.text__00512080
 */


void FUN__text__00512080(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)param_2[3];
  plVar4 = plVar2;
  if ((int)param_2[4] != 0) {
    do {
      plVar3 = plVar4 + 1;
      *(undefined8 *)(*plVar4 + 0x38) = 0;
      plVar2 = (long *)param_2[3];
      plVar4 = plVar3;
    } while (plVar3 != plVar2 + *(uint *)(param_2 + 4));
  }
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    FUN__text__00400fc0(9);
    param_2[3] = 0;
    *(undefined4 *)((long)param_2 + 0x24) = 0;
  }
  if (param_2[5] != 0) {
    *(undefined4 *)(param_2 + 6) = 0;
    FUN__text__00400fc0(9);
    param_2[5] = 0;
    *(undefined4 *)((long)param_2 + 0x34) = 0;
  }
  plVar4 = (long *)*param_1;
  if ((plVar4 == (long *)0x0) || ((plVar4 <= param_2 && (param_2 < plVar4 + 0x380)))) {
    plVar2 = (long *)0x0;
    lVar5 = plVar4[0x382];
  }
  else {
    plVar2 = (long *)plVar4[0x380];
    lVar5 = lRam0000000000001c10;
    if (plVar2 == (long *)0x0) {
      plVar2 = plVar4;
      plVar4 = (long *)0x0;
    }
    else {
      do {
        plVar3 = plVar2;
        if ((plVar3 <= param_2) && (param_2 < plVar3 + 0x380)) {
          lVar5 = plVar3[0x382];
          plVar2 = plVar4;
          plVar4 = plVar3;
          goto joined_r0x005121b0;
        }
        plVar2 = (long *)plVar3[0x380];
        plVar4 = plVar3;
      } while (plVar2 != (long *)0x0);
      plVar4 = (long *)0x0;
      plVar2 = plVar3;
    }
  }
joined_r0x005121b0:
  if (lVar5 == 0) {
    plVar4[0x382] = (long)param_2;
    *param_2 = 0;
    iVar1 = (int)plVar4[0x381] + 1;
    *(int *)(plVar4 + 0x381) = iVar1;
  }
  else {
    *param_2 = lVar5;
    plVar4[0x382] = (long)param_2;
    iVar1 = (int)plVar4[0x381] + 1;
    *(int *)(plVar4 + 0x381) = iVar1;
  }
  if (iVar1 != 0x80) {
    return;
  }
  if ((long *)*param_1 != plVar4) {
    param_1 = plVar2 + 0x380;
  }
  *param_1 = plVar4[0x380];
  FUN__text__00400fc0(9);
  return;
}


