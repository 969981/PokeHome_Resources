/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004047e0; name: FUN_.text__004047e0
 */


void FUN__text__004047e0(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4));
  if (puVar1 != param_2) {
    FUN__text__00405b80(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4),param_2);
    if (param_2 != (undefined8 *)0x0) {
      uVar2 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4));
      *param_2 = uVar2;
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN__text__00403d00(param_1,puVar1,1,1);
      return;
    }
  }
  return;
}


