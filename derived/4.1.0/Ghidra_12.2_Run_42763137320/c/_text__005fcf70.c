/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fcf70; name: FUN_.text__005fcf70
 */


void FUN__text__005fcf70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__00635c70(param_2,param_3);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar1 = FUN__text__00632ce4(param_2,0,param_3);
  FUN__text__005fcce0(param_1,uVar1,param_3,param_4,param_2,2);
  uVar1 = FUN__text__00632ce4(param_2,1,param_3);
  FUN__text__005fcce0(param_1,uVar1,param_3,param_4,param_2,2);
  uVar1 = FUN__text__00632ce4(param_2,2,param_3);
  FUN__text__005fcce0(param_1,uVar1,param_3,param_4,param_2,2);
  uVar1 = FUN__text__00632ce4(param_2,3,param_3);
  FUN__text__005fcce0(param_1,uVar1,param_3,param_4,param_2,2);
  return;
}


