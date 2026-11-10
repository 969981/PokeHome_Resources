/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9b48; name: FUN_.text__003b9b48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b9b48(long *param_1)

{
  code *pcVar1;
  
  *param_1 = _DAT_008a3670 + 0x10;
  pcVar1 = (code *)param_1[0x25];
  if (pcVar1 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar1)(param_1 + 0x28);
  }
  operator_delete(param_1);
  return;
}


