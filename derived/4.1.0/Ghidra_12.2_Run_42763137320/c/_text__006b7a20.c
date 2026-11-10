/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7a20; name: FUN_.text__006b7a20
 */


float FUN__text__006b7a20(long *param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_38 = 0;
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_38);
  local_30 = 0;
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_30);
  local_28 = 0;
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_28);
  bVar1 = *(byte *)(*param_1 + 0x5b) & 3;
  fVar2 = ((float)local_28 - *(float *)(*param_1 + 0x50)) * 0.5;
  if (bVar1 == 2) {
    local_30._0_4_ = fVar2 + (float)local_30;
  }
  else {
    if (bVar1 != 1) goto LAB__text__006b7ac8;
    local_30._0_4_ = (float)local_30 - fVar2;
  }
  local_30 = (ulong)(uint)(float)local_30;
LAB__text__006b7ac8:
  return (float)local_30 - (*param_2 - (float)local_38) * 0.5;
}


