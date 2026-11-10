/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058fb7c; name: FUN_.text__0058fb7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0058fb7c(long param_1)

{
  int iVar1;
  void *__dest;
  long lVar2;
  ushort *puVar3;
  ushort *local_38;
  uint local_30;
  undefined1 local_28;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  else {
    __dest = (void *)FUN__text__00400f80(5);
    *(void **)(param_1 + 0xf8) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(uint *)(param_1 + 0xd4) != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x108),(ulong)*(uint *)(param_1 + 0xd4));
      *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0xd4);
    }
  }
  puVar3 = *(ushort **)(param_1 + 0x108);
  local_38 = puVar3 + 1;
  local_28 = 0;
  local_4 = 0;
  local_30 = (uint)*puVar3;
  *(ulong *)(param_1 + 0x108) = (long)puVar3 + (ulong)*puVar3 + 2;
  lVar2 = FUN__text__0058e320(_DAT_008a3eb8,param_1 + 0x58,&local_38,&local_4);
  *(long *)(param_1 + 0x80) = lVar2;
  if ((lVar2 == 0) ||
     (iVar1 = FUN__text__00585d90(param_1 + 0x68,*(undefined1 *)(param_1 + 0xb8)), iVar1 != 0)) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0x60) = 3;
  return 1;
}


