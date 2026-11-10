/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004afb00; name: FUN_.text__004afb00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004afb00(long param_1)

{
  ulong uVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) {
    do {
      puVar3 = *(ushort **)(param_1 + 0x10);
      puVar2 = (ushort *)0x0;
      if (puVar3 != *(ushort **)(param_1 + 0x18)) {
        puVar2 = puVar3;
      }
      if (puVar2[1] - 1 < 0x3f) {
                    /* WARNING: Could not emulate address calculation at 0x004afb6c */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__004afb78 + (ulong)*(byte *)((ulong)(puVar2[1] - 1) + 0x73d970) * 4))
                  ();
        return;
      }
      uVar1 = *(long *)(param_1 + 0x10) + ((ulong)(*puVar2 + 3) & 0x1fffc);
      if (*(ulong *)(param_1 + 0x28) <= uVar1) {
        uVar1 = *(ulong *)(param_1 + 0x20);
      }
      *(ulong *)(param_1 + 0x10) = uVar1;
    } while (*(ulong *)(param_1 + 0x10) != *(ulong *)(param_1 + 0x18));
  }
  return;
}


