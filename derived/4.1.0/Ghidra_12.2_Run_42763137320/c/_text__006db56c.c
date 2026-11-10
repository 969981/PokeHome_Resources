/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006db56c; name: FUN_.text__006db56c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006db56c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x752) != '\0') ||
     (lVar4 = FUN__text__006dbac0(*_DAT_008a6bb0), lVar4 == 0)) {
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x88) = 0;
  *(long *)(param_1 + 8) = lVar4;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x418);
  iVar1 = *(int *)(lVar5 + 0x28);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(lVar5 + 0x2c) / iVar1;
  }
  *(int *)(lVar4 + 0x74) = *(int *)(lVar5 + 0x2c) - iVar2 * iVar1;
  iVar1 = 0;
  if (*(int *)(lVar5 + 0x2c) + 1 < *(int *)(lVar5 + 0x28)) {
    iVar1 = *(int *)(lVar5 + 0x2c) + 1;
  }
  *(int *)(lVar5 + 0x2c) = iVar1;
  puVar3 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x10) + 0x1f0) + (long)*(int *)(param_1 + 0x20) * 0x10);
  uVar6 = *puVar3;
  *(undefined8 *)(lVar4 + 0x28) = puVar3[1];
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  return 1;
}


