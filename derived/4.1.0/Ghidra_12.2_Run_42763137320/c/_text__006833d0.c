/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006833d0; name: FUN_.text__006833d0
 */


undefined8 FUN__text__006833d0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long local_28;
  
  if (param_2 < (ulong)param_1[7]) {
    return 0xfffffe0b;
  }
  local_28 = 0;
  uVar1 = FUN__text__0068335c(&local_28,param_2,param_1[2]);
  if ((int)uVar1 == 0) {
    FUN__text__00683464(param_1);
    uVar1 = 0;
    *param_1 = local_28;
    param_1[1] = local_28;
    *(long *)(local_28 + 0x18) = *(long *)(local_28 + 0x18) + param_1[7];
    *(long *)(param_1[1] + 0x20) = *(long *)(param_1[1] + 0x20) + param_1[7];
    param_1[3] = param_2;
    param_1[5] = 1;
  }
  return uVar1;
}


