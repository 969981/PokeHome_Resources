/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00162bc0; name: FUN_.text__00162bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00162bc0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x192b0) = param_2;
  *(undefined1 *)(param_1 + 0x17310) = 1;
  *(undefined4 *)(param_1 + 0x17314) = 3;
  *(undefined1 **)(param_1 + 0x60) = &LAB__text__00162a10;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN__text__0068ee50(param_1 + 0x17338,_DAT_008a0448,param_1 + 0x58,0,0,0);
  FUN__text__0069016c(param_1 + 0x17338,_DAT_008a0428,param_1 + 0x19250);
  *(undefined1 *)(param_1 + 0x19208) = 0;
  return;
}


