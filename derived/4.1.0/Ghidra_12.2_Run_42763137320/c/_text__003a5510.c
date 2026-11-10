/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a5510; name: FUN_.text__003a5510
 */


void FUN__text__003a5510(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_2;
  *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x228) = 0;
  if (*(char *)(param_1 + 0x478 + uVar2) != '\0') {
    lVar1 = param_1 + uVar2 * 0x20;
    *(undefined8 *)(lVar1 + 0x2b8) = 0x89be9c53e7c747e5;
    *(undefined8 *)(lVar1 + 0x2c0) = 0x71f07b;
    *(undefined8 *)(lVar1 + 0x2c8) = 0x18;
    *(undefined1 *)(param_1 + 0x478 + uVar2) = 0;
  }
  return;
}


