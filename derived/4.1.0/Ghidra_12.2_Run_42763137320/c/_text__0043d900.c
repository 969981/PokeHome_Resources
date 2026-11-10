/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043d900; name: FUN_.text__0043d900
 */


undefined8 FUN__text__0043d900(undefined8 param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  
  if (param_2[5] == 0) {
    uVar6 = *(uint *)(param_2 + 1);
    if (uVar6 == 0) {
      if (*param_2 == 0) {
        return 1;
      }
      plVar5 = (long *)(*param_2 + 0x68);
    }
    else {
      uVar2 = *(uint *)(DAT_00ae9a80 + 1);
      if (uVar2 == 0) {
        return 1;
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar6 / uVar2;
      }
      plVar5 = *(long **)(*DAT_00ae9a80 + (ulong)(uVar6 - uVar3 * uVar2) * 8);
      while( true ) {
        if (plVar5 == (long *)0x0) {
          return 1;
        }
        if (*(uint *)((long)plVar5 + 0x4c) == uVar6) break;
        plVar5 = (long *)plVar5[0xd];
      }
    }
  }
  else {
    plVar5 = (long *)(param_2[5] + 0x230);
  }
  uVar6 = *(uint *)(plVar5 + 1);
  if (*(uint *)((long)plVar5 + 0xc) <= uVar6) {
    uVar4 = FUN__text__0043dae0(plVar5);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(uint *)((long)plVar5 + 0xc) <= uVar6) {
      return 0;
    }
    uVar6 = *(uint *)(plVar5 + 1);
  }
  *(uint *)(plVar5 + 1) = uVar6 + 1;
  if (*plVar5 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(*plVar5 + (ulong)uVar6 * 8);
  *puVar1 = (int)param_1;
  *(char *)(puVar1 + 1) = (char)((ulong)param_1 >> 0x20);
  return 1;
}


