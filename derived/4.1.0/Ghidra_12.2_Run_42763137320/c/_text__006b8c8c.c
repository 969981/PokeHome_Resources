/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b8c8c; name: FUN_.text__006b8c8c
 */


void FUN__text__006b8c8c(undefined4 param_1,undefined8 *param_2,undefined8 param_3,
                        undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__006b253c(*param_2,3);
  uVar2 = FUN__text__006b253c(*param_2,4);
  FUN__text__006b7e84(param_1,param_2,param_3,param_4,uVar1,uVar2,*(byte *)(param_2 + 0x45) >> 2 & 1
                      ,*(byte *)(param_2 + 0x45) >> 3 & 1);
  return;
}


