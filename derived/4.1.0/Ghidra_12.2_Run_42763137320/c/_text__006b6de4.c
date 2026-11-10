/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b6de4; name: FUN_.text__006b6de4
 */


void FUN__text__006b6de4(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  ushort local_11c;
  ushort local_11a;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  
  lVar8 = *(long *)(param_1 + 0x58);
  if ((lVar8 == 0) || ((*(byte *)(param_1 + 0x228) >> 2 & 1) != 0)) {
    uVar10 = (uint)*(byte *)(lVar8 + 8);
  }
  else {
    uVar10 = (uint)*(byte *)(lVar8 + 8);
    if (((*(byte *)(lVar8 + 8) >> 5 & 1) != 0) && (*(char *)(param_1 + 0x98) != '\0')) {
      return;
    }
  }
  lStack_80 = param_2[0x27];
  local_78 = param_2[0x28];
  lStack_90 = param_2[0x25];
  local_88 = param_2[0x26];
  plVar1 = param_2 + 0x26;
  plVar2 = param_2 + 0x20;
  lStack_70 = param_2[0x29];
  lVar4 = param_2[0x2a];
  lStack_b0 = param_2[0x21];
  local_a8 = param_2[0x22];
  lStack_a0 = param_2[0x23];
  local_98 = param_2[0x24];
  lVar3 = param_2[0x1f];
  local_b8 = param_2[0x20];
  if (((uVar10 >> 2 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd4))) {
    local_c8 = 0;
    lStack_c0 = 0;
    local_d8 = 0;
    lStack_d0 = 0;
    local_e8 = 0;
    lStack_e0 = 0;
    local_f8 = 0;
    lStack_f0 = 0;
    local_108 = 0;
    lStack_100 = 0;
    if (((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) && ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0)) {
      (**(code **)(*param_2 + 0x20))(param_2,param_3);
      lVar8 = *(long *)(param_1 + 0x90) + 0x40;
      local_118 = 0xff000000ff;
      uStack_110 = 0xff000000ff;
      FUN__text__006eda8c(param_3,lVar8,&local_118,0);
      (**(code **)(**(long **)(param_1 + 0x90) + 0x20))(&local_11c);
      uVar5 = NEON_ucvtf((uint)local_11c);
      uVar6 = NEON_ucvtf((uint)local_11a);
      FUN__text__006c1d60((short)uVar5,(short)uVar6,&local_108,&local_d8);
      param_2[0x1f] = lVar8;
      param_2[0x2a] = 0;
      param_2[0x22] = local_f8;
      param_2[0x23] = lStack_f0;
      param_2[0x24] = local_e8;
      param_2[0x25] = lStack_e0;
      *plVar2 = local_108;
      param_2[0x21] = lStack_100;
      param_2[0x28] = local_c8;
      param_2[0x29] = lStack_c0;
      *plVar1 = local_d8;
      param_2[0x27] = lStack_d0;
      (**(code **)(*param_2 + 0x18))(param_2,param_3);
      lVar8 = *(long *)(param_1 + 0x58);
      uVar7 = 1;
    }
    else {
      uVar10 = *(byte *)(lVar8 + 0xf) - 1;
      if (uVar10 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006b6ec4 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__006b6ed0 + (ulong)*(byte *)((ulong)uVar10 + 0x766353) * 4))();
        return;
      }
      uVar7 = 0;
    }
    FUN__text__006b8d8c(param_1,param_2,param_3,2,uVar7,*(byte *)(lVar8 + 8) >> 3 & 1);
    lVar8 = *(long *)(param_1 + 0x58);
  }
  bVar9 = *(byte *)(lVar8 + 8);
  if (((bVar9 >> 1 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd0))) {
    local_c8 = 0;
    lStack_c0 = 0;
    local_d8 = 0;
    lStack_d0 = 0;
    local_e8 = 0;
    lStack_e0 = 0;
    local_f8 = 0;
    lStack_f0 = 0;
    local_108 = 0;
    lStack_100 = 0;
    if (((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) && ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0)) {
      (**(code **)(*param_2 + 0x20))(param_2,param_3);
      lVar8 = *(long *)(param_1 + 0x88) + 0x40;
      local_118 = 0xff000000ff;
      uStack_110 = 0xff000000ff;
      FUN__text__006eda8c(param_3,lVar8,&local_118,0);
      (**(code **)(**(long **)(param_1 + 0x88) + 0x20))(&local_11c);
      uVar5 = NEON_ucvtf((uint)local_11c);
      uVar6 = NEON_ucvtf((uint)local_11a);
      FUN__text__006c1d60((short)uVar5,(short)uVar6,&local_108,&local_d8);
      param_2[0x1f] = lVar8;
      param_2[0x2a] = 0;
      param_2[0x22] = local_f8;
      param_2[0x23] = lStack_f0;
      param_2[0x24] = local_e8;
      param_2[0x25] = lStack_e0;
      *plVar2 = local_108;
      param_2[0x21] = lStack_100;
      param_2[0x28] = local_c8;
      param_2[0x29] = lStack_c0;
      *plVar1 = local_d8;
      param_2[0x27] = lStack_d0;
      (**(code **)(*param_2 + 0x18))(param_2,param_3);
      lVar8 = *(long *)(param_1 + 0x58);
      uVar7 = 1;
    }
    else {
      uVar10 = *(byte *)(lVar8 + 0xe) - 1;
      if (uVar10 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006b701c */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__006b7028 + (ulong)*(byte *)((ulong)uVar10 + 0x766357) * 4))();
        return;
      }
      uVar7 = 0;
    }
    FUN__text__006b8d8c(param_1,param_2,param_3,1,uVar7,*(byte *)(lVar8 + 8) >> 3 & 1);
    lVar8 = *(long *)(param_1 + 0x58);
    bVar9 = *(byte *)(lVar8 + 8);
  }
  if (((bVar9 & 1) != 0) && (-1 < *(int *)(param_1 + 0xcc))) {
    local_c8 = 0;
    lStack_c0 = 0;
    local_d8 = 0;
    lStack_d0 = 0;
    local_e8 = 0;
    lStack_e0 = 0;
    local_f8 = 0;
    lStack_f0 = 0;
    local_108 = 0;
    lStack_100 = 0;
    if (((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) && ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0)) {
      (**(code **)(*param_2 + 0x20))(param_2,param_3);
      lVar8 = *(long *)(param_1 + 0x80) + 0x40;
      local_118 = 0xff000000ff;
      uStack_110 = 0xff000000ff;
      FUN__text__006eda8c(param_3,lVar8,&local_118,0);
      (**(code **)(**(long **)(param_1 + 0x80) + 0x20))(&local_11c);
      uVar5 = NEON_ucvtf((uint)local_11c);
      uVar6 = NEON_ucvtf((uint)local_11a);
      FUN__text__006c1d60((short)uVar5,(short)uVar6,&local_108,&local_d8);
      param_2[0x1f] = lVar8;
      param_2[0x2a] = 0;
      param_2[0x22] = local_f8;
      param_2[0x23] = lStack_f0;
      param_2[0x24] = local_e8;
      param_2[0x25] = lStack_e0;
      *plVar2 = local_108;
      param_2[0x21] = lStack_100;
      param_2[0x28] = local_c8;
      param_2[0x29] = lStack_c0;
      *plVar1 = local_d8;
      param_2[0x27] = lStack_d0;
      (**(code **)(*param_2 + 0x18))(param_2,param_3);
      lVar8 = *(long *)(param_1 + 0x58);
      uVar7 = 1;
    }
    else {
      uVar10 = *(byte *)(lVar8 + 0xd) - 1;
      if (uVar10 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006b7174 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__006b7180 + (ulong)*(byte *)((ulong)uVar10 + 0x76635b) * 4))();
        return;
      }
      uVar7 = 0;
    }
    FUN__text__006b8d8c(param_1,param_2,param_3,0,uVar7,*(byte *)(lVar8 + 8) >> 3 & 1);
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 == 0) {
      return;
    }
  }
  if (((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) && ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0)) {
    (**(code **)(*param_2 + 0x20))(param_2,param_3);
    FUN__text__006eddd4(param_3,0x80);
    FUN__text__006eddfc(param_3,0x20);
    *(undefined1 *)(param_1 + 0x98) = 1;
    param_2[0x1f] = lVar3;
    param_2[0x2a] = lVar4;
    param_2[0x24] = local_98;
    param_2[0x25] = lStack_90;
    param_2[0x22] = local_a8;
    param_2[0x23] = lStack_a0;
    *plVar2 = local_b8;
    param_2[0x21] = lStack_b0;
    param_2[0x28] = local_78;
    param_2[0x29] = lStack_70;
    *plVar1 = local_88;
    param_2[0x27] = lStack_80;
    FUN__text__0069deb0(param_2,param_3);
    (**(code **)(*param_2 + 0x18))(param_2,param_3);
  }
  return;
}


