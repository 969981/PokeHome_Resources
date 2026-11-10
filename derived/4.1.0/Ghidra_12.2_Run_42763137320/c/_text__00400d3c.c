/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00400d3c; name: FUN_.text__00400d3c
 */


int FUN__text__00400d3c(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if ((param_2 == 0) || (lVar6 = *(long *)(param_1 + 200), lVar6 == 0)) {
    iVar5 = FUN__text__003fd2f0(param_1,param_2);
    return iVar5;
  }
  iVar2 = *(int *)(*(long *)(lVar6 + 8) + 0x18);
  *(byte *)(lVar6 + 0x14) = *(byte *)(lVar6 + 0x14) & 0xf8 | 2;
  lVar7 = *(long *)(param_1 + 200);
  uVar3 = *(uint *)(param_1 + 0x90);
  iVar2 = iVar2 - *(int *)(lVar6 + 0x10);
  lVar6 = **(long **)(lVar7 + 8);
  uVar4 = *(uint *)(*(long **)(lVar7 + 8) + 3);
  uVar1 = lVar6 + (ulong)*(uint *)(lVar7 + 0x10);
  iVar5 = (int)uVar1 - uVar3;
  if (lVar6 + (ulong)uVar4 <= (ulong)uVar3 || uVar3 <= uVar1) {
    iVar5 = *(uint *)(lVar7 + 0x10) - uVar4;
  }
  *(int *)(param_1 + 0x98) = iVar5 + *(int *)(param_1 + 0x98);
  *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(*(long *)(lVar7 + 8) + 0x18);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  iVar5 = FUN__text__003fd2f0(param_1,param_2 - iVar2);
  return iVar5 + iVar2;
}


