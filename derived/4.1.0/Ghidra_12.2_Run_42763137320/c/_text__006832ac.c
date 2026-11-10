/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006832ac; name: FUN_.text__006832ac
 */


undefined8
FUN__text__006832ac(long *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                   long param_6)

{
  undefined8 uVar1;
  long local_48;
  
  uVar1 = 0xfffffe0b;
  if ((param_4 - 1U < param_3) && (param_5 <= param_2)) {
    local_48 = 0;
    uVar1 = FUN__text__0068335c(&local_48,param_2,param_6);
    if ((int)uVar1 == 0) {
      param_1[7] = param_5;
      *param_1 = local_48;
      param_1[1] = local_48;
      param_1[2] = param_6;
      *(ulong *)(local_48 + 0x18) = *(long *)(local_48 + 0x18) + param_5;
      *(ulong *)(param_1[1] + 0x20) = *(long *)(param_1[1] + 0x20) + param_5;
      param_1[3] = param_2;
      param_1[4] = param_3;
      param_1[5] = 1;
      param_1[6] = param_4;
    }
  }
  return uVar1;
}


