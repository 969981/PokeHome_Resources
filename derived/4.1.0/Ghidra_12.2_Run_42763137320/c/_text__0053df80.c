/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053df80; name: FUN_.text__0053df80
 */


void FUN__text__0053df80(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  plVar2 = (long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  uVar5 = *(uint *)(param_2 + 0x38);
  uVar1 = uVar5 + 1;
  if (*(uint *)(param_1 + 0x3c) < uVar1) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar6 = *(uint *)(param_1 + 0x38);
      lVar7 = FUN__text__00400f80(0xe,(ulong)uVar1 * 0x18);
      if (lVar7 == 0) {
        return;
      }
      lVar8 = *plVar2;
      if ((lVar8 != 0) && (lVar8 != lVar7)) {
        if (uVar6 != 0) {
          lVar8 = 0;
          do {
            puVar3 = (undefined8 *)(lVar7 + lVar8);
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar3 = 0;
            puVar4 = (undefined8 *)(*plVar2 + lVar8);
            lVar8 = lVar8 + 0x18;
            uVar9 = puVar4[1];
            uVar10 = puVar4[2];
            *puVar3 = *puVar4;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
          } while ((ulong)uVar6 * 0x18 != lVar8);
          lVar8 = *plVar2;
        }
        FUN__text__00400fc0(0xe,lVar8);
      }
    }
    else {
      lVar7 = FUN__text__00400fa0(0xe);
      if (lVar7 == 0) {
        return;
      }
    }
    *(long *)(param_1 + 0x30) = lVar7;
    *(uint *)(param_1 + 0x3c) = uVar1;
  }
  FUN__text__0053e1e0(plVar2,uVar5);
  memcpy((void *)*plVar2,*(void **)(param_2 + 0x30),(ulong)uVar5 * 0x18);
  return;
}


