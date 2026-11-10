/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00659a28; name: FUN_.text__00659a28
 */


long FUN__text__00659a28(undefined8 param_1)

{
  int iVar1;
  undefined1 local_100 [128];
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  lStack_58 = 0;
  iVar1 = FUN__text__00658840(&local_60,FUN__text__00659b08,param_1,local_100 + 0x80);
  if ((iVar1 == -1) || ((int)local_48 != 0)) {
    if (local_50 != 0) {
      FUN__text__006783e4(local_60);
    }
    local_60 = 0;
  }
  else if (local_50 == 0) {
    local_60 = FUN__text__00678404(0x70f683);
  }
  else {
    *(undefined1 *)(local_60 + lStack_58) = 0;
  }
  return local_60;
}


