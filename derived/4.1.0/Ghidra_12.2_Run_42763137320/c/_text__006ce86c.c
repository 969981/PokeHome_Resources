/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ce86c; name: FUN_.text__006ce86c
 */


void FUN__text__006ce86c(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                        long param_6,undefined4 param_7)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_70;
  long lStack_68;
  
  local_70 = 0;
  lStack_68 = 0;
  lVar5 = *(long *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN__text__006ec64c(*(long *)(*(long *)(param_2 + 200) + 8) +
                      (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
  local_70 = local_70 + lVar5;
  FUN__text__006ed12c(param_4,0,&local_70,8,(long)iVar3 << 3);
  lVar5 = *(long *)(param_6 + 0x10);
  if (-1 < *(int *)(param_3 + 0x5c)) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar1[1];
    local_70 = *plVar1 + param_5;
    FUN__text__006ee1d4(param_4,*(int *)(param_3 + 0x5c),0,&local_70,0x40);
  }
  if (-1 < *(int *)(param_3 + 0x60)) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar1[1];
    local_70 = *plVar1 + lVar5;
    FUN__text__006ee1d4(param_4,*(int *)(param_3 + 0x60),4,&local_70,0x10);
  }
  FUN__text__006ecef4(param_4,*(long *)(param_2 + 0xb8) + 0x37c);
  uVar4 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),param_7);
  FUN__text__006ece50(param_4,uVar4);
  lVar5 = *(long *)(param_1 + 0x38);
  local_70 = 0;
  lStack_68 = 0;
  iVar3 = *(int *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  FUN__text__006ec64c(*(long *)(*(long *)(param_2 + 200) + 8) +
                      (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
  local_70 = lVar5 + (long)iVar3 * 4 + local_70;
  FUN__text__006eca30(param_4,3,2,&local_70,uVar2,0);
  if (*(long *)(param_2 + 0x158) != 0) {
    FUN__text__006ecef4(param_4);
  }
  return;
}


