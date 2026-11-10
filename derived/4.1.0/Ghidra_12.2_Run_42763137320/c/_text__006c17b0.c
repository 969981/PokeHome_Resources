/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c17b0; name: FUN_.text__006c17b0
 */


void FUN__text__006c17b0(undefined1 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined1 *puVar1;
  size_t __n;
  char *__s;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    puVar3 = (undefined8 *)(param_3 + 0x50);
    do {
      __s = (char *)*puVar3;
      __n = strlen(__s);
      memcpy(param_1,__s,__n);
      puVar1 = param_1 + __n;
      uVar2 = uVar2 - 1;
      param_1 = puVar1 + 1;
      *puVar1 = 0x25;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  param_1[-1] = 0;
  return;
}


