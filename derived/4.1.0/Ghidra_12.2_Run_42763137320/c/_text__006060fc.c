/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006060fc; name: FUN_.text__006060fc
 */


void FUN__text__006060fc(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x3f) = 4;
  *(undefined2 *)((long)param_1 + 0x42) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN__text__005ff43c(*(undefined2 *)(param_2 + 0xd),*(undefined2 *)(param_2 + 0x22),2);
  *(undefined2 *)((long)param_1 + 0x45) = uVar1;
  *(byte *)((long)param_1 + 0x47) = *(byte *)((long)param_1 + 0x47) | 1;
  FUN__text__00625ca0(param_1,param_2);
  return;
}


