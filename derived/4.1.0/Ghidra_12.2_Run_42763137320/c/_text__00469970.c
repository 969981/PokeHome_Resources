/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469970; name: FUN_.text__00469970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00469970(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  uVar7 = *(uint *)(param_1 + 0xd2) & 0x3ff;
  if ((((*(long *)(param_1 + 0x58) != 0) && ((*(byte *)(*(long *)(param_1 + 0x58) + 2) & 1) != 0))
      && (uVar7 != 0)) && (*(uint *)(param_1 + 0x50) != 0)) {
    plVar5 = *(long **)(param_1 + 0x48);
    lVar6 = (ulong)*(uint *)(param_1 + 0x50) << 3;
    do {
      if (*(int *)(*plVar5 + 8) == 0x10) {
        local_78 = 0;
        local_70 = 0;
        local_58 = 0;
        local_80 = 0;
        local_68 = 0xff;
        local_60 = 0xff;
        fVar10 = (float)FUN__text__00435a30(*_DAT_008a45f0,*plVar5,&local_80);
        uVar7 = (uint)fVar10;
        lVar6 = *(long *)(param_1 + 0x70);
        goto joined_r0x00469ab8;
      }
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  lVar6 = *(long *)(param_1 + 0x70);
joined_r0x00469ab8:
  if (lVar6 == 0) {
    FUN__text__00464cf0(param_1);
  }
  if (uVar7 == 0) {
    return 1;
  }
  lVar6 = *(long *)(param_2 + 8);
  if ((lVar6 != 0) && (lVar8 = *(long *)(param_1 + 0x70), lVar8 != 0)) {
    uVar9 = *(uint *)(lVar6 + 0x10);
    uVar2 = *(uint *)(lVar6 + 0x14);
    if (uVar2 <= uVar9) {
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar3 = FUN__text__0046b710(lVar6,iVar1);
      if (((uVar3 & 1) == 0) || (*(uint *)(lVar6 + 0x14) <= uVar9)) goto LAB__text__00469a48;
      uVar9 = *(uint *)(lVar6 + 0x10);
    }
    *(uint *)(lVar6 + 0x10) = uVar9 + 1;
    if (*(long *)(lVar6 + 8) != 0) {
      *(long *)(*(long *)(lVar6 + 8) + (ulong)uVar9 * 8) = lVar8 + 0x80;
    }
  }
LAB__text__00469a48:
  uVar4 = 1;
  if ((((param_3 & 1) != 0) && (*(char *)(param_2 + 0x29) != '\0')) &&
     (*(short *)(param_2 + 0x26) == 0)) {
    lVar6 = *(long *)(param_1 + 0x70);
    if (lVar6 == 0) {
      if (0 < (int)uVar7) {
        return 1;
      }
    }
    else if ((int)((uint)*(ushort *)(lVar6 + 0xa8) - (uint)*(ushort *)(lVar6 + 0xaa)) < (int)uVar7)
    {
      return 1;
    }
    local_80 = 0;
    uVar4 = FUN__text__00471e40(*(undefined4 *)(param_2 + 0x20),lVar6 + 0x80,uVar7,0,
                                *(uint *)(param_1 + 0xd2) >> 10 & 1,
                                *(uint *)(param_1 + 0xd2) >> 0xb & 1,&local_80,1);
    *(short *)(param_2 + 0x26) = *(short *)(param_2 + 0x26) + 1;
  }
  return uVar4;
}


