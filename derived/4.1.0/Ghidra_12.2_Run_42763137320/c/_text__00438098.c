/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438098; name: FUN_.text__00438098
 */


void FUN__text__00438098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined4 *param_5)

{
  undefined4 local_30;
  undefined1 uStack_29;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    local_24 = *(undefined4 *)(param_1 + 0x18);
    FUN__text__0041a060(*param_5,(long *)(param_1 + 8),&local_24,&local_28);
    *(undefined4 *)(param_1 + 0x18) = local_24;
  }
  local_30 = local_28;
  FUN__text__004363b0(*(undefined8 *)(param_1 + 0x20),param_3,&local_30,&uStack_29,0,0,0);
  return;
}


