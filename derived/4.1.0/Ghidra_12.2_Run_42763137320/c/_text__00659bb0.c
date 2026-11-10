/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00659bb0; name: FUN_.text__00659bb0
 */


long FUN__text__00659bb0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long lStack_28;
  long local_20;
  undefined8 local_18;
  
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_20 = 0;
  local_18 = 0;
  local_30 = 0;
  lStack_28 = 0;
  local_40 = param_2[2];
  uStack_38 = param_2[3];
  iVar1 = FUN__text__00658840(&local_30,FUN__text__00659b08,param_1,&local_50);
  if ((iVar1 == -1) || ((int)local_18 != 0)) {
    if (local_20 != 0) {
      FUN__text__006783e4(local_30);
    }
    local_30 = 0;
  }
  else if (local_20 == 0) {
    local_30 = FUN__text__00678404(0x70f683);
  }
  else {
    *(undefined1 *)(local_30 + lStack_28) = 0;
  }
  return local_30;
}


