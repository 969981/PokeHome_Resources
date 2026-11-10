/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686934; name: FUN_.text__00686934
 */


undefined8 FUN__text__00686934(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN__text__00684b44(param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xfffffffffffffe0b;
  }
  else {
    if ((ulong)(param_4 * 6) <= param_2) {
      uVar2 = FUN__text__0068434c(param_1,param_3,param_4);
      return uVar2;
    }
    uVar2 = 0xfffffffffffffdf3;
  }
  return uVar2;
}


