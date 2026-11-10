/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057f900; name: FUN_.text__0057f900
 */


void FUN__text__0057f900(long *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((int)param_1[1] != 0) && (uVar2 = (ulong)*(uint *)(param_1 + 2), *(uint *)(param_1 + 2) != 0)
     ) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(*param_1 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        memset(pvVar1,0,(ulong)(uint)((int)param_1[1] << 2));
        uVar2 = (ulong)*(uint *)(param_1 + 2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (((int)param_1[4] != 0) && (uVar2 = (ulong)*(uint *)(param_1 + 5), *(uint *)(param_1 + 5) != 0)
     ) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(param_1[3] + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        memset(pvVar1,0,(ulong)(uint)((int)param_1[4] << 2));
        uVar2 = (ulong)*(uint *)(param_1 + 5);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if ((void *)param_1[6] == (void *)0x0) {
    return;
  }
  memset((void *)param_1[6],0,(ulong)*(uint *)(param_1 + 7));
  return;
}


