/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00606050; name: FUN_.text__00606050
 */


void FUN__text__00606050(undefined8 *param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x3f) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN__text__005ff43c(*(undefined2 *)(param_3 + 0xd),*(undefined2 *)(param_3 + 0x22),2);
  *(undefined2 *)((long)param_1 + 0x45) = uVar1;
  *(byte *)((long)param_1 + 0x47) = *(byte *)((long)param_1 + 0x47) | 1;
  FUN__text__00625ca0(param_1,param_3);
  FUN__text__00607ec0(param_1,param_2,param_3);
  uVar1 = FUN__text__00609148(*(undefined2 *)(param_2 + 0x38),*(undefined1 *)(param_3 + 0x91));
  *(undefined2 *)(param_1 + 8) = uVar1;
  uVar1 = FUN__text__006091bc(*(undefined2 *)(param_2 + 0x3a),*(undefined1 *)(param_3 + 0x91));
  *(undefined2 *)((long)param_1 + 0x42) = uVar1;
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)(param_2 + 0x3c);
  return;
}


