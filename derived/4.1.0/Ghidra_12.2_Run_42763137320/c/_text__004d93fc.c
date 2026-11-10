/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d93fc; name: FUN_.text__004d93fc
 */


undefined8 FUN__text__004d93fc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_2 = 0;
  lVar2 = FUN__text__004591d0(*(undefined8 *)(param_1 + 0x20));
  if (lVar2 == 0) {
    return 2;
  }
  uVar1 = FUN__text__0045c058();
  *param_2 = uVar1;
  return 1;
}


