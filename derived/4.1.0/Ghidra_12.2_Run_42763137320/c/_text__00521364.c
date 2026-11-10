/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521364; name: FUN_.text__00521364
 */


undefined1  [16]
FUN__text__00521364(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   long param_5)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = param_1;
  uStack_30 = param_2;
  local_28 = param_3;
  dVar2 = (double)FUN__text__00520f94(param_4,&local_38);
  if (*(int *)(param_4 + 0x60) == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = *(long *)(**(long **)(param_4 + 0x58) + 0x78);
  }
  fVar4 = -*(float *)(param_4 + 0x44);
  if (lVar1 != param_5) {
    fVar4 = *(float *)(param_4 + 0x44);
  }
  auVar3._0_8_ = dVar2 + (double)(fVar4 * *(float *)(param_4 + 0x30));
  auVar3._8_8_ = 0;
  return auVar3;
}


