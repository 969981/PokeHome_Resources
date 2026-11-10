/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d73f0; name: FUN_.text__006d73f0
 */


bool FUN__text__006d73f0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1[1] + 0x238);
  if (*(uint *)(param_1 + 2) == 3) {
    lVar2 = 0;
    lVar5 = *(long *)(lVar4 + 0x300);
  }
  else {
    lVar2 = *(long *)(lVar4 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x340);
    lVar5 = *(long *)(lVar4 + 0x300);
  }
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar2 + 0x150);
    uStack_38 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x198);
    local_40 = *(long *)(*(long *)(lVar4 + 0x20) + 400) + *(long *)(lVar4 + 0x38);
    uVar3 = *param_1;
    if (*(int *)(lVar2 + 0x14c) != -1) {
      FUN__text__006ee1d4(uVar3,*(int *)(lVar2 + 0x14c),0,&local_40,*(undefined8 *)(lVar4 + 0x308));
    }
    if (iVar1 != -1) {
      FUN__text__006ee1d4(uVar3,iVar1,4,&local_40,*(undefined8 *)(lVar4 + 0x308));
    }
  }
  return lVar5 != 0;
}


