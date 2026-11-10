/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028dfc0; name: FUN_.text__0028dfc0
 */


void FUN__text__0028dfc0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar4 = (long *)(param_1 + 0xb8);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0xb0) + 0xe8);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0));
  uVar6 = uVar5 & 0xffffffff;
  uVar1 = *(long *)(param_1 + 0xc0) - *plVar4 >> 2;
  *(uint *)(param_1 + 0x20c) = (int)uVar5 - 1U >> 1;
  *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0xac) * fVar7;
  *(float *)(param_1 + 0x204) = *(float *)(param_1 + 0xac) * (float)(uVar5 & 0xffffffff);
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    if (uVar6 < uVar1) {
      *(ulong *)(param_1 + 0xc0) = *plVar4 + uVar6 * 4;
    }
  }
  else {
    FUN__text__0028e860(plVar4,uVar6 - uVar1);
  }
  if ((int)uVar5 != 0) {
    uVar5 = uVar5 & 3;
    lVar2 = 0;
    if (2 < uVar6 - 1) {
      do {
        lVar3 = lVar2 * 4;
        lVar2 = lVar2 + 4;
        *(undefined4 *)(*plVar4 + lVar3) = 0xffffffff;
        *(undefined4 *)(*plVar4 + lVar3 + 4) = 0xffffffff;
        *(undefined4 *)(*plVar4 + lVar3 + 8) = 0xffffffff;
        *(undefined4 *)(*plVar4 + lVar3 + 0xc) = 0xffffffff;
      } while (uVar6 - uVar5 != lVar2);
    }
    if (uVar5 != 0) {
      lVar2 = lVar2 << 2;
      do {
        uVar5 = uVar5 - 1;
        *(undefined4 *)(*plVar4 + lVar2) = 0xffffffff;
        lVar2 = lVar2 + 4;
      } while (uVar5 != 0);
    }
  }
  FUN__text__0028e160(0,param_1);
  lVar2 = *(long *)(*(long *)(param_1 + 0xb0) + 0xe0) + (ulong)*(uint *)(param_1 + 0x20c) * 0x20;
  local_40 = *(undefined8 *)(lVar2 + 0x10);
  uStack_38 = *(undefined8 *)(lVar2 + 0x18);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),&uStack_38);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),&uStack_38);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),&local_40);
  return;
}


