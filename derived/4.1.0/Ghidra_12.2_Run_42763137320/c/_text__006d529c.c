/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d529c; name: FUN_.text__006d529c
 */


void FUN__text__006d529c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_00c5fb78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_00c5fb78);
    if (iVar1 != 0) {
      DAT_00c5fb88 = 0x401;
      DAT_00c5fb8b = 0;
      DAT_00c5fb8a = 5;
      DAT_00c5fb8f = 0;
      DAT_00c5fb90 = 0x1040300010401;
      DAT_00c5fb98 = 0x5040100080001;
      __cxa_guard_release(&DAT_00c5fb78);
    }
  }
  if ((DAT_00c5fb80 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_00c5fb80);
    if (iVar1 != 0) {
      DAT_00c5fba3 = 0;
      DAT_00c5fba0 = 0x401;
      DAT_00c5fba2 = 5;
      DAT_00c5fba7 = 0;
      DAT_00c5fba8 = 0x1040300010401;
      DAT_00c5fbb0 = 0x1010500080001;
      __cxa_guard_release(&DAT_00c5fb80);
    }
  }
  *param_1 = &DAT_00c5fb88;
  *param_2 = &DAT_00c5fba0;
  return;
}


