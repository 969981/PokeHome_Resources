/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b8d8c; name: FUN_.text__006b8d8c
 */


void FUN__text__006b8d8c(long param_1,long *param_2,undefined8 param_3,ulong param_4,int param_5,
                        uint param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  lVar8 = param_1 + 0x58 + (param_4 & 0xffffffff) * 4;
  iVar9 = *(int *)(lVar8 + 0x44);
  iVar5 = *(int *)(lVar8 + 0x74);
  iVar11 = *(int *)(lVar8 + 0x68);
  iVar2 = *(int *)(lVar8 + 0x50);
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  lVar12 = param_2[0x1f];
  lVar10 = param_2[0x2a];
  local_80 = 0;
  uStack_78 = 0;
  lVar8 = *(long *)(param_1 + 0x78) + 0x40;
  lVar16 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 8) != 0) {
    lVar16 = *(long *)(param_1 + 0x48);
  }
  lVar13 = *(long *)(param_1 + 0xe0);
  FUN__text__006eda8c(param_3,lVar8,&local_80,0);
  param_2[0x1f] = lVar8;
  param_2[0x2a] = 0;
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  FUN__text__006ed17c(param_3,*(long *)(param_1 + 0x78) + 0x88);
  lVar8 = param_1 + 0x58 + (long)iVar5 * 4;
  uVar1 = *(uint *)(lVar8 + 0x90);
  FUN__text__006c1d00(param_2,param_3,lVar13,uVar1);
  puVar6 = (undefined8 *)FUN__text__006d65f8(param_2[0x17],0x24);
  local_88 = *puVar6;
  lVar15 = *(long *)(lVar13 + 0x30);
  iVar4 = FUN__text__006b1998(lVar13);
  FUN__text__006ee15c(param_3,*(undefined4 *)(lVar15 + (long)(int)(iVar4 * (uVar1 & 0xff)) * 4),4,
                      lVar16 + 8,&local_88);
  iVar4 = *(int *)(lVar8 + 0x128);
  plVar14 = (long *)(*(long *)(param_2[0x19] + 0x10) + (long)*(int *)(param_2[0x19] + 0x30) * 0x10);
  lStack_90 = plVar14[1];
  local_98 = *plVar14 + (long)iVar11;
  if (-1 < iVar4) {
    FUN__text__006ee1d4(param_3,iVar4,4,&local_98,0xe0);
  }
  uVar7 = FUN__text__006d5724(param_2[0x17],1);
  FUN__text__006d6610(param_3,param_2,uVar7);
  plVar14 = (long *)(*(long *)(param_2[0x19] + 0x10) + (long)*(int *)(param_2[0x19] + 0x30) * 0x10);
  lStack_68 = plVar14[1];
  local_70 = *plVar14 + (long)iVar9;
  lVar8 = param_2[0x17];
  FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar13 + 0x18) + (long)(int)uVar1 * 4),0,
                      &local_70,0x230);
  FUN__text__006eca30(param_3,3,1,lVar8 + 0x248,6,0);
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  FUN__text__006eddd4(param_3,0x80);
  FUN__text__006eddfc(param_3,0x20);
  param_2[0x1f] = lVar12;
  param_2[0x2a] = lVar10;
  FUN__text__0069deb0(param_2,param_3);
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  plVar14 = (long *)(param_1 + 0x58);
  bVar3 = (param_6 & 1) == 0;
  iVar9 = 0x10;
  if (bVar3) {
    iVar9 = 8;
  }
  iVar11 = 0xc;
  if (bVar3) {
    iVar11 = 4;
  }
  if (param_5 != 4) {
    iVar9 = iVar11;
  }
  if ((*(byte *)(*plVar14 + 8) & 0x40) != 0) {
    iVar9 = iVar9 + 0x10;
  }
  iVar9 = iVar9 + iVar5;
  uVar1 = *(uint *)((long)plVar14 + (long)iVar9 * 4 + 0x90);
  FUN__text__006c1d00(param_2,param_3,lVar13,uVar1);
  lVar8 = *(long *)(lVar13 + 0x30);
  iVar5 = FUN__text__006b1998(lVar13);
  FUN__text__006ee15c(param_3,*(undefined4 *)(lVar8 + (long)(int)(iVar5 * (uVar1 & 0xff)) * 4),4,
                      *(long *)(param_1 + 0x78) + 8,&local_88);
  if ((*(byte *)(*plVar14 + 8) >> 3 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 8);
    lVar16 = *(long *)(lVar13 + 0x30);
    iVar5 = FUN__text__006b1998(lVar13);
    plVar14 = (long *)(param_1 + 0x68);
    if (lVar8 != 0) {
      plVar14 = (long *)(param_1 + 0x48);
    }
    FUN__text__006ee15c(param_3,*(undefined4 *)
                                 (lVar16 + (long)(int)(iVar5 * (uVar1 & 0xff)) * 4 + 4),4,
                        *plVar14 + 8,&local_88);
  }
  iVar9 = *(int *)(param_1 + (long)iVar9 * 4 + 0x180);
  if (-1 < iVar9) {
    FUN__text__006ee1d4(param_3,iVar9,4,&local_98,0xe0);
  }
  uVar7 = FUN__text__006d5724(param_2[0x17],param_5);
  FUN__text__006d6610(param_3,param_2,uVar7);
  plVar14 = (long *)(*(long *)(param_2[0x19] + 0x10) + (long)*(int *)(param_2[0x19] + 0x30) * 0x10);
  lStack_68 = plVar14[1];
  local_70 = *plVar14 + (long)iVar2;
  lVar8 = param_2[0x17];
  FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar13 + 0x18) + (long)(int)uVar1 * 4),0,
                      &local_70,0x230);
  FUN__text__006eca30(param_3,3,1,lVar8 + 0x248,6,0);
  return;
}


