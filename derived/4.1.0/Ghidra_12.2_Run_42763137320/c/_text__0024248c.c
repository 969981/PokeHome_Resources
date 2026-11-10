/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024248c; name: FUN_.text__0024248c
 */


void FUN__text__0024248c(long *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = lVar4 + (ulong)*param_2 * 0x10;
  lVar3 = *(long *)(lVar4 + 0x88);
  uVar2 = *(undefined8 *)(lVar1 + 0x108);
  *(undefined8 *)(lVar3 + 0x6e0) = *(undefined8 *)(lVar1 + 0x110);
  *(undefined8 *)(lVar3 + 0x6d8) = uVar2;
  FUN__text__002438c0(*(undefined8 *)(lVar4 + 0x88),0,0);
  FUN__text__00243e6c(*(undefined8 *)(lVar4 + 0x88));
  FUN__text__00243e90(*(undefined8 *)(lVar4 + 0x88));
  FUN__text__00245f30(*(undefined8 *)(lVar4 + 0x88));
  FUN__text__002449bc(*(undefined8 *)(lVar4 + 0x88));
  *(undefined4 *)(lVar4 + 0x78) = 0;
  return;
}


