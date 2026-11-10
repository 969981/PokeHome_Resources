/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006803b8; name: FUN_.text__006803b8
 */


undefined8 FUN__text__006803b8(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 + 0x215U < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x006803d0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__006803dc +
                      (ulong)*(byte *)((ulong)(param_1 + 0x215U) + 0x761932) * 4))();
    return uVar1;
  }
  if (param_1 == -0x1fe) {
    return 5;
  }
  if (param_1 == -0x1f9) {
    return 1;
  }
  return 2;
}


