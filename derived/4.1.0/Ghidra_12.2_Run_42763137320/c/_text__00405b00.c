/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405b00; name: FUN_.text__00405b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00405b00(uint param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(param_1 & 0x7f);
  if ((*(uint *)(_DAT_008a4cc0 + uVar2 * 4) == param_1) &&
     (lVar1 = tpidr_el0, *(uint *)(lVar1 + 0x68 + uVar2 * 4) == param_1)) {
    return *(undefined8 *)(lVar1 + 0x28 + uVar2 * 8);
  }
  return 0;
}


