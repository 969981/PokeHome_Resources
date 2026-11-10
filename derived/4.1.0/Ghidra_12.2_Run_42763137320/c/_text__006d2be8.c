/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d2be8; name: FUN_.text__006d2be8
 */


void FUN__text__006d2be8(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                        long param_6)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_70;
  long lStack_68;
  
  local_70 = 0;
  lStack_68 = 0;
  lVar6 = *(long *)(param_1 + 0xd8);
  iVar4 = *(int *)(param_1 + 0xcc);
  uVar2 = *(uint *)(param_3 + 0xd0) & ((int)*(uint *)(param_3 + 0xd0) >> 0x1f ^ 0xffffffffU);
  FUN__text__006ec64c(*(long *)(*(long *)(param_2 + 200) + 8) +
                      (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
  local_70 = local_70 + lVar6;
  FUN__text__006ed12c(param_4,0,&local_70,8,(long)iVar4 << 3);
  lVar6 = *(long *)(param_6 + 0x10);
  iVar4 = *(int *)(param_3 + (ulong)uVar2 * 0x18 + 0x5c);
  if (-1 < iVar4) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar1[1];
    local_70 = *plVar1 + param_5;
    FUN__text__006ee1d4(param_4,iVar4,0,&local_70,0x40);
  }
  iVar4 = *(int *)(param_3 + (ulong)uVar2 * 0x18 + 0x60);
  if (-1 < iVar4) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar1[1];
    local_70 = *plVar1 + lVar6;
    FUN__text__006ee1d4(param_4,iVar4,4,&local_70,0x10);
  }
  FUN__text__006ecef4(param_4,*(long *)(param_2 + 0xb8) + 0x37c);
  uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),0);
  FUN__text__006ece50(param_4,uVar5);
  lVar6 = *(long *)(param_1 + 0xe0);
  local_70 = 0;
  lStack_68 = 0;
  iVar4 = *(int *)(param_6 + 4);
  uVar3 = *(undefined4 *)(param_6 + 8);
  FUN__text__006ec64c(*(long *)(*(long *)(param_2 + 200) + 8) +
                      (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
  local_70 = lVar6 + (long)iVar4 * 4 + local_70;
  FUN__text__006eca30(param_4,3,2,&local_70,uVar3,0);
  if (*(long *)(param_2 + 0x158) != 0) {
    FUN__text__006ecef4(param_4);
  }
  return;
}


