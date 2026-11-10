/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00509380; name: FUN_.text__00509380
 */


void FUN__text__00509380(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  uVar4 = *(uint *)(param_1 + 0x80);
  uVar5 = *(ushort *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x38);
  uVar8 = (uint)uVar5;
  if ((uVar4 <= uVar5) && (*(uint *)(param_1 + 0x84) < uVar8)) {
    if (*(long *)(param_1 + 0x78) == 0) {
      lVar6 = FUN__text__00400f80(9,(ulong)uVar5 * 0x18);
      if (lVar6 == 0) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x78);
      if ((lVar9 != 0) && (lVar9 != lVar6)) {
        if (uVar4 != 0) {
          lVar9 = 0;
          do {
            puVar1 = (undefined8 *)(lVar6 + lVar9);
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar9);
            lVar9 = lVar9 + 0x18;
            uVar3 = puVar2[1];
            uVar7 = puVar2[2];
            *puVar1 = *puVar2;
            puVar1[1] = uVar3;
            puVar1[2] = uVar7;
          } while ((ulong)uVar4 * 0x18 != lVar9);
          lVar9 = *(long *)(param_1 + 0x78);
        }
        FUN__text__00400fc0(9,lVar9);
      }
    }
    else {
      lVar6 = FUN__text__00400fa0();
      if (lVar6 == 0) {
        return;
      }
    }
    *(long *)(param_1 + 0x78) = lVar6;
    *(uint *)(param_1 + 0x84) = uVar8;
  }
  *(uint *)(param_1 + 0x80) = uVar8;
  if (uVar8 != 0) {
    lVar9 = 0x18;
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar6);
      puVar2 = (undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x20) + lVar9);
      uVar3 = *puVar2;
      uVar7 = puVar2[2];
      puVar1[1] = puVar2[1];
      puVar1[2] = uVar7;
      *puVar1 = uVar3;
      FUN__text__005081a0(param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x38),
                          *(long *)(param_1 + 0x78) + lVar6);
      lVar6 = lVar6 + 0x18;
      lVar9 = lVar9 + 0x38;
    } while ((ulong)uVar5 * 0x18 != lVar6);
  }
  return;
}


