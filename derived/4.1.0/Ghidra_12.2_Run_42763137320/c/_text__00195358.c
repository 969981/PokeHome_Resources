/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00195358; name: FUN_.text__00195358
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00195358(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  uVar3 = (ulong)*(uint *)(param_2 + 4);
  if (*param_2 == '\0') {
    uVar6 = *(uint *)(param_2 + 8);
    puVar4 = (ulong *)(param_2 + 0xc);
    lVar2 = *(long *)(param_1 + 0x40);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + uVar3 * 0x20 + 0x10) + 0x30) + 0x150) +
                      (ulong)*(uint *)(param_2 + 0xc) * 0xa0 +
                      (ulong)*(uint *)(param_2 + 0x10) * 0x20 + 0x18);
    if (lVar7 == 0 || *(int *)(lVar7 + 0x18) == 0) {
      return 0;
    }
    puVar4 = (ulong *)(lVar7 + 0x10);
    uVar3 = (ulong)*(uint *)(lVar7 + 8);
    uVar6 = *(uint *)(lVar7 + 0xc);
  }
  uVar5 = *puVar4;
  lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + uVar3 * 0x20 + 0x10) + 0x30) +
                              (ulong)(uVar6 / 0x1e) * 0x20 + 0x10) +
                    (ulong)((uVar6 % 0x1e) % 6) * 0xa0 + (ulong)((uVar6 % 0x1e) / 6) * 0x20 + 0x10);
  if (lVar2 != 0 && *(int *)(lVar2 + 0x18) != 0) {
    if (((uint)uVar5 < 6) && ((uint)(uVar5 >> 0x20) < 5)) {
      lVar2 = *(long *)(lVar2 + (uVar5 & 0xffffffff) * 0xa0 + (uVar5 >> 0x20) * 0x20 + 0x30);
      iVar1 = *(int *)(lVar2 + 0x18);
    }
    else {
      lVar2 = 0;
      iVar1 = _DAT_00000018;
    }
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  return 0;
}


