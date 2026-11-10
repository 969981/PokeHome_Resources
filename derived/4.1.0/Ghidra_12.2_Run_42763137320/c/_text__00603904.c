/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00603904; name: FUN_.text__00603904
 */


/* WARNING: Removing unreachable block (ram,0x006040bc) */
/* WARNING: Removing unreachable block (ram,0x006040c8) */

undefined8 FUN__text__00603904(byte param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x00603924 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK__text__00603934 + (ulong)*(ushort *)((ulong)param_1 * 2 + 0x75a014) * 4))
                    (0);
  return uVar1;
}


