/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5a08; name: FUN_.text__005f5a08
 */


void FUN__text__005f5a08(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  
  uVar1 = param_1 + 0x10;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = uVar1 / param_2;
  }
  lVar4 = uVar1 - uVar2 * param_2;
  uVar3 = 0;
  if (lVar4 != 0) {
    param_2 = param_2 - lVar4;
    uVar3 = (undefined1)param_2;
    *(undefined1 *)(uVar1 + (param_2 & 0xff) + -1) = uVar3;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  return;
}


