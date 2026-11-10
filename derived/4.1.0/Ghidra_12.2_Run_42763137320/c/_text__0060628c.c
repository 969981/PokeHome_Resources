/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060628c; name: FUN_.text__0060628c
 */


void FUN__text__0060628c(undefined8 *param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x27) = 0;
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 4;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN__text__005ff43c(*(undefined2 *)(param_3 + 0xd),*(undefined2 *)(param_3 + 0x22),4);
  *(undefined2 *)((long)param_1 + 0x2c) = uVar1;
  *(byte *)((long)param_1 + 0x2e) = *(byte *)((long)param_1 + 0x2e) | 1;
  FUN__text__006277f0(param_1,param_3);
  FUN__text__006080a8(param_1,param_2,param_3);
  *(undefined2 *)((long)param_1 + 0x27) = *(undefined2 *)(param_2 + 0x37);
  *(undefined2 *)((long)param_1 + 0x29) = *(undefined2 *)(param_2 + 0x39);
  *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x3b);
  return;
}


