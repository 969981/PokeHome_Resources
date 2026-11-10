/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005067d0; name: FUN_.text__005067d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__005067d0(long param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if ((plVar5 == (long *)0x0) &&
     (plVar5 = (long *)FUN__text__00400f80(4,0x128), piVar1 = _DAT_008a3f68, plVar5 != (long *)0x0))
  {
    plVar5[1] = 0;
    plVar5[2] = 0;
    piVar2 = *(int **)(piVar1 + 2);
    *(long **)(piVar1 + 2) = plVar5;
    *piVar1 = *piVar1 + 1;
    lVar3 = _DAT_008a41e0;
    if (*(long *)(piVar1 + 4) != 0) {
      piVar1 = piVar2;
    }
    plVar5[3] = (long)piVar2;
    *(long **)(piVar1 + 4) = plVar5;
    plVar5[8] = -1;
    plVar5[9] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    *(undefined4 *)(plVar5 + 10) = 0;
    *(undefined4 *)(plVar5 + 0x13) = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    *(undefined4 *)(plVar5 + 0xf) = 0;
    *(undefined4 *)(plVar5 + 0x24) = 0;
    *plVar5 = lVar3 + 0x10;
    plVar5[0x1c] = 7;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0x16] = 3;
    plVar5[0x17] = 5;
    plVar5[0x1a] = 3;
    plVar5[0x1b] = 5;
    plVar5[0x20] = 0;
    plVar5[0x21] = 0;
    plVar5[0x14] = 0;
    plVar5[0x15] = 1;
    plVar5[0x18] = 7;
    plVar5[0x19] = 1;
    plVar5[0x22] = 0;
    plVar5[0x23] = 0;
    *(long **)(param_1 + 0x48) = plVar5;
    plVar5[1] = param_1;
    iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x58));
    if (iVar4 != 1) {
      (**(code **)*plVar5)(plVar5);
      FUN__text__00400fc0(4,plVar5);
      *(undefined8 *)(param_1 + 0x48) = 0;
      return (long *)0x0;
    }
  }
  return plVar5;
}


