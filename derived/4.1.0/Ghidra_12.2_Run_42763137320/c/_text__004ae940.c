/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae940; name: FUN_.text__004ae940
 */


long FUN__text__004ae940(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  uint local_34;
  
  puVar5 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x18);
  uVar2 = *puVar5;
  if (param_2 <= uVar2) {
    *puVar5 = uVar2 - param_2;
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      *(ulong *)(param_1 + 0x10) = lVar4 + (ulong)param_2;
      return lVar4;
    }
    *(ulong *)(param_1 + 0x50) = lVar4 + (ulong)param_2;
    return lVar4;
  }
  uVar2 = uVar2 & 0x1f;
  uVar1 = param_2;
  if (uVar2 != 0) {
    uVar1 = param_2 + 0x1f;
  }
  lVar4 = FUN__text__00400f90(0,uVar1,0x20);
  *(long *)(param_1 + 0x38) = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = 0x20 - uVar2;
  }
  lVar4 = lVar4 + (ulong)uVar1;
  iVar3 = FUN__text__004aea70(param_1,lVar4,param_2,&local_34,0xffffffff);
  if (iVar3 != 1 || local_34 != param_2) {
    FUN__text__00400fc0(0,*(undefined8 *)(param_1 + 0x38));
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return lVar4;
}


