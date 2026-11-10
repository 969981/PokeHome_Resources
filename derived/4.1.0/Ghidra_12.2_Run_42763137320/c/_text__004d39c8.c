/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d39c8; name: FUN_.text__004d39c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004d39c8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [4];
  undefined1 auStack_44 [4];
  
  plVar1 = (long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = param_2;
  FUN__text__0045ce04(plVar1,param_5);
  *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0xfc | *(long *)(param_1 + 0x68) == 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar10 = *(long *)(param_1 + 0x78);
    if (lVar10 == 0) {
      return 2;
    }
    lVar7 = FUN__text__00400f80(5,0x228);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 0x34;
    }
    FUN__text__004d9980(lVar7,lVar10,*(undefined8 *)(param_1 + 0x68));
    *(long *)(param_1 + 8) = lVar7;
    puVar2 = _DAT_008a4678;
    uVar11 = *_DAT_008a4678;
    uVar6 = FUN__text__00478e4c(lVar7);
    uVar8 = FUN__text__0048f160(uVar11,uVar6);
    bVar3 = 2;
    if ((uVar8 & 1) == 0) {
      bVar3 = 0;
    }
    uVar11 = *puVar2;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfd | bVar3;
    uVar6 = FUN__text__00478e4c(*(undefined8 *)(param_1 + 8));
    bVar3 = FUN__text__0048f1e0(uVar11,uVar6);
    local_48[0] = 0;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0x83 | (bVar3 & 0x1f) << 2;
    *(long *)(*(long *)(param_1 + 8) + 0x218) = param_1;
    uVar11 = FUN__text__00477cb0(0xbf800000,*(undefined8 *)(param_1 + 8),0,1,auStack_44,0,local_48);
    if ((int)uVar11 != 1) {
      return uVar11;
    }
    uVar11 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
    if ((int)uVar11 != 1) {
      return uVar11;
    }
    local_80 = 0;
    local_78 = 0xff00;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0x100000000;
    uStack_50 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x68))(*(long **)(param_1 + 8),&local_80,1);
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x1d0);
    (**(code **)(*plVar9 + 0x148))(plVar9,&local_80,*(long *)(param_1 + 8) + 0x78,1);
    FUN__text__004786dc(*(undefined8 *)(param_1 + 8));
  }
  *(uint *)(param_1 + 0x160) = param_3;
  *(undefined4 *)(param_1 + 0x1b0) = 4;
  uVar8 = FUN__text__0045cf78(plVar1);
  if (((param_3 & 0xf00) != 0x300) && ((uVar8 & 1) != 0)) {
    plVar9 = (long *)FUN__text__00400f80(5,0x98);
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(param_1 + 400) = 0;
      return 0x34;
    }
    plVar9[2] = 0;
    *(undefined4 *)(plVar9 + 3) = 0;
    *(undefined4 *)(plVar9 + 4) = 0;
    *(undefined1 *)(plVar9 + 5) = 0xff;
    *(undefined1 *)(plVar9 + 6) = 0xff;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = 0;
    lVar10 = _DAT_008a4f10 + 0x10;
    lVar7 = _DAT_008a4f10 + 0x58;
    plVar9[0x11] = 0;
    *plVar9 = lVar10;
    plVar9[1] = lVar7;
    *(undefined4 *)(plVar9 + 0x12) = 0xffffffff;
    plVar9[0xf] = 0;
    plVar9[0x10] = 0;
    *(long **)(param_1 + 400) = plVar9;
  }
  if (*plVar1 == 0) {
    bVar3 = *(byte *)(param_1 + 0x1ac);
    sVar5 = 0;
    sVar4 = 0;
    if (*(short *)(param_1 + 0x1a8) != 0) goto LAB__text__004d3c70;
  }
  else {
    sVar4 = FUN__text__0046697c(*plVar1,*(undefined8 *)(param_1 + 0x78));
    bVar3 = *(byte *)(param_1 + 0x1ac);
    sVar5 = sVar4;
    if ((sVar4 != 0) == (*(short *)(param_1 + 0x1a8) == 0)) {
LAB__text__004d3c70:
      *(short *)(param_1 + 0x1a8) = sVar5;
      *(byte *)(param_1 + 0x1ac) = bVar3 | 2;
      lVar10 = *(long *)(param_1 + 8);
      goto joined_r0x004d3c18;
    }
  }
  *(short *)(param_1 + 0x1a8) = sVar4;
  if ((bVar3 >> 1 & 1) == 0) {
    return 1;
  }
  lVar10 = *(long *)(param_1 + 8);
joined_r0x004d3c18:
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x174) = 0x42ca0000;
  }
  return 1;
}


