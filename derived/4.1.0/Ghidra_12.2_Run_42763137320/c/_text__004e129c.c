/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e129c; name: FUN_.text__004e129c
 */


void FUN__text__004e129c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4
                        ,long param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = *(uint *)(param_5 + 8);
  local_18 = param_1;
  uStack_14 = param_2;
  FUN__text__0041f110(1.0 / (float)*(ushort *)(param_5 + 0x10),param_4,param_5,
                      uVar1 & 0xffff7f00 | uVar1 + ((int)(uVar1 << 0x10) >> 0x1f) & 0xff,&local_18,
                      param_6,param_7);
  return;
}


