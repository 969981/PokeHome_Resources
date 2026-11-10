/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f67a4; name: FUN_.text__005f67a4
 */


void FUN__text__005f67a4(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  ulong local_30;
  void *pvStack_28;
  
  local_30 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0x70f17f;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  pvStack_28 = param_2;
  std::align(8,param_3,&pvStack_28,&local_30);
  param_1[6] = pvStack_28;
  param_1[7] = param_3 - local_30 & 0xfffffffffffffff8;
  uVar1 = FUN__text__005f5cb0(param_1);
  param_1[8] = uVar1;
  FUN__text__005f65a0(auStack_48,param_1,0,0);
  param_1[9] = local_38;
  return;
}


