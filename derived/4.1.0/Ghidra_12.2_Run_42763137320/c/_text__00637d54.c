/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00637d54; name: FUN_.text__00637d54
 */


uint FUN__text__00637d54(byte param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                        undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                        undefined2 param_9,undefined2 param_10,undefined2 param_11,
                        undefined2 param_12,undefined2 param_13,undefined2 param_14,
                        undefined2 param_15,undefined2 param_16,short param_17,short param_18,
                        short param_19,short param_20,short param_21,short param_22)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN__text__00637e5c(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10,
                              param_11,param_12,param_13,param_14,param_15,param_16,param_4);
  uVar2 = iVar1 + (int)((((float)param_1 * 4.0) / 100.0 + 2.0) *
                       (float)(ushort)(param_18 + param_17 + param_19 + param_20 +
                                      param_21 + param_22)) & 0xffff;
  if (9999 < uVar2) {
    uVar2 = 10000;
  }
  return uVar2;
}


