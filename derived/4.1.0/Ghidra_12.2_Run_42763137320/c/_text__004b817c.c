/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b817c; name: FUN_.text__004b817c
 */


void FUN__text__004b817c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN__text__00411bc0();
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar2 + 200) = uVar1;
  FUN__text__0040cca0(param_1,2);
  FUN__text__00411bf0();
  return;
}


