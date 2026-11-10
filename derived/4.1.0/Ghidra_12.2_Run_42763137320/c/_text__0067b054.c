/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067b054; name: FUN_.text__0067b054
 */


undefined8 FUN__text__0067b054(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN__text__006863d4(param_2);
  if ((iVar1 == 0) || (uVar2 = FUN__text__00686028(param_2), (int)uVar2 == 0)) {
    FUN__text__00680958(param_1,*(undefined4 *)(param_2 + 0xb8));
    FUN__text__00685b28(param_2);
    FUN__text__006809e4(param_1 + 0x890,param_2);
    uVar2 = 0;
  }
  return uVar2;
}


