/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3720; name: FUN_.text__005f3720
 */


short * FUN__text__005f3720(short *param_1,int param_2)

{
  short sVar1;
  
  do {
    if (param_2 == 0) {
      return param_1;
    }
    while( true ) {
      for (; sVar1 = *param_1, sVar1 == 0x10; param_1 = param_1 + (ulong)(ushort)param_1[1] + 2) {
      }
      if (sVar1 == 0) {
        if (param_2 == 0) {
          return param_1;
        }
        return (short *)0x0;
      }
      if (sVar1 == 10) break;
      param_1 = param_1 + 1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}


