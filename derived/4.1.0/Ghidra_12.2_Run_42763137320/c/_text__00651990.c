/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651990; name: FUN_.text__00651990
 */


undefined8 FUN__text__00651990(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  local_24 = 0;
  iVar1 = FUN__text__006569e8(2,param_1,&local_24);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN__text__006518cc(2,&local_24,param_1,param_2);
  }
  return uVar2;
}


