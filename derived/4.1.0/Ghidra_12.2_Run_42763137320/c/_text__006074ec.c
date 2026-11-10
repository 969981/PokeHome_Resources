/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006074ec; name: FUN_.text__006074ec
 */


void FUN__text__006074ec(uint param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                        undefined1 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN__text__006029e4(param_1 & 0xffff);
  uVar2 = FUN__text__00602a78(param_1,param_2,param_6);
  uVar3 = FUN__text__00602b10(param_1,param_3);
  uVar2 = FUN__text__005fea6c(uVar1,uVar2,2);
  FUN__text__006378fc(uVar1,uVar3,uVar2,param_4,param_5);
  return;
}


