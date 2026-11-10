/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2bc0; name: FUN_.text__005f2bc0
 */


void FUN__text__005f2bc0(long param_1,ushort *param_2,int param_3,int param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  
  FUN__text__005f3254(param_5);
  FUN__text__005f33f0(param_5);
  if (*(int *)(*(long *)(param_1 + 0x90) + 8) == 0) {
    if (param_3 != 0) {
      uVar2 = param_4 * 0x2983 + 0x7c89;
      do {
        uVar1 = FUN__text__005f335c(param_5,*param_2 ^ uVar2);
        if ((uVar1 & 1) == 0) goto LAB__text__005f2c80;
        param_2 = param_2 + 1;
        uVar2 = uVar2 >> 0xd & 7 | uVar2 << 3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar1 = FUN__text__005f335c(param_5,*param_2);
      if ((uVar1 & 1) == 0) {
LAB__text__005f2c80:
        FUN__text__005f33f0(param_5);
        return;
      }
      param_2 = param_2 + 1;
    }
  }
  FUN__text__005f33c0(param_5);
  return;
}


