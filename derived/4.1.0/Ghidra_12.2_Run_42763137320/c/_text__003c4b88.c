/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4b88; name: FUN_.text__003c4b88
 */


void FUN__text__003c4b88(undefined4 param_1,long param_2,undefined4 param_3,uint param_4,
                        uint param_5)

{
  ulong uVar1;
  
  uVar1 = FUN__text__003e9e24(*(undefined8 *)(param_2 + 0xc0));
  if ((uVar1 & 1) == 0) {
    FUN__text__003e9c38(*(undefined8 *)(param_2 + 0xc0),param_3,param_5 & 1);
  }
  FUN__text__003e9e8c(*(undefined8 *)(param_2 + 0xc0),param_3,param_4 & 1);
  FUN__text__003e9cec(param_1,*(undefined8 *)(param_2 + 0xc0),param_3);
  return;
}


