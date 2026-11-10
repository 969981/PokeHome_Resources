/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006587d8; name: FUN_.text__006587d8
 */


void FUN__text__006587d8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  long lStack_20;
  long local_18;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  lStack_20 = 0;
  local_38 = param_4[2];
  uStack_30 = param_4[3];
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN__text__00658840(&local_28,&LAB__text__0065998c,param_3,&local_48);
  if ((iVar1 != -1) && (local_18 != 0)) {
    *(undefined1 *)(local_28 - (ulong)(local_18 == lStack_20)) = 0;
  }
  return;
}


