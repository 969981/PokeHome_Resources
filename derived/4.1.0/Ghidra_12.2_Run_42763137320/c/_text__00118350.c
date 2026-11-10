/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00118350; name: FUN_.text__00118350
 */


void FUN__text__00118350(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *local_8;
  
  uVar2 = *param_1;
  iVar1 = FUN__text__005d84b0(uVar2);
  if ((iVar1 == 2) && (FUN__text__005d84d4(&local_8,uVar2), local_8 != (long *)0x0)) {
    if (((char)local_8[0x10] != '\0') && ((**(code **)(*local_8 + 0x78))(), local_8 == (long *)0x0))
    {
      return;
    }
    (**(code **)(local_8[9] + 0x18))();
  }
  return;
}


