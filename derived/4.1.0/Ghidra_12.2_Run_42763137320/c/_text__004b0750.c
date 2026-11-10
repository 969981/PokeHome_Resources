/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b0750; name: FUN_.text__004b0750
 */


/* WARNING: Removing unreachable block (ram,0x004b2348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004b0750(long param_1,byte param_2,undefined1 *param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  
  *param_3 = 0;
  piVar9 = _DAT_008a48e0;
  DataMemoryBarrier(2,3);
  iVar8 = (int)*(undefined8 *)(param_1 + 0x18) - (int)*(undefined8 *)(param_1 + 0x10);
  uVar2 = (*(uint *)(param_1 + 0x30) & iVar8 >> 0x1f) + iVar8;
  if (uVar2 != 0) {
    if ((param_2 & 1) == 0) {
      if (*(int *)(param_1 + 0x8c) != 0) goto LAB__text__004b07e4;
    }
    else if (*(uint *)(param_1 + 0x30) >> 1 < uVar2) {
LAB__text__004b07e4:
      lVar11 = param_1;
      uVar13 = 0;
      while( true ) {
        puVar1 = (ulong *)(param_1 + 0x10);
        puVar12 = (ushort *)*puVar1;
        while( true ) {
          puVar6 = (ushort *)0x0;
          if (puVar12 != *(ushort **)(param_1 + 0x18)) {
            puVar6 = puVar12;
          }
          uVar7 = *puVar6;
          if (*puVar1 + 4 <= *(ulong *)(param_1 + 0x28)) break;
          uVar4 = *puVar1 + (ulong)(*(int *)(param_1 + 0x30) + 3U & 0xfffffffc);
          if (*(ulong *)(param_1 + 0x28) <= uVar4) {
            uVar4 = *(ulong *)(param_1 + 0x20);
          }
          *puVar1 = uVar4;
          puVar12 = (ushort *)*puVar1;
        }
        if (puVar6[1] < 0x3f) break;
        lVar11 = 1;
        uVar4 = *(ulong *)(param_1 + 0x10) + (ulong)(uVar7 + 3 & 0x1fffc);
        if (*(ulong *)(param_1 + 0x28) <= uVar4) {
          uVar4 = *(ulong *)(param_1 + 0x20);
        }
        *(ulong *)(param_1 + 0x10) = uVar4;
        uVar3 = uVar13 + uVar7;
        uVar5 = uVar3;
        if ((param_2 & 1) == 0) {
          uVar5 = uVar13;
        }
        *piVar9 = *piVar9 + 1;
        uVar13 = uVar5;
        if ((param_2 & 1 & uVar2 >> 1 <= uVar3) != 0) {
          return 1;
        }
      }
                    /* WARNING: Could not emulate address calculation at 0x004b08b4 */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)(&UNK__text__004b08c0 +
                         (ulong)*(ushort *)((ulong)puVar6[1] * 2 + 0x73d9b0) * 4))(lVar11);
      return uVar10;
    }
  }
  return 0;
}


