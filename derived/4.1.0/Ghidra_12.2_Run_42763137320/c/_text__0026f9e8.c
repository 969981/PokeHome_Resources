/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026f9e8; name: FUN_.text__0026f9e8
 */


void FUN__text__0026f9e8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__00132134(*(undefined8 *)(param_1 + 0x80));
  if (((uVar2 & 1) == 0) ||
     (uVar1 = FUN__text__00132530(*(undefined8 *)(param_1 + 0x80)), 3 < uVar1)) {
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x0026fa28 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__0026fa34 + (ulong)*(byte *)((ulong)uVar1 + 0x72d002) * 4))();
  return;
}


