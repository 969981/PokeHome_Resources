/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00479300; name: FUN_.text__00479300
 */


undefined8 FUN__text__00479300(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  plVar1 = (long *)(param_1 + 0x1b8);
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 8);
  uVar4 = *(ushort *)(lVar7 + 0x38);
  uVar11 = (ulong)uVar4;
  if (*(uint *)(param_1 + 0x1c4) < (uint)uVar4) {
    if (*(long *)(param_1 + 0x1b8) == 0) {
      uVar6 = *(uint *)(param_1 + 0x1c0);
      lVar7 = FUN__text__00400f80(0,uVar11 * 0x38);
      if (lVar7 == 0) {
        return 0x34;
      }
      lVar5 = *plVar1;
      if ((lVar5 != 0) && (lVar5 != lVar7)) {
        if (uVar6 != 0) {
          lVar5 = 0;
          do {
            puVar10 = (undefined8 *)(lVar7 + lVar5);
            puVar8 = (undefined8 *)(*plVar1 + lVar5);
            lVar5 = lVar5 + 0x38;
            uVar2 = puVar8[1];
            uVar9 = puVar8[2];
            *puVar10 = *puVar8;
            puVar10[1] = uVar2;
            puVar10[2] = uVar9;
            uVar2 = puVar8[3];
            uVar9 = puVar8[4];
            uVar3 = puVar8[6];
            puVar10[5] = puVar8[5];
            puVar10[6] = uVar3;
            puVar10[3] = uVar2;
            puVar10[4] = uVar9;
          } while ((ulong)uVar6 * 0x38 != lVar5);
          lVar5 = *plVar1;
        }
        FUN__text__00400fc0(0,lVar5);
      }
    }
    else {
      lVar7 = FUN__text__00400fa0(0);
      if (lVar7 == 0) {
        return 0x34;
      }
    }
    *(long *)(param_1 + 0x1b8) = lVar7;
    *(uint *)(param_1 + 0x1c4) = (uint)uVar4;
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  if (uVar4 != 0) {
    puVar10 = *(undefined8 **)(lVar7 + 0x20);
    do {
      uVar6 = *(uint *)(param_1 + 0x1c0);
      if (*(uint *)(param_1 + 0x1c4) <= uVar6) {
        FUN__text__0047b150(plVar1);
        uVar6 = *(uint *)(param_1 + 0x1c0);
      }
      uVar11 = uVar11 - 1;
      *(uint *)(param_1 + 0x1c0) = uVar6 + 1;
      uVar9 = puVar10[6];
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar6 * 0x38);
      uVar2 = puVar10[3];
      uVar3 = puVar10[4];
      puVar8[5] = puVar10[5];
      puVar8[6] = uVar9;
      puVar8[3] = uVar2;
      puVar8[4] = uVar3;
      uVar9 = puVar10[2];
      uVar2 = *puVar10;
      puVar8[1] = puVar10[1];
      puVar8[2] = uVar9;
      *puVar8 = uVar2;
      puVar10 = puVar10 + 7;
    } while (uVar11 != 0);
  }
  *(ushort *)(param_1 + 0x208) = *(ushort *)(param_1 + 0x208) | 8;
  return 1;
}


