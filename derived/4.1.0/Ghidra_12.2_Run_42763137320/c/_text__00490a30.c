/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00490a30; name: FUN_.text__00490a30
 */


void FUN__text__00490a30(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  uVar6 = *(uint *)(param_1 + 0x48);
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 8);
  uVar11 = (uint)*(ushort *)(lVar10 + 0x38);
  if ((uVar6 <= *(ushort *)(lVar10 + 0x38)) && (*(uint *)(param_1 + 0x4c) < uVar11)) {
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar7 = FUN__text__00400f80(0,uVar11 * 0x30);
      if (lVar7 == 0) goto LAB__text__00490b60;
      lVar8 = *(long *)(param_1 + 0x40);
      if ((lVar8 != 0) && (lVar8 != lVar7)) {
        if (uVar6 != 0) {
          lVar8 = 0;
          do {
            puVar1 = (undefined8 *)(lVar7 + lVar8);
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar8);
            lVar8 = lVar8 + 0x30;
            uVar3 = puVar2[1];
            *puVar1 = *puVar2;
            puVar1[1] = uVar3;
            uVar3 = puVar2[2];
            uVar4 = puVar2[3];
            uVar5 = puVar2[5];
            puVar1[4] = puVar2[4];
            puVar1[5] = uVar5;
            puVar1[2] = uVar3;
            puVar1[3] = uVar4;
          } while ((ulong)uVar6 * 0x30 != lVar8);
          lVar8 = *(long *)(param_1 + 0x40);
        }
        FUN__text__00400fc0(0,lVar8);
      }
    }
    else {
      lVar7 = FUN__text__00400fa0();
      if (lVar7 == 0) goto LAB__text__00490b60;
    }
    *(long *)(param_1 + 0x40) = lVar7;
    *(uint *)(param_1 + 0x4c) = uVar11;
  }
  *(uint *)(param_1 + 0x48) = uVar11;
  if (*(short *)(lVar10 + 0x38) != 0) {
    lVar8 = 0;
    lVar7 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x20) + lVar7);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar8);
      lVar7 = lVar7 + 0x38;
      lVar8 = lVar8 + 0x30;
      uVar4 = puVar1[5];
      uVar3 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = uVar4;
      puVar2[2] = uVar3;
      puVar2[3] = uVar5;
      uVar3 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
    } while (uVar9 < *(ushort *)(lVar10 + 0x38));
  }
LAB__text__00490b60:
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}


