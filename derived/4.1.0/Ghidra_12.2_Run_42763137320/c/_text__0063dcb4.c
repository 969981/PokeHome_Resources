/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063dcb4; name: FUN_.text__0063dcb4
 */


void FUN__text__0063dcb4(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0x898b40;
  param_1[1] = param_2;
  if (*(uint *)param_1[1] % 0x18 < 0x18) {
                    /* WARNING: Could not emulate address calculation at 0x0063dd04 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0063dd10 +
              (ulong)*(byte *)((ulong)(*(uint *)param_1[1] % 0x18) + 0x75c714) * 4))();
    return;
  }
  return;
}


