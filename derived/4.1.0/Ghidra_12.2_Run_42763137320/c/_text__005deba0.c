/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005deba0; name: FUN_.text__005deba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005deba0(long *param_1,undefined1 param_2)

{
  long lVar1;
  
  FUN__text__005dec04();
  lVar1 = _DAT_008a5568;
  *(undefined2 *)(param_1 + 0xc) = 0x8080;
  *(undefined1 *)((long)param_1 + 99) = 0x80;
  *(undefined1 *)((long)param_1 + 0x62) = param_2;
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[9] = lVar1 + 0x90;
  param_1[10] = lVar1 + 0x100;
  *param_1 = lVar1 + 0x10;
  *(undefined4 *)(param_1 + 0xe) = 1;
  return;
}


