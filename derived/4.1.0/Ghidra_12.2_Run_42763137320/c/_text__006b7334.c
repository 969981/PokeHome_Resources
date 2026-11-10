/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7334; name: FUN_.text__006b7334
 */


void FUN__text__006b7334(long param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  
  lVar6 = *(long *)(param_1 + 0x58);
  uVar7 = (uint)*(byte *)(lVar6 + 8);
  puVar1 = (uint *)(param_1 + 0x178);
  if (((*(byte *)(lVar6 + 8) >> 2 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd4))) {
    uVar7 = *(byte *)(lVar6 + 0xf) - 1;
    if (uVar7 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006b7398 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__006b73a4 + (ulong)*(byte *)((ulong)uVar7 + 0x76635f) * 4))();
      return;
    }
    uVar7 = *puVar1;
    lVar8 = *(long *)(param_1 + 0xe0);
    FUN__text__006c1d00(param_2,param_3,lVar8,uVar7);
    local_78 = 0;
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_78 = *puVar4;
    lVar6 = *(long *)(lVar8 + 0x30);
    iVar3 = FUN__text__006b1998(lVar8);
    FUN__text__006ee15c(param_3,*(undefined4 *)(lVar6 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4,
                        *(long *)(param_1 + 0x90) + 8,&local_78);
    uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),0);
    FUN__text__006d6610(param_3,param_2,uVar5);
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar2[1];
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xbc);
    lVar6 = *(long *)(param_2 + 0xb8);
    FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar7 * 4),0,
                        &local_70,0x230);
    FUN__text__006eca30(param_3,3,1,lVar6 + 0x248,6,0);
    lVar6 = *(long *)(param_1 + 0x58);
    uVar7 = (uint)*(byte *)(lVar6 + 8);
  }
  if (((uVar7 >> 1 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd0))) {
    uVar7 = *(byte *)(lVar6 + 0xe) - 1;
    if (uVar7 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006b74ec */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__006b74f8 + (ulong)*(byte *)((ulong)uVar7 + 0x766363) * 4))();
      return;
    }
    uVar7 = *puVar1;
    lVar8 = *(long *)(param_1 + 0xe0);
    FUN__text__006c1d00(param_2,param_3,lVar8,uVar7);
    local_78 = 0;
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_78 = *puVar4;
    lVar6 = *(long *)(lVar8 + 0x30);
    iVar3 = FUN__text__006b1998(lVar8);
    FUN__text__006ee15c(param_3,*(undefined4 *)(lVar6 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4,
                        *(long *)(param_1 + 0x88) + 8,&local_78);
    uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),0);
    FUN__text__006d6610(param_3,param_2,uVar5);
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar2[1];
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb8);
    lVar6 = *(long *)(param_2 + 0xb8);
    FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar7 * 4),0,
                        &local_70,0x230);
    FUN__text__006eca30(param_3,3,1,lVar6 + 0x248,6,0);
    lVar6 = *(long *)(param_1 + 0x58);
    uVar7 = (uint)*(byte *)(lVar6 + 8);
  }
  if (((uVar7 & 1) != 0) && (-1 < *(int *)(param_1 + 0xcc))) {
    uVar7 = *(byte *)(lVar6 + 0xd) - 1;
    if (uVar7 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006b7640 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__006b764c + (ulong)*(byte *)((ulong)uVar7 + 0x766367) * 4))();
      return;
    }
    uVar7 = *puVar1;
    lVar8 = *(long *)(param_1 + 0xe0);
    FUN__text__006c1d00(param_2,param_3,lVar8,uVar7);
    local_78 = 0;
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_78 = *puVar4;
    lVar6 = *(long *)(lVar8 + 0x30);
    iVar3 = FUN__text__006b1998(lVar8);
    FUN__text__006ee15c(param_3,*(undefined4 *)(lVar6 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4,
                        *(long *)(param_1 + 0x80) + 8,&local_78);
    uVar5 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),0);
    FUN__text__006d6610(param_3,param_2,uVar5);
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar2[1];
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb4);
    lVar6 = *(long *)(param_2 + 0xb8);
    FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar7 * 4),0,
                        &local_70,0x230);
    FUN__text__006eca30(param_3,3,1,lVar6 + 0x248,6,0);
  }
  return;
}


