/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dd36c; name: FUN_.text__006dd36c
 */


void FUN__text__006dd36c(undefined8 param_1,long param_2,undefined4 param_3,long param_4,
                        undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN__text__006ed020(param_1,*(undefined8 *)(param_4 + 8),0x1ff);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  FUN__text__006ece50(param_1,*(long *)(param_2 + 0x238) + 0x120);
  FUN__text__006ecef4(param_1,*(long *)(param_2 + 0x238) + 0x148);
  FUN__text__006ecd4c(param_1,*(long *)(param_2 + 0x238) + 0x164);
  FUN__text__006ecfcc(param_1,*(long *)(param_2 + 0x238) + 0x370);
  FUN__text__006dd450(uVar1,param_1,param_2,param_4,param_6);
  FUN__text__006dd658(uVar1,param_1,param_2,param_4,param_6);
  FUN__text__006e2d48(*(undefined8 *)(*(long *)(param_2 + 0x78) + 0x20),param_1,param_2,param_3,
                      param_5,param_6);
  return;
}


