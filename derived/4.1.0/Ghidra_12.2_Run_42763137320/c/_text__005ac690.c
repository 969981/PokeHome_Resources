/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ac690; name: FUN_.text__005ac690
 */


void FUN__text__005ac690(undefined8 *param_1)

{
  long lVar1;
  
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    param_1[4] = lVar1;
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar1,param_1[5] - lVar1,8);
  }
  param_1[-9] = 0x895bb8;
  *param_1 = 0x895bf8;
  param_1[1] = 0x895c50;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


