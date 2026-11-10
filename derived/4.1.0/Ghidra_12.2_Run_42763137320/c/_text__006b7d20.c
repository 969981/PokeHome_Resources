/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7d20; name: FUN_.text__006b7d20
 */


void FUN__text__006b7d20(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar8 = &local_50;
  FUN__text__006c1d00(param_2,param_3,*(undefined8 *)(param_1 + 0x38),
                      *(undefined4 *)(param_1 + 0x40));
  uVar4 = *(ushort *)(param_1 + 0x10);
  puVar6 = (undefined8 *)
           FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3,
                               uVar4 >> 4 & 7,uVar4 >> 7 & 1);
  uVar4 = *(ushort *)(param_1 + 0x20);
  local_48 = *puVar6;
  puVar6 = (undefined8 *)
           FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3,
                               uVar4 >> 4 & 7,uVar4 >> 7 & 1);
  local_50 = *puVar6;
  iVar1 = *(int *)(param_1 + 0x40);
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
  bVar3 = *(byte *)(*(long *)(param_1 + 8) + 4);
  iVar5 = FUN__text__006b1998();
  uVar2 = *(undefined4 *)(lVar9 + (long)(iVar5 * iVar1) * 4);
  if ((bVar3 & 1) == 0) {
    FUN__text__006ee15c(param_3,uVar2,4,*(long *)(param_1 + 0x28) + 8,&local_50);
    iVar1 = *(int *)(param_1 + 0x40);
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
    iVar5 = FUN__text__006b1998();
    puVar8 = &local_48;
    uVar2 = *(undefined4 *)(lVar9 + (long)(iVar5 * iVar1) * 4 + 4);
    lVar9 = *(long *)(param_1 + 0x18);
  }
  else {
    FUN__text__006ee15c(param_3,uVar2,4,*(long *)(param_1 + 0x18) + 8,&local_48);
    iVar1 = *(int *)(param_1 + 0x40);
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
    iVar5 = FUN__text__006b1998();
    uVar2 = *(undefined4 *)(lVar9 + (long)(iVar5 * iVar1) * 4 + 4);
    lVar9 = *(long *)(param_1 + 0x28);
  }
  FUN__text__006ee15c(param_3,uVar2,4,lVar9 + 8,puVar8);
  uVar7 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),1);
  FUN__text__006d6610(param_3,param_2,uVar7);
  return;
}


