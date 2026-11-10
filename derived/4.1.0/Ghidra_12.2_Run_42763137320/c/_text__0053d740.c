/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d740; name: FUN_.text__0053d740
 */


void FUN__text__0053d740(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  plVar1 = (long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar3 = *(uint *)(param_2 + 0x40);
  iVar5 = (uVar3 + 1) - *(uint *)(param_1 + 0x44);
  if ((*(uint *)(param_1 + 0x44) <= uVar3 + 1 && iVar5 != 0) &&
     (uVar6 = FUN__text__0051bfc0(plVar1,iVar5), (uVar6 & 1) == 0)) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x40);
  if (uVar4 <= uVar3) {
    iVar5 = uVar3 - *(uint *)(param_1 + 0x44);
    if ((*(uint *)(param_1 + 0x44) <= uVar3 && iVar5 != 0) &&
       (uVar6 = FUN__text__0051bfc0(plVar1,iVar5), (uVar6 & 1) == 0)) goto LAB__text__0053d82c;
    if ((uVar4 < uVar3) && (lVar11 = *plVar1, lVar11 != 0)) {
      lVar8 = ~(ulong)uVar4 + (ulong)uVar3;
      lVar9 = (ulong)uVar4 * 0x28;
      while( true ) {
        if (lVar11 != 0) {
          puVar2 = (undefined8 *)(lVar11 + lVar9);
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
        }
        if (lVar8 == 0) break;
        lVar11 = *plVar1;
        lVar8 = lVar8 + -1;
        lVar9 = lVar9 + 0x28;
      }
    }
  }
  *(uint *)(param_1 + 0x40) = uVar3;
LAB__text__0053d82c:
  memcpy((void *)*plVar1,*(void **)(param_2 + 0x38),(ulong)uVar3 * 0x28);
  return;
}


