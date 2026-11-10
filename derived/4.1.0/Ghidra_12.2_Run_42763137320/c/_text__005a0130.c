/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0130; name: FUN_.text__005a0130
 */


void FUN__text__005a0130(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  pcVar2 = *(code **)(param_1 + 0x88);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar2)(param_1 + 0xa0);
  }
  lVar3 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x68);
    if (0x167 < uVar1) {
      uVar1 = uVar1 / 0x168;
      lVar4 = lVar3;
      do {
        FUN__text__005a0590(lVar4);
        uVar1 = uVar1 - 1;
        lVar4 = lVar4 + 0x168;
      } while (uVar1 != 0);
      uVar1 = *(ulong *)(param_1 + 0x68);
    }
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
              (*(long **)(param_1 + 0x60),lVar3,uVar1,*(undefined8 *)(param_1 + 0x70));
  }
  FUN__text__005b5108(param_1);
  return;
}


