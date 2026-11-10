/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002936b4; name: FUN_.text__002936b4
 */


void FUN__text__002936b4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(lVar2 + 0x2d0),0x731e30);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(lVar2 + 0x2d0),0x731e38);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(lVar2 + 0x2d0),0x731e40);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  FUN__text__00290fa0(lVar2);
  return;
}


